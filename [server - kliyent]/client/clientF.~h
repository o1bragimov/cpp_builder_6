//---------------------------------------------------------------------------

#ifndef clientFH
#define clientFH
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
#include "CGAUGES.h"

#define SIZB 512

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMemo *memMsg;
        TClientSocket *Client;
        TButton *connBtn;
        TLabel *Label2;
        TEdit *IPEd;
        TButton *exitBtn;
        TPageControl *pg;
        TTabSheet *TabSheet1;
        TTabSheet *TabSheet2;
        TTabSheet *TabSheet3;
        TChart *ch1;
        TLineSeries *Series1;
        TStringGrid *gr3;
        TChart *ch2;
        TLineSeries *Series2;
        TEdit *sh21ed;
        TEdit *sh22ed;
        TEdit *sh23ed;
        TEdit *sh24ed;
        TTimer *Timer1;
        TCGauge *cg;
        TButton *loadFileBtn;
        TOpenDialog *openDlg;
        TClientSocket *ClientFile;
        void __fastcall ClientConnect(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall ClientError(TObject *Sender,
          TCustomWinSocket *Socket, TErrorEvent ErrorEvent,
          int &ErrorCode);
        void __fastcall connBtnClick(TObject *Sender);
        void __fastcall ClientRead(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall exitBtnClick(TObject *Sender);
        void __fastcall loadSh1 (void);
        void __fastcall loadSh2 (void);
        void __fastcall loadSh3 (void);
        void __fastcall updSh2  (void);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall TabSheet1Show(TObject *Sender);
        void __fastcall TabSheet2Show(TObject *Sender);
        void __fastcall TabSheet3Show(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall loadFileBtnClick(TObject *Sender);
        void __fastcall ClientConnecting(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall ClientDisconnect(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall FormDestroy(TObject *Sender);
        void __fastcall ClientFileRead(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall ClientFileError(TObject *Sender,
          TCustomWinSocket *Socket, TErrorEvent ErrorEvent,
          int &ErrorCode);
private:	// User declarations
  int  sizePaket   ;  // Размер пакета, который передал сервер
  long sizeFile    ;  // Размер файла, который передал сервер
  AnsiString Rtext ;  // текст, который посылает сервер
  AnsiString Rfile ;  // текст, который посылает сервер
  short qRead      ;  // Количество считанных символов (байт)
  bool Receive     ;  // передаем ли мы на данный момент данные
  void Write(TCustomWinSocket *sc)    ;  // ф-я записи инфы в поток
  void WriteFile(TCustomWinSocket *sc); // Загрузка файлов
  AnsiString metName; // имя загружающего метода
  AnsiString fn    ; // Имя принимаемого файла
  TFileStream *fs  ; // указатель на большой файл
  char bf[SIZB]    ;

public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
        void findMet(AnsiString metName); // Вызов метода по имени
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
