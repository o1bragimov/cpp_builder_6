//---------------------------------------------------------------------------

#include <vcl.h>
#include <stdlib.h>
#pragma hdrstop

#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
TMemoryStream *MS = new TMemoryStream ;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerAccept(TObject *Sender,
      TCustomWinSocket *Socket)
{
  memMsg->Lines->Add("К вам  присоеденились");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerClientError(TObject *Sender,
      TCustomWinSocket *Socket, TErrorEvent ErrorEvent, int &ErrorCode)
{
  ErrorCode = 0 ;
  memMsg->Lines->Add("Ошибка соединения");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
  Server->Active = true ;
  Server->Open() ;
  memMsg->Lines->Add("Создан сервер.");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormDestroy(TObject *Sender)
{
  Server->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
  void *P;
  int Size ;
  if(OpenDialog1->Execute())
  {
    MS->LoadFromFile(OpenDialog1->FileName);
    memMsg->Lines->Add("Загрузили требуемый файл в поток...");
  }
  Server->Socket->Connections[0]->SendText("file#"+OpenDialog1->FileName+"#"+IntToStr(MS->Size)+'#');
  memMsg->Lines->Add("Послали инфу о файле");
  MS->Position = 0 ;
  P = MS->Memory ;
  Size = Server->Socket->Connections[0]->SendBuf(P,MS->Size);
  memMsg->Lines->Add("Отправлено: " + IntToStr(Size)+" из "+ IntToStr(MS->Size));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
  if(Server->Socket->Connections[0]->ReceiveText()=="end")
  {
    Memo1->Lines->Add("Клиент принял файл");
    MS->Clear() ; // освобождаем поток
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::exitBtnClick(TObject *Sender)
{
  this->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormActivate(TObject *Sender)
{
  randomize();
  for(short i = 0; i < 50; i++)
    ch1->Series[0]->AddY(rand()%100, "", clRed);
}
//---------------------------------------------------------------------------

