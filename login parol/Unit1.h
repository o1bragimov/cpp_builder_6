//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//#include "sButton.hpp"
#include "sCheckBox.hpp"
#include "sEdit.hpp"
#include "sLabel.hpp"
#include "sPanel.hpp"
#include "sSkinManager.hpp"
#include <ExtCtrls.hpp>
#include "sButton.hpp"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TsPanel *sPanel1;
        TsEdit *sEdit1;
        TsEdit *sEdit2;
        TsLabel *sLabel1;
        TsLabel *sLabel2;
        TsCheckBox *sCheckBox1;
        TsSkinManager *sSkinManager1;
        TsButton *sButton1;
        TsLabel *sLabel3;
        void __fastcall sButton1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
