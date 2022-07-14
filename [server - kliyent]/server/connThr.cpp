//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "connThr.h"
#include "ServF.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------

__fastcall ConnectThr::ConnectThr(bool CreateSuspended, short ind_)
        : TThread(CreateSuspended), ind(ind_)
{
  ms = new TMemoryStream;
}
//---------------------------------------------------------------------------
void __fastcall ConnectThr::UpdateForm()
{
  Form1->memMsg->Lines->Add("Имя файла: " + FileName);
  try
  {
    Form1->Server->Socket->Connections[ind]->SendText("#Upd#loadFile#"+IntToStr(ms->Size)+'#'+FileName+'#');
    Form1->Server->Socket->Connections[ind]->SendBuf(ms->Memory,ms->Size);
  }
  catch(Exception &ex)
  {
    Form1->memMsg->Lines->Add("Ошибка передачи данных loadFile '" + ex.Message + "'");
    Form1->isBusy = false;
  }
}
//---------------------------------------------------------------------------
void __fastcall ConnectThr::Execute()
{
  FreeOnTerminate = false;
  Synchronize(UpdateForm);
  delete ms;
}
//---------------------------------------------------------------------------
