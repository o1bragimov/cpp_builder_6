//---------------------------------------------------------------------------

#include <vcl.h>
#include <ScktComp.hpp>
#pragma hdrstop

#include "dispThr.h"
#include "ServF.h"

#define SIZB 512

#pragma package(smart_init)
//---------------------------------------------------------------------------
// ****************        ThrDispatch        *******************************
//---------------------------------------------------------------------------
__fastcall ThrDispatch::ThrDispatch(bool CreateSuspended, TStringList* sl_, TCustomWinSocket* sc_)
        : TThread(CreateSuspended), sl(sl_) , sc(sc_) {}
//---------------------------------------------------------------------------
void __fastcall ThrDispatch::Execute()
{
  FreeOnTerminate = true;
  Priority = tpLower;
  char bf[SIZB] = "";
  TMemoryStream* ms = new TMemoryStream;
  while(sl->Count)
  {
    AnsiString fn = sl->Strings[0];
//    TFileStream* fs = new TFileStream(fn, fmOpenRead);
    if(!FileExists(fn))
    {
      Form1->memMsg->Lines->Add("Файл '" + fn + "' - не существует");
      isBusy = false;
      goto cont;
    }
    FileName = fn.SubString(fn.LastDelimiter("\\")+1,fn.Length());
    isBusy = true;
    ms->LoadFromFile(fn);
    try
    {
      AnsiString s = "#loadFile#" + String(ms->Size) + "#" + FileName + "#";
//      AnsiString s = "#loadFile#" + String(fs->Size) + "#" + FileName + "#";
      strcpy(bf, s.c_str());
      Form1->memMsg->Lines->Add("передан заголовок: " + s);
      sc->SendBuf(bf, SIZB);
      sc->SendBuf(ms->Memory, ms->Size);
//      sc->SendStream(fs);
    }
    catch(Exception &ex)
    {
      Form1->memMsg->Lines->Add("Ошибка передачи данных loadFile '" + ex.Message + "'");
      isBusy = false;
    }
    while(isBusy) Sleep(10);
    Synchronize(update);
  cont:
    sl->Delete(0);
//    delete fs;
  }
  delete ms;
}
//---------------------------------------------------------------------------
void __fastcall ThrDispatch::update(void)
{
  Form1->memMsg->Lines->Add("Файл передан: " + FileName);
}
//---------------------------------------------------------------------------

