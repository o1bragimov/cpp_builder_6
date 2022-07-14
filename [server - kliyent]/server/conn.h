// ��������� ������ ��� ������ ������� � ����������� ���������
#ifndef TConn_H
#define TConn_H

#include <ScktComp.hpp>

class TConnect
{
  TMemoryStream *MS;    // ��������� �����
  TCustomWinSocket* sc; // ��������� �� �����
  short ind;            // � ����������
 public:
  TConnect(TCustomWinSocket sc_, short ind_) : sc(sc_), ind(ind_)
  {
    MS = new TMemoryStream();
  }
  ~TConnect(void)  {delete MS  ; return;}
  void Clear(void) {MS->Clear(); return;}
  void ChangeInd(short i) { ind = i; return; }
  void Write(TMemoryStream* m_) ;
  AnsiString Read(void) {return sc->Connections[ind]->ReceiveText();}
}
#endif // TConn_H
