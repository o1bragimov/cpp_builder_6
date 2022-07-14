//---------------------------------------------------------------------------

#ifndef dispThrH
#define dispThrH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <ScktComp.hpp>
//---------------------------------------------------------------------------
class ThrDispatch : public TThread
{
 private:
 protected:
  void __fastcall Execute();
  TStringList* sl;
  void __fastcall update(void);
  //TFileStream *fs;    // Служебный буфер
  TCustomWinSocket* sc;
  AnsiString FileName;
 public:
  __fastcall ThrDispatch(bool CreateSuspended, TStringList* sl_, TCustomWinSocket* sc_);
  bool isBusy;
};
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
#endif
