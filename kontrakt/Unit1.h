//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "sEdit.hpp"
#include "sPanel.hpp"
#include "sSkinManager.hpp"
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Menus.hpp>
#include "sButton.hpp"
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TsSkinManager *sSkinManager1;
        TsPanel *sPanel1;
        TsPanel *sPanel2;
        TDataSource *DataSource1;
        TDBGrid *DBGrid1;
        TADOQuery *ADOQuery1;
        TADOConnection *ADOConnection1;
        TsEdit *sEdit1;
        TsEdit *sEdit2;
        TsEdit *sEdit3;
        TsEdit *sEdit4;
        TDateTimePicker *DateTimePicker1;
        TMenuItem *Asosiy1;
        TMenuItem *TizimdanChiqish1;
        TMenuItem *About1;
        TsButton *sButton1;
        TsButton *sButton2;
        TsButton *sButton3;
        void __fastcall sButton1Click(TObject *Sender);
        void __fastcall sButton3Click(TObject *Sender);
        void __fastcall sButton2Click(TObject *Sender);
        void __fastcall About1Click(TObject *Sender);
        void __fastcall TizimdanChiqish1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
