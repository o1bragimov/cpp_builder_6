//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "sBitBtn.hpp"
#include "sButton.hpp"
#include "sEdit.hpp"
#include "sLabel.hpp"
#include "sPanel.hpp"
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// IDE-managed Components
        TsPanel *sPanel1;
        TsEdit *sEdit1;
        TsEdit *sEdit2;
        TsLabel *sLabel1;
        TsLabel *sLabel2;
        TsLabel *sLabel3;
        TsButton *sButton1;
        TsButton *sButton2;
        TsButton *sButton3;
        TsButton *sButton4;
        TsButton *sButton5;
        TsButton *sButton6;
        TsButton *sButton7;
        TsButton *sButton8;
        TsButton *sButton9;
        TsButton *sButton10;
        TsButton *sButton11;
        TsButton *sButton12;
        TsButton *sButton13;
        TsButton *sButton14;
        TsButton *sButton15;
        TsLabel *sLabel4;
        TsLabel *sLabel5;
        TsLabel *sLabel6;
        TsLabel *sLabel7;
        TsLabel *sLabel8;
        TsLabel *sLabel9;
        TImage *Image1;
        TsLabel *sLabel10;
        TsBitBtn *sBitBtn1;
        TDataSource *DataSource1;
        TADOQuery *ADOQuery1;
        TsBitBtn *sBitBtn2;
        void __fastcall sButton1Click(TObject *Sender);
        void __fastcall sBitBtn1Click(TObject *Sender);
        void __fastcall sButton2Click(TObject *Sender);
        void __fastcall sButton3Click(TObject *Sender);
        void __fastcall sButton4Click(TObject *Sender);
        void __fastcall sButton5Click(TObject *Sender);
        void __fastcall sButton6Click(TObject *Sender);
        void __fastcall sButton7Click(TObject *Sender);
        void __fastcall sButton8Click(TObject *Sender);
        void __fastcall sButton9Click(TObject *Sender);
        void __fastcall sButton10Click(TObject *Sender);
        void __fastcall sButton11Click(TObject *Sender);
        void __fastcall sButton12Click(TObject *Sender);
        void __fastcall sButton13Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall sBitBtn2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
