//---------------------------------------------------------------------------

#ifndef ServFH
#define ServFH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ScktComp.hpp>
#include <Dialogs.hpp>
#include <Chart.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Series.hpp>
#include <TeEngine.hpp>
#include <TeeProcs.hpp>
#include <Grids.hpp>

#include <ExtDlgs.hpp>

#include "dispThr.h"

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
  __published:	// IDE-managed Components
        TServerSocket *Server;
        TButton *exitBtn;
        TMemo *memMsg;
        TPageControl *pg;
        TTabSheet *TabSheet1;
        TTabSheet *TabSheet2;
        TTabSheet *TabSheet3;
        TChart *ch1;
        TLineSeries *Series1;
        TEdit *sh21ed;
        TEdit *sh22ed;
        TEdit *sh23ed;
        TEdit *sh24ed;
        TChart *ch2;
        TLineSeries *Series2;
        TStringGrid *gr3;
        TTimer *Timer1;
        TOpenDialog *openDlg;
        TServerSocket *ServerFile;
        void __fastcall ServerAccept(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall ServerClientError(TObject *Sender,
          TCustomWinSocket *Socket, TErrorEvent ErrorEvent,
          int &ErrorCode);
        void __fastcall FormDestroy(TObject *Sender);
        void __fastcall ServerClientRead(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall exitBtnClick(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall loadSh1 (TCustomWinSocket *sc);
        void __fastcall loadSh2 (TCustomWinSocket *sc);
        void __fastcall loadSh3 (TCustomWinSocket *sc);
        void __fastcall updSh2  (TCustomWinSocket *sc);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall ServerClientConnect(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall ServerClientDisconnect(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall ServerFileClientConnect(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall ServerFileClientDisconnect(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall ServerFileClientError(TObject *Sender,
          TCustomWinSocket *Socket, TErrorEvent ErrorEvent,
          int &ErrorCode);
        void __fastcall ServerFileClientRead(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall ServerFileAccept(TObject *Sender,
          TCustomWinSocket *Socket);
private:	// User declarations
       AnsiString memStr;
       void findMet(AnsiString metName, TCustomWinSocket *Socket); // Вызов метода по имени
       short clSh;
       void loadFile(AnsiString fn, TCustomWinSocket* sc);
       void sendFile(TCustomWinSocket* sc);
       ThrDispatch* thr;
//---------------------------------------------------------------------------

public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
       TMemoryStream *MS;
       //bool isBusy;
};

//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
#endif
