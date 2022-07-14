//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "acAlphaImageList.hpp"
#include "sBitBtn.hpp"
#include "sLabel.hpp"
#include "sPanel.hpp"
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <ImgList.hpp>
#include <jpeg.hpp>
#include "frxpngimage.hpp"
#include <ComCtrls.hpp>
#include <Menus.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include "sComboBox.hpp"
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
        TsPanel *sPanel1;
        TsBitBtn *sBitBtn1;
        TsLabel *sLabel1;
        TsPanel *sPanel2;
        TsLabel *sLabel2;
        TsLabel *sLabel3;
        TsLabel *sLabel4;
        TsLabel *sLabel5;
        TsLabel *sLabel6;
        TsLabel *sLabel7;
        TADOQuery *ADOQuery1;
        TDataSource *DataSource1;
        TImage *Image1;
        TsComboBox *sComboBox1;
        TsComboBox *sComboBox2;
        TsComboBox *sComboBox3;
        TsLabel *sLabel8;
        TsLabel *sLabel9;
        TsLabel *sLabel10;
        void __fastcall sLabel1Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall sComboBox1Select(TObject *Sender);
        void __fastcall sComboBox2Select(TObject *Sender);
        void __fastcall sComboBox3Select(TObject *Sender);
        void __fastcall sBitBtn1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
        __fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
