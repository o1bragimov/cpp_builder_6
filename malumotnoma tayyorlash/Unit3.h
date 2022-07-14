//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "sBitBtn.hpp"
#include "sEdit.hpp"
#include "sLabel.hpp"
#include "sPanel.hpp"
#include <ADODB.hpp>
#include <Buttons.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
        TsPanel *sPanel1;
        TsPanel *sPanel2;
        TsEdit *sEdit1;
        TsEdit *sEdit2;
        TsEdit *sEdit3;
        TsEdit *sEdit4;
        TsEdit *sEdit5;
        TsLabel *sLabel1;
        TsLabel *sLabel2;
        TsLabel *sLabel3;
        TsLabel *sLabel4;
        TsLabel *sLabel5;
        TsBitBtn *sBitBtn1;
        TsBitBtn *sBitBtn3;
        TADOQuery *ADOQuery1;
        TDBGrid *DBGrid1;
        TDataSource *DataSource1;
        TsBitBtn *sBitBtn2;
        void __fastcall sBitBtn1Click(TObject *Sender);
        void __fastcall sBitBtn3Click(TObject *Sender);
        void __fastcall sBitBtn2Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
        __fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
