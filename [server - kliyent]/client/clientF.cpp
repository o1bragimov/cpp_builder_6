//---------------------------------------------------------------------------

#include <vcl.h>
#include <stdio.h>
#include <IniFiles.hpp>
#pragma hdrstop

#include "clientF.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CGAUGES"
#pragma resource "*.dfm"
TForm1 *Form1;
TMemoryStream *MS = new TMemoryStream ; // создаем поток

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
  fs = NULL;
}
//---------------------------------------------------------------------------
void TForm1::Write(TCustomWinSocket *sc)
{
  if(MS->Position < sizePaket)  // если мы еще принимаем файл и размер потока меньше размера файла
  {
    MS->Write(Rtext.c_str(),Rtext.Length()); // записываем в поток
    cg->Progress = (100.*(MS->Position))/sizePaket;
    cg->Refresh();
    memMsg->Refresh();
    Application->ProcessMessages();
  }
  if (MS->Position == sizePaket)
  {
    MS  ->Position = 0 ; // переводим каретку потока в начало
    sc->SendText("#end#"); // Закончили
    findMet(metName) ; // Разбираем данные - смотрим, что у нас получилось
    MS->Clear() ; // освобождаем поток
    sizePaket = -1 ;
    memMsg->Lines->Add("Пакет принят !");
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ClientConnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
  memMsg->Lines->Add("Вы присоеденились к адресу: " + IPEd->Text);
  pg->ActivePage->OnShow(this);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ClientError(TObject *Sender,
      TCustomWinSocket *Socket, TErrorEvent ErrorEvent, int &ErrorCode)
{
  memMsg->Lines->Add("Ошибка клиента № " + String(ErrorCode));
  if (ErrorCode == 10061) connBtn->Enabled = true;
  ErrorCode = 0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::connBtnClick(TObject *Sender)
{
  Client->Address = IPEd->Text;
  Client->Host    = IPEd->Text;
  Client->Open() ;  // коннектимся
  ClientFile->Address = IPEd->Text;
  ClientFile->Host    = IPEd->Text;
  ClientFile->Open() ;  // коннектимся
  memMsg->Lines->Add("Коннектимся... к адресу: " + IPEd->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
  Rtext = Socket->ReceiveText() ;
  if(Rtext.Pos("#Ans#") || Rtext.Pos("#Upd#")) // пришёл ответ на запрос или очередной update
  {
    memMsg->Lines->Add("получен заголовок <" + Rtext + ">");
    Rtext.Delete(1, 5);                                      // Удаляем из заголовка потока "#Ans#" или "#Upd#"
    metName = Rtext.SubString(1,Rtext.Pos("#")-1);           // определяем имя - каким методом собираемся обработать данные
    Rtext.Delete(1, Rtext.Pos("#"));
    sizePaket = Rtext.SubString(1,Rtext.Pos("#")-1).ToInt(); // Определяем общий размер посылаемого пакета
    Rtext.Delete(1, Rtext.Pos("#"));
    MS->Size = sizePaket ;   // >>>>>> Именно так!!! <<<<<<<<<< иначе будет вылетать при больших размерах файла
    Receive = true;
  }
  Write(Socket);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::exitBtnClick(TObject *Sender)
{
  this->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::loadSh1 (void)
{
  memMsg->Lines->Add("Зашли в 'loadSh1'");
  MS->Position = 0;
  char tmp[10];
  MS->ReadBuffer((void *) tmp, (MS->Size > 10) ? 10 : MS->Size);
  int q; sscanf(tmp, "q=%i;", &q);
  memMsg->Lines->Add("Q точек = " + String(q));
  if (q <= 0) return;
  ch1->Series[0]->Clear();
  double* v = new double[2*q];
  try
    {MS->ReadBuffer((void *) v, 2*sizeof(double)*q);}
  catch(Exception &ex)
  {
    memMsg->Lines->Add("Ошибка приёма данных '" + ex.Message + "'");
    delete v; return;
  }

  for(short i = 0 ; i < q; i++)
    ch1->Series[0]->AddXY(v[i], v[i+q], "", clRed);
  delete v;
}
//---------------------------------------------------------------------------

void TForm1::findMet(AnsiString metName) // Вызов метода по имени
{
  typedef void __fastcall (__closure *TSomeFunction)(void);

  TSomeFunction func;
  TMethod meth;
  meth.Code = MethodAddress(metName);
  meth.Data = this;
  func = *(TSomeFunction*)&meth;

  if   (meth.Code)  func();
  else  memMsg->Lines->Add("Не нашли метода: " + metName);

  return ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormActivate(TObject *Sender)
{
  TIniFile* f = new TIniFile(ExtractFilePath(Application->ExeName) + "client.ini");
  IPEd->Text = f->ReadString("Main", "TCP", "127.0.0.1");
  delete f;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::loadSh2 (void)
{
  MS->Position = 0;
  char tmp[400];
  MS->ReadBuffer((void *) tmp, (MS->Size > 400) ? 400 : MS->Size);
  MS->Position = 0;
  AnsiString str = String(tmp);
  // сначала - текстовые поля
  sh21ed->Text = str.SubString(1, str.Pos("#") - 1); MS->Position += str.Pos("#"); str.Delete(1, str.Pos("#"));
  sh22ed->Text = str.SubString(1, str.Pos("#") - 1); MS->Position += str.Pos("#"); str.Delete(1, str.Pos("#"));
  sh23ed->Text = str.SubString(1, str.Pos("#") - 1); MS->Position += str.Pos("#"); str.Delete(1, str.Pos("#"));
  sh24ed->Text = str.SubString(1, str.Pos("#") - 1); MS->Position += str.Pos("#"); str.Delete(1, str.Pos("#"));
  if (MS->Size - MS->Position <= 1) { return;}
  MS->ReadBuffer((void *) tmp, (MS->Size - MS->Position > 10) ? 10 : MS->Size - MS->Position);
  int q; sscanf(tmp, "q=%i;", &q);
  if (q <= 0) return;
  ch2->Series[0]->Clear();
  double* v = new double[2*q];
  try
    {MS->ReadBuffer((void *) v, 2*sizeof(double)*q);}
  catch(Exception &ex)
  {
    memMsg->Lines->Add("Ошибка приёма данных '" + ex.Message + "'");
    delete v; return;
  }
  for(short i = 0 ; i < q; i++)
    ch2->Series[0]->AddXY(v[i], v[i+q], "", clRed);
  delete v;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::updSh2  (void)
{
  MS->Position = 0;
  char tmp[400];
  MS->ReadBuffer((void *) tmp, (MS->Size > 400) ? 400 : MS->Size);
  MS->Position = 0;
  AnsiString str = String(tmp);
  // сначала - текстовые поля
  sh21ed->Text = str.SubString(1, str.Pos("#") - 1); MS->Position += str.Pos("#"); str.Delete(1, str.Pos("#"));
  sh22ed->Text = str.SubString(1, str.Pos("#") - 1); MS->Position += str.Pos("#"); str.Delete(1, str.Pos("#"));
  sh23ed->Text = str.SubString(1, str.Pos("#") - 1); MS->Position += str.Pos("#"); str.Delete(1, str.Pos("#"));
  sh24ed->Text = str.SubString(1, str.Pos("#") - 1); MS->Position += str.Pos("#"); str.Delete(1, str.Pos("#"));

  double v[2];
  try
    {MS->ReadBuffer((void *) v, 2*sizeof(double));}
  catch(Exception &ex)
  {
    memMsg->Lines->Add("Ошибка приёма данных '" + ex.Message + "'");
    return;
  }
  ch2->Series[0]->AddXY(v[0], v[1], "", clGreen);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::loadSh3 (void)
{
  if (!MS->Size) return;
  char* s = new char [MS->Size];
  char tmp[100];
  MS->ReadBuffer(s, MS->Size);
  int i = 0;
  for  (short rw = 0 ; rw < gr3->RowCount; rw++)
    for(short cl = 0 ; cl < gr3->ColCount; cl++)
    {
      sscanf(&s[i], "%[^#]#", tmp);
      s += strlen(tmp) + 1;
      gr3->Cells[cl][rw] = String(tmp);
    }
  delete s;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TabSheet2Show(TObject *Sender)
{
  if(!Client->Socket->Connected) return ; // Не смогли соединится

  Client->Socket->SendText("#Que#loadSh2"); // отсылаем серверу Запрос
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TabSheet1Show(TObject *Sender)
{
  if(!Client->Socket->Connected) return ; // Не смогли соединится

  // Посылаем запрос на получение данных
  Client->Socket->SendText("#Que#loadSh1"); // отсылаем серверу Запрос
  memMsg->Lines->Add("отсылаем серверу Запрос <#Que#loadSh1>");

}
//---------------------------------------------------------------------------

void __fastcall TForm1::TabSheet3Show(TObject *Sender)
{
  if(!Client->Socket->Connected) return ; // Не смогли соединится

  // Посылаем запрос на получение данных
  Client->Socket->SendText("#Que#loadSh3"); // отсылаем серверу Запрос
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
  if(!Client->Socket->Connected) return ; // Не смогли соединится
  if (pg->ActivePage->TabIndex == 1)
    Client->Socket->SendText("#Que#updSh2");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::loadFileBtnClick(TObject *Sender)
{
//openDlg->InitialDir = "d:\\Фотки\\Фотки с Canon\\Шашлыки на Татьянин день 2006\\";
  openDlg->InitialDir = "d:\\Temp\\fromGaid\\XXX\\Comics\\Birthday\\";
//  openDlg->InitialDir = ExtractFilePath(Application->ExeName);
  if(openDlg->Execute())
  {
    char buff[SIZB];
    for (short i = 0 ; i < openDlg->Files->Count; i++)
    {
      AnsiString fn = openDlg->Files->Strings[i];
      AnsiString FileName = fn.SubString(fn.LastDelimiter("\\")+1,fn.Length());
      memMsg->Lines->Add("Имя файла [" + String(i+1) + "] : " + FileName);
      try
      {
        strcpy(buff, fn.c_str());
        ClientFile->Socket->SendBuf((void*) buff, SIZB);
      }
      catch(Exception &ex)
      {
        memMsg->Lines->Add("Ошибка передачи данных loadFile '" + ex.Message + "'");
        return;
      }
      //Sleep(100);
    }
    try
    {
      strcpy(buff, "#Que#endFileList#");
      ClientFile->Socket->SendBuf((void*) buff, SIZB);
    }
    catch(Exception &ex)
    {
      memMsg->Lines->Add("Ошибка передачи данных loadFile '" + ex.Message + "'");
      return;
    }
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClientConnecting(TObject *Sender,
      TCustomWinSocket *Socket)
{
  memMsg->Lines->Add("Вы присоеденились к Серверу: <" + Socket->RemoteHost + ">");
  connBtn->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClientDisconnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
  memMsg->Lines->Add("Вы отключились от сервера: <" + Socket->RemoteHost + ">");
  connBtn->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormDestroy(TObject *Sender)
{
  memMsg->Lines->SaveToFile(ExtractFilePath(Application->ExeName) + "client.log");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClientFileRead(TObject *Sender, TCustomWinSocket *Socket)
{
  Rfile = Socket->ReceiveText();
  if(Rfile.Pos("#loadFile#")) // пришёл заголовок при передаче файла
  {
    char *p = Rfile.c_str();
    memMsg->Lines->Add("получен заголовок при передаче файла <" + String(p) + ">");
    p = &p[10]; // Удаляем из заголовка потока "#loadFile#"
    short pos = strchr(p, '#') - p ; p[pos] = 0;
    sizeFile = atoi(p); // Определяем общий размер посылаемого пакета
    p = &p[pos+1]; pos = strchr(p, '#') - p; p[pos] = 0;
    fn = String(p);  // Вычленяем имя файла

    memMsg->Lines->Add("Имя файла: "+fn); // Выводим имя файла
    memMsg->Lines->Add(" Размер файла: " + FormatFloat("### ### ### ##0", sizeFile));

    AnsiString path = ExtractFilePath(Application->ExeName);
    CreateDir(path + "Downloads"); // создаем папку для сохраненных файлов
    //if(fs) delete fs;
    fs = new TFileStream(path + "Downloads\\"+fn, fmCreate);
    fs->Size = sizeFile;
    fs->Position = 0;
    Rfile.Delete(1, SIZB); // Удалим заголовок из входного потока
  }
  WriteFile(Socket);
}
//---------------------------------------------------------------------------

void TForm1::WriteFile(TCustomWinSocket *sc)
{
  if (!fs)
  {
    memMsg->Lines->Add("получен неожиданный текст <" + Rfile + ">"); //
    return;
  }
  if(fs->Position < sizeFile)  // если мы еще принимаем файл и размер потока меньше размера файла
  {
    fs->Write(Rfile.c_str(), Rfile.Length());
    cg->Progress = (100.*(fs->Position))/sizeFile;
    cg->Refresh();
//    Application->ProcessMessages();
  }
  if (fs->Position == sizeFile)
  {
    strcpy(bf, "#end#");
    sc->SendBuf(bf, SIZB); // Закончили
    sizeFile = -1 ;
    memMsg->Lines->Add("Файл принят !");
    delete fs; fs = NULL;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ClientFileError(TObject *Sender,
      TCustomWinSocket *Socket, TErrorEvent ErrorEvent, int &ErrorCode)
{
  memMsg->Lines->Add("Ошибка клиента для работы по приёму файлов № " + String(ErrorCode));
  if (ErrorCode == 10061) connBtn->Enabled = true;
  ErrorCode = 0;
}
//---------------------------------------------------------------------------



