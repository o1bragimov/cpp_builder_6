//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "acPNG.hpp"
#include "sPanel.hpp"
#include <ExtCtrls.hpp>
#include "sBitBtn.hpp"
#include "sEdit.hpp"
#include "sLabel.hpp"
#include <Buttons.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TForm6 : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TsPanel *sPanel1;
        TsEdit *sEdit1;
        TsBitBtn *sBitBtn1;
        TsEdit *sEdit2;
        TsEdit *sEdit3;
        TsLabel *sLabel1;
        TsLabel *sLabel2;
        TsLabel *sLabel3;
        TADOQuery *ADOQuery1;
        void __fastcall sBitBtn1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm6(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm6 *Form6;
//---------------------------------------------------------------------------
#endif
