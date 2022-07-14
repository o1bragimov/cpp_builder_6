#include "conn.h"
// ****************************************************************************
void TConnect::Write(TMemoryStream* m_)
{
  MS->Clear();
  MS->LoadFromStream(m_);
  m_->Clear();
  try
  {
    sc->Connections[ind]->SendText("#Upd#updSh2#"+IntToStr(MS->Size)+'#');
    sc->Connections[ind]->SendBuf(MS->Memory,MS->Size);
  }
  catch(Exception &ex)
  {
    memMsg->Lines->Add("Ошибка передачи данных '" + ex.Message + "'");
  }
}
// ****************************************************************************
