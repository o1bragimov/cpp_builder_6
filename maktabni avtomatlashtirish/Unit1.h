//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//#include "sEdit.hpp"
//#include "sPanel.hpp"
#include "sSkinManager.hpp"
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
//#include "sButton.h"
//#include "sCheckBox.h"
//#include "sLabel.h"
#include <ComCtrls.hpp>
#include "sPanel.hpp"
#include "sButton.hpp"
#include "sCheckBox.hpp"
#include "sLabel.hpp"
#include "sComboBox.hpp"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TsPanel *sPanel1;
        TsSkinManager *sSkinManager1;
        TADOConnection *ADOConnection1;
        TADOQuery *ADOQuery1;
        TDBGrid *DBGrid1;
        TsPanel *sPanel2;
        TDataSource *DataSource1;
        TDateTimePicker *DateTimePicker1;
        TsButton *sButton1;
        TsCheckBox *sCheckBox1;
        TsLabelFX *sLabelFX1;
        TsLabelFX *sLabelFX2;
        TsLabelFX *sLabelFX3;
        TsComboBox *sComboBox1;
        void __fastcall sButton1Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
