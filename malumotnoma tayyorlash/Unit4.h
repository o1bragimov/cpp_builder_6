//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Dialogs.hpp>
#include <ComCtrls.hpp>
#include "sBitBtn.hpp"
#include "sEdit.hpp"
#include "sScrollBar.hpp"
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
        TPrintDialog *PrintDialog1;
        TRichEdit *RichEdit1;
        TsBitBtn *sBitBtn1;
        TsEdit *sEdit1;
        TsBitBtn *sBitBtn2;
        TsBitBtn *sBitBtn3;
        TSaveDialog *SaveDialog1;
        TsBitBtn *sBitBtn4;
        TOpenDialog *OpenDialog1;
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall sBitBtn1Click(TObject *Sender);
        void __fastcall sBitBtn2Click(TObject *Sender);
        void __fastcall sBitBtn3Click(TObject *Sender);
        void __fastcall sBitBtn4Click(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
