//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "sListBox.hpp"
#include "sPanel.hpp"
#include "sScrollBar.hpp"
#include <ExtCtrls.hpp>
#include "sBitBtn.hpp"
#include "sEdit.hpp"
#include <ActnCtrls.hpp>
#include <ActnMan.hpp>
#include <ActnMenus.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <Menus.hpp>
#include <ToolWin.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <DBCtrls.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
        TsPanel *sPanel1;
        TsPanel *sPanel2;
        TMainMenu *MainMenu1;
        TMenuItem *Asosiy1;
        TMenuItem *Shrift1;
        TMenuItem *About1;
        TActionMainMenuBar *ActionMainMenuBar1;
        TUpDown *UpDown1;
        TsEdit *sEdit1;
        TsEdit *sEdit2;
        TsBitBtn *sBitBtn1;
        TDBGrid *DBGrid1;
        TDBMemo *DBMemo1;
        TADOTable *ADOTable1;
        TADOTable *ADOTable2;
        TDataSource *DataSource1;
        TDataSource *DataSource2;
        TPopupMenu *PopupMenu1;
        TMenuItem *Mavzuqoshish1;
        TMenuItem *Mavzuochirish1;
        TADOQuery *ADOQuery1;
        TsEdit *sEdit3;
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall Shrift1Click(TObject *Sender);
        void __fastcall UpDown1Click(TObject *Sender, TUDBtnType Button);
        void __fastcall sBitBtn1Click(TObject *Sender);
        void __fastcall Mavzuochirish1Click(TObject *Sender);
        void __fastcall Mavzuqoshish1Click(TObject *Sender);
        void __fastcall About1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
 