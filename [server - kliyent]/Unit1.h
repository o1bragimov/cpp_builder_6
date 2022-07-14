//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "sButton.hpp"
#include "sSkinManager.hpp"
#include <Dialogs.hpp>
#include "sComboBox.hpp"
#include "sLabel.hpp"
#include "sPanel.hpp"
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TsSkinManager *sSkinManager1;
        TsPanel *sPanel1;
        TsComboBox *sComboBox1;
        TsLabel *sLabel1;
        void __fastcall sButton1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
