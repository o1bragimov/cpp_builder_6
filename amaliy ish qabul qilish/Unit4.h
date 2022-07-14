//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
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
class TForm4 : public TForm
{
__published:	// IDE-managed Components
        TsPanel *sPanel1;
        TsBitBtn *sBitBtn1;
        TsEdit *sEdit1;
        TsLabel *sLabel1;
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall sBitBtn1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
 