//---------------------------------------------------------------------------

#include <vcl.h>
#include <map>

#pragma hdrstop

#include "ServF.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

#define SIZB 512

TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
  MS = new TMemoryStream ;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerAccept(TObject *Sender,
      TCustomWinSocket *Socket)
{
  memMsg->Lines->Add("К вам  присоеденились: <" + Socket->RemoteHost + "> [" + Socket->RemoteAddress + "]");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerClientError(TObject *Sender,
      TCustomWinSocket *Socket, TErrorEvent ErrorEvent, int &ErrorCode)
{
  memMsg->Lines->Add("Ошибка соединения -> " + String(ErrorCode));
  // Клиент вылетел, закрываем соединение
  if(ErrorCode == 10053 || ErrorCode == 10054) ServerClientDisconnect(this, Socket);
  ErrorCode = 0 ;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormDestroy(TObject *Sender)
{
  Server->Close();
  ServerFile->Close();
  delete MS;
  memMsg->Lines->SaveToFile(ExtractFilePath(Application->ExeName) + "serv.log");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
  AnsiString Rtext = Socket->ReceiveText();
  if(Rtext=="#end#")
  {
    MS->Clear() ;
    MS->Position = 0;
  }
  // Обработаем запрос клиента
  if(Rtext.Pos("#Que#"))
  {
    Rtext.Delete(1, 5);
    MS->Clear();
    findMet(Rtext, Socket);
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::exitBtnClick(TObject *Sender)
{
  this->Close();
}
//---------------------------------------------------------------------------
void TForm1::findMet(AnsiString metName, TCustomWinSocket *sc) // Вызов метода по имени
{
    typedef void __fastcall (__closure *TSomeFunction)(TCustomWinSocket *sc);

    TSomeFunction func;
    TMethod meth;
    meth.Code = MethodAddress(metName);
    meth.Data = this;
    func = *(TSomeFunction*)&meth;

    if (meth.Code)  func(sc);
    else  memMsg->Lines->Add("Не нашли метода: " + metName);

    return ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormActivate(TObject *Sender)
{
  randomize();
  for(short i = 0; i < 150; i++)
    ch1->Series[0]->AddY(rand()%100, "", clRed);
  for  (short rw = 0 ; rw < 5; rw++)
    for(short cl = 0 ; cl < 5; cl++)
      gr3->Cells[cl][rw] = FormatFloat("0.00", (rand()%10000)/120. + 2.7);
  Server->Active = true ;
  Server->Open() ;
  ServerFile->Active = true ;
  ServerFile->Open() ;
  memMsg->Lines->Add("Создан сервер.");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::loadSh1(TCustomWinSocket *sc)
{
  if(!sc->Connected)
  {
    memMsg->Lines->Add("Нет соединения с [" + sc->RemoteAddress + "]");
    return;
  }
  int q = ch1->Series[0]->Count();
  MS->WriteBuffer(("q=" + String(q)+";").c_str(), 10);
  double* v = new double[q];
  for(short i = 0 ; i < q; i++) v[i] = ch1->Series[0]->XValues->Value[i];
  MS->WriteBuffer((void *) v, sizeof(double)*q);
  for(short i = 0 ; i < q; i++) v[i] = ch1->Series[0]->YValues->Value[i];
  MS->WriteBuffer((void *) v, sizeof(double)*q);
  delete v;

  try
  {
    sc->SendText("#Ans#loadSh1#"+IntToStr(MS->Size)+'#');
    sc->SendBuf(MS->Memory,MS->Size);
    //memMsg->Lines->Add(" Отсылаем loadSh1 " + IntToStr(MS->Size) + " байт");
  }
  catch(Exception &ex)
  {
    memMsg->Lines->Add("Ошибка передачи данных <loadSh1> клиенту <"
      + sc->RemoteHost + "> '" + ex.Message + "'");
  }
  clSh = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
  ch2->Series[0]->AddY(rand()%20 + 23., "", clRed);
}
//-------------------------------------------------------------------------
void __fastcall TForm1::loadSh2 (TCustomWinSocket *sc)
{
  if(!sc->Connected)
  {
    memMsg->Lines->Add("Нет соединения с [" + sc->RemoteAddress + "]");
    return;
  }
  MS->WriteBuffer((sh21ed->Text + "#").c_str(), sh21ed->Text.Length()+1);
  MS->WriteBuffer((sh22ed->Text + "#").c_str(), sh22ed->Text.Length()+1);
  MS->WriteBuffer((sh23ed->Text + "#").c_str(), sh23ed->Text.Length()+1);
  MS->WriteBuffer((sh24ed->Text + "#").c_str(), sh24ed->Text.Length()+1);
  int q = ch2->Series[0]->Count();
  MS->WriteBuffer(("q=" + String(q)+";").c_str(), 10);

  double* v = new double[q];
  for(short i = 0 ; i < q; i++) v[i] = ch2->Series[0]->XValues->Value[i];
  MS->WriteBuffer((void *) v, sizeof(double)*q);
  for(short i = 0 ; i < q; i++) v[i] = ch2->Series[0]->YValues->Value[i];
  MS->WriteBuffer((void *) v, sizeof(double)*q);
  delete v;

  try
  {
    sc->SendText("#Ans#loadSh2#"+IntToStr(MS->Size)+'#');
    sc->SendBuf(MS->Memory,MS->Size);
  }
  catch(Exception &ex)
  {
    memMsg->Lines->Add("Ошибка передачи данных <loadSh2> клиенту <"
      + sc->RemoteHost + "> '" + ex.Message + "'");
  }
  clSh = 1;
}
//-------------------------------------------------------------------------
void __fastcall TForm1::updSh2  (TCustomWinSocket *sc)
{
  if(!sc->Connected)
  {
    memMsg->Lines->Add("Нет соединения с [" + sc->RemoteAddress + "]");
    return;
  }
  MS->WriteBuffer((sh21ed->Text + "#").c_str(), sh21ed->Text.Length()+1);
  MS->WriteBuffer((sh22ed->Text + "#").c_str(), sh22ed->Text.Length()+1);
  MS->WriteBuffer((sh23ed->Text + "#").c_str(), sh23ed->Text.Length()+1);
  MS->WriteBuffer((sh24ed->Text + "#").c_str(), sh24ed->Text.Length()+1);
  int i = ch2->Series[0]->Count()-1;
  double v = ch2->Series[0]->XValues->Value[i];
  MS->WriteBuffer((void *) &v, sizeof(double));
         v = ch2->Series[0]->YValues->Value[i];
  MS->WriteBuffer((void *) &v, sizeof(double));

  try
  {
    sc->SendText("#Upd#updSh2#"+IntToStr(MS->Size)+'#');
    sc->SendBuf(MS->Memory,MS->Size);
  }
  catch(Exception &ex)
  {
    memMsg->Lines->Add("Ошибка передачи данных <updSh2> клиенту <"
      + sc->RemoteHost + "> '" + ex.Message + "'");
  }
}
//-------------------------------------------------------------------------
void __fastcall TForm1::loadSh3 (TCustomWinSocket *sc)
{
  if(!sc->Connected)
  {
    memMsg->Lines->Add("Нет соединения с [" + sc->RemoteAddress + "]");
    return;
  }
  for  (short rw = 0 ; rw < gr3->RowCount; rw++)
    for(short cl = 0 ; cl < gr3->ColCount; cl++)
      MS->WriteBuffer((gr3->Cells[cl][rw] + "#").c_str(), gr3->Cells[cl][rw].Length() + 1);

  try
  {
    sc->SendText("#Upd#loadSh3#"+IntToStr(MS->Size)+'#');
    sc->SendBuf(MS->Memory,MS->Size);
  }
  catch(Exception &ex)
  {
    memMsg->Lines->Add("Ошибка передачи данных <loadSh3> клиенту <"
      + sc->RemoteHost + "> '" + ex.Message + "'");
  }
  clSh = 2;
}
//-------------------------------------------------------------------------


void __fastcall TForm1::ServerClientConnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
  memMsg->Lines->Add("присоединился клиент <" + Socket->RemoteHost + ">");
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ServerClientDisconnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
  memMsg->Lines->Add("Отсоединился клиент <" + Socket->RemoteHost + ">");
}
//---------------------------------------------------------------------------
void TForm1::loadFile(AnsiString fn, TCustomWinSocket* sc)
{
  TSearchRec sr;
  if (FindFirst(fn, 0, sr))
  {
    memMsg->Lines->Add("Не найден запрашиваемый файл: <" + fn + ">");
    return;
  }
  // Закинем в sc->Data список требуемых файлов
  TStringList* lst = (TStringList *) sc->Data;
  lst->Add(fn);
}
//---------------------------------------------------------------------------
void TForm1::sendFile(TCustomWinSocket* sc)
{
  TStringList* lst = ((TStringList *) sc->Data);
  memMsg->Lines->Add("список файлов к отправке: q = " + String (lst->Count));
  for(short i = 0 ; i < lst->Count ; i++)
    memMsg->Lines->Add(lst->Strings[i]);
  thr = new ThrDispatch(true, lst, sc);
  thr->Resume();
}
// *****************************************************************************

void __fastcall TForm1::ServerFileClientConnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
  TStringList* lst = new TStringList();
  Socket->Data = lst;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ServerFileClientDisconnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
  TStringList* lst = (TStringList *) Socket->Data;
  delete lst;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ServerFileClientError(TObject *Sender,
      TCustomWinSocket *Socket, TErrorEvent ErrorEvent, int &ErrorCode)
{
  if(ErrorCode == 10053 || ErrorCode == 10054) ServerFileClientDisconnect(this, Socket);
  ErrorCode = 0 ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ServerFileClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
  char buff[SIZB];
  Socket->ReceiveBuf(buff, SIZB);
  AnsiString Rtext = String(buff);
  if  (Rtext.Pos("endFileList")) sendFile(Socket);
  else if(Rtext=="#end#") thr->isBusy = false;
  else loadFile(Rtext, Socket);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ServerFileAccept(TObject *Sender,
      TCustomWinSocket *Socket)
{
  memMsg->Lines->Add("подключили сокет передачи файлов");
}
//---------------------------------------------------------------------------

