//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//#include "sPanel.h"
#include <ExtCtrls.hpp>
#include "frxpngimage.hpp"
#include "sComboBox.hpp"
#include "sLabel.hpp"
#include <Graphics.hpp>
#include <jpeg.hpp>
#include "sBitBtn.hpp"
#include <Buttons.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include "sPanel.hpp"
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include "sButton.hpp"
#include <DBGrids.hpp>
#include <Grids.hpp>
#include "sEdit.hpp"
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
        TsPanel *sPanel1;
        TsPanel *sPanel2;
        TsLabel *sLabel1;
        TsComboBox *sComboBox1;
        TsPanel *sPanel3;
        TsLabel *sLabel2;
        TImage *Image1;
        TImage *Image2;
        TImage *Image3;
        TsComboBox *sComboBox3;
        TsBitBtn *sBitBtn1;
        TADOQuery *ADOQuery1;
        TDataSource *DataSource1;
        TDataSource *DataSource2;
        TADOQuery *ADOQuery2;
        TsPanel *sPanel4;
        TsLabel *sLabel3;
        TsLabel *sLabel4;
        TsLabel *sLabel5;
        TsLabel *sLabel6;
        TsLabel *sLabel7;
        TsLabel *sLabel8;
        TsLabel *sLabel9;
        TsLabel *sLabel10;
        TsLabel *sLabel11;
        TsLabel *sLabel12;
        TDBGrid *DBGrid1;
        TsComboBox *sComboBox2;
        TsButton *sButton1;
        TsEdit *sEdit1;
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall sComboBox1Select(TObject *Sender);
        void __fastcall sBitBtn1Click(TObject *Sender);
        void __fastcall sComboBox3Select(TObject *Sender);
        void __fastcall sButton1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
