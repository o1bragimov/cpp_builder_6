//---------------------------------------------------------------------------

#ifndef connThrH
#define connThrH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <ScktComp.hpp>
//---------------------------------------------------------------------------
class ConnectThr : public TThread
{            
private:
protected:
  short ind;            // � ����������
  void __fastcall Execute();
  void __fastcall UpdateForm();
public:
  TMemoryStream *ms;    // ��������� �����
  __fastcall ConnectThr(bool CreateSuspended, short ind_);
  AnsiString FileName;
};
//---------------------------------------------------------------------------
#endif
