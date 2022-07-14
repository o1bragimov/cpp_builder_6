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
TMemoryStream *MS = new TMemoryStream ; // ������� �����

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
  fs = NULL;
}
//---------------------------------------------------------------------------
void TForm1::Write(TCustomWinSocket *sc)
{
  if(MS->Position < sizePaket)  // ���� �� ��� ��������� ���� � ������ ������ ������ ������� �����
  {
    MS->Write(Rtext.c_str(),Rtext.Length()); // ���������� � �����
    cg->Progress = (100.*(MS->Position))/sizePaket;
    cg->Refresh();
    memMsg->Refresh();
    Application->ProcessMessages();
  }
  if (MS->Position == sizePaket)
  {
    MS  ->Position = 0 ; // ��������� ������� ������ � ������
    sc->SendText("#end#"); // ���������
    findMet(metName) ; // ��������� ������ - �������, ��� � ��� ����������
    MS->Clear() ; // ����������� �����
    sizePaket = -1 ;
    memMsg->Lines->Add("����� ������ !");
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ClientConnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
  memMsg->Lines->Add("�� �������������� � ������: " + IPEd->Text);
  pg->ActivePage->OnShow(this);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ClientError(TObject *Sender,
      TCustomWinSocket *Socket, TErrorEvent ErrorEvent, int &ErrorCode)
{
  memMsg->Lines->Add("������ ������� � " + String(ErrorCode));
  if (ErrorCode == 10061) connBtn->Enabled = true;
  ErrorCode = 0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::connBtnClick(TObject *Sender)
{
  Client->Address = IPEd->Text;
  Client->Host    = IPEd->Text;
  Client->Open() ;  // �����������
  ClientFile->Address = IPEd->Text;
  ClientFile->Host    = IPEd->Text;
  ClientFile->Open() ;  // �����������
  memMsg->Lines->Add("�����������... � ������: " + IPEd->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
  Rtext = Socket->ReceiveText() ;
  if(Rtext.Pos("#Ans#") || Rtext.Pos("#Upd#")) // ������ ����� �� ������ ��� ��������� update
  {
    memMsg->Lines->Add("������� ��������� <" + Rtext + ">");
    Rtext.Delete(1, 5);                                      // ������� �� ��������� ������ "#Ans#" ��� "#Upd#"
    metName = Rtext.SubString(1,Rtext.Pos("#")-1);           // ���������� ��� - ����� ������� ���������� ���������� ������
    Rtext.Delete(1, Rtext.Pos("#"));
    sizePaket = Rtext.SubString(1,Rtext.Pos("#")-1).ToInt(); // ���������� ����� ������ ����������� ������
    Rtext.Delete(1, Rtext.Pos("#"));
    MS->Size = sizePaket ;   // >>>>>> ������ ���!!! <<<<<<<<<< ����� ����� �������� ��� ������� �������� �����
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
  memMsg->Lines->Add("����� � 'loadSh1'");
  MS->Position = 0;
  char tmp[10];
  MS->ReadBuffer((void *) tmp, (MS->Size > 10) ? 10 : MS->Size);
  int q; sscanf(tmp, "q=%i;", &q);
  memMsg->Lines->Add("Q ����� = " + String(q));
  if (q <= 0) return;
  ch1->Series[0]->Clear();
  double* v = new double[2*q];
  try
    {MS->ReadBuffer((void *) v, 2*sizeof(double)*q);}
  catch(Exception &ex)
  {
    memMsg->Lines->Add("������ ����� ������ '" + ex.Message + "'");
    delete v; return;
  }

  for(short i = 0 ; i < q; i++)
    ch1->Series[0]->AddXY(v[i], v[i+q], "", clRed);
  delete v;
}
//---------------------------------------------------------------------------

void TForm1::findMet(AnsiString metName) // ����� ������ �� �����
{
  typedef void __fastcall (__closure *TSomeFunction)(void);

  TSomeFunction func;
  TMethod meth;
  meth.Code = MethodAddress(metName);
  meth.Data = this;
  func = *(TSomeFunction*)&meth;

  if   (meth.Code)  func();
  else  memMsg->Lines->Add("�� ����� ������: " + metName);

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
  // ������� - ��������� ����
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
    memMsg->Lines->Add("������ ����� ������ '" + ex.Message + "'");
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
  // ������� - ��������� ����
  sh21ed->Text = str.SubString(1, str.Pos("#") - 1); MS->Position += str.Pos("#"); str.Delete(1, str.Pos("#"));
  sh22ed->Text = str.SubString(1, str.Pos("#") - 1); MS->Position += str.Pos("#"); str.Delete(1, str.Pos("#"));
  sh23ed->Text = str.SubString(1, str.Pos("#") - 1); MS->Position += str.Pos("#"); str.Delete(1, str.Pos("#"));
  sh24ed->Text = str.SubString(1, str.Pos("#") - 1); MS->Position += str.Pos("#"); str.Delete(1, str.Pos("#"));

  double v[2];
  try
    {MS->ReadBuffer((void *) v, 2*sizeof(double));}
  catch(Exception &ex)
  {
    memMsg->Lines->Add("������ ����� ������ '" + ex.Message + "'");
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
  if(!Client->Socket->Connected) return ; // �� ������ ����������

  Client->Socket->SendText("#Que#loadSh2"); // �������� ������� ������
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TabSheet1Show(TObject *Sender)
{
  if(!Client->Socket->Connected) return ; // �� ������ ����������

  // �������� ������ �� ��������� ������
  Client->Socket->SendText("#Que#loadSh1"); // �������� ������� ������
  memMsg->Lines->Add("�������� ������� ������ <#Que#loadSh1>");

}
//---------------------------------------------------------------------------

void __fastcall TForm1::TabSheet3Show(TObject *Sender)
{
  if(!Client->Socket->Connected) return ; // �� ������ ����������

  // �������� ������ �� ��������� ������
  Client->Socket->SendText("#Que#loadSh3"); // �������� ������� ������
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
  if(!Client->Socket->Connected) return ; // �� ������ ����������
  if (pg->ActivePage->TabIndex == 1)
    Client->Socket->SendText("#Que#updSh2");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::loadFileBtnClick(TObject *Sender)
{
//openDlg->InitialDir = "d:\\�����\\����� � Canon\\������� �� �������� ���� 2006\\";
  openDlg->InitialDir = "d:\\Temp\\fromGaid\\XXX\\Comics\\Birthday\\";
//  openDlg->InitialDir = ExtractFilePath(Application->ExeName);
  if(openDlg->Execute())
  {
    char buff[SIZB];
    for (short i = 0 ; i < openDlg->Files->Count; i++)
    {
      AnsiString fn = openDlg->Files->Strings[i];
      AnsiString FileName = fn.SubString(fn.LastDelimiter("\\")+1,fn.Length());
      memMsg->Lines->Add("��� ����� [" + String(i+1) + "] : " + FileName);
      try
      {
        strcpy(buff, fn.c_str());
        ClientFile->Socket->SendBuf((void*) buff, SIZB);
      }
      catch(Exception &ex)
      {
        memMsg->Lines->Add("������ �������� ������ loadFile '" + ex.Message + "'");
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
      memMsg->Lines->Add("������ �������� ������ loadFile '" + ex.Message + "'");
      return;
    }
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClientConnecting(TObject *Sender,
      TCustomWinSocket *Socket)
{
  memMsg->Lines->Add("�� �������������� � �������: <" + Socket->RemoteHost + ">");
  connBtn->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClientDisconnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
  memMsg->Lines->Add("�� ����������� �� �������: <" + Socket->RemoteHost + ">");
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
  if(Rfile.Pos("#loadFile#")) // ������ ��������� ��� �������� �����
  {
    char *p = Rfile.c_str();
    memMsg->Lines->Add("������� ��������� ��� �������� ����� <" + String(p) + ">");
    p = &p[10]; // ������� �� ��������� ������ "#loadFile#"
    short pos = strchr(p, '#') - p ; p[pos] = 0;
    sizeFile = atoi(p); // ���������� ����� ������ ����������� ������
    p = &p[pos+1]; pos = strchr(p, '#') - p; p[pos] = 0;
    fn = String(p);  // ��������� ��� �����

    memMsg->Lines->Add("��� �����: "+fn); // ������� ��� �����
    memMsg->Lines->Add(" ������ �����: " + FormatFloat("### ### ### ##0", sizeFile));

    AnsiString path = ExtractFilePath(Application->ExeName);
    CreateDir(path + "Downloads"); // ������� ����� ��� ����������� ������
    //if(fs) delete fs;
    fs = new TFileStream(path + "Downloads\\"+fn, fmCreate);
    fs->Size = sizeFile;
    fs->Position = 0;
    Rfile.Delete(1, SIZB); // ������ ��������� �� �������� ������
  }
  WriteFile(Socket);
}
//---------------------------------------------------------------------------

void TForm1::WriteFile(TCustomWinSocket *sc)
{
  if (!fs)
  {
    memMsg->Lines->Add("������� ����������� ����� <" + Rfile + ">"); //
    return;
  }
  if(fs->Position < sizeFile)  // ���� �� ��� ��������� ���� � ������ ������ ������ ������� �����
  {
    fs->Write(Rfile.c_str(), Rfile.Length());
    cg->Progress = (100.*(fs->Position))/sizeFile;
    cg->Refresh();
//    Application->ProcessMessages();
  }
  if (fs->Position == sizeFile)
  {
    strcpy(bf, "#end#");
    sc->SendBuf(bf, SIZB); // ���������
    sizeFile = -1 ;
    memMsg->Lines->Add("���� ������ !");
    delete fs; fs = NULL;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ClientFileError(TObject *Sender,
      TCustomWinSocket *Socket, TErrorEvent ErrorEvent, int &ErrorCode)
{
  memMsg->Lines->Add("������ ������� ��� ������ �� ����� ������ � " + String(ErrorCode));
  if (ErrorCode == 10061) connBtn->Enabled = true;
  ErrorCode = 0;
}
//---------------------------------------------------------------------------



