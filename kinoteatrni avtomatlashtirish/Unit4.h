//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "sEdit.hpp"
#include "sPanel.hpp"
#include <ExtCtrls.hpp>
#include "sBitBtn.hpp"
#include <Buttons.hpp>
#include <Dialogs.hpp>
#include <ExtDlgs.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <ComCtrls.hpp>
#include <jpeg.hpp>
#include "sLabel.hpp"
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
        TsPanel *sPanel1;
        TsEdit *sEdit1;
        TsEdit *sEdit3;
        TImage *Image1;
        TsBitBtn *sBitBtn1;
        TOpenPictureDialog *OpenPictureDialog1;
        TsBitBtn *sBitBtn2;
        TsBitBtn *sBitBtn3;
        TADOQuery *ADOQuery1;
        TDataSource *DataSource1;
        TDateTimePicker *DateTimePicker1;
        TsBitBtn *sBitBtn4;
        TsLabel *sLabel1;
        void __fastcall sBitBtn1Click(TObject *Sender);
        void __fastcall sBitBtn2Click(TObject *Sender);
        void __fastcall sBitBtn4Click(TObject *Sender);
        void __fastcall sBitBtn3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
 