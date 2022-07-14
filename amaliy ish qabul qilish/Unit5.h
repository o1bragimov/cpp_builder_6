//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "sBitBtn.hpp"
#include "sEdit.hpp"
#include "sLabel.hpp"
#include "sPanel.hpp"
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// IDE-managed Components
        TsPanel *sPanel1;
        TsLabel *sLabel1;
        TsEdit *sEdit1;
        TsBitBtn *sBitBtn1;
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall sBitBtn1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
 