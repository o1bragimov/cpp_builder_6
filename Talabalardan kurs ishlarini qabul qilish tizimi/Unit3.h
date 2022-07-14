//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "sButton.hpp"
#include "sComboBox.hpp"
#include "sEdit.hpp"
#include "sPanel.hpp"
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
        TsPanel *sPanel1;
        TsPanel *sPanel2;
        TsEdit *sEdit1;
        TsButton *sButton1;
        TsComboBox *sComboBox1;
        TDBGrid *DBGrid1;
        TDataSource *DataSource1;
        TADOQuery *ADOQuery1;
        TsEdit *sEdit2;
        TUpDown *UpDown1;
        void __fastcall sButton1Click(TObject *Sender);
        void __fastcall UpDown1Click(TObject *Sender, TUDBtnType Button);
private:	// User declarations
public:		// User declarations
        __fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
