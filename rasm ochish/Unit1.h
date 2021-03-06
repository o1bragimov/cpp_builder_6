//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>

#include "sButton.hpp"
#include <ExtCtrls.hpp>
#include <Dialogs.hpp>
#include "sSkinManager.hpp"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TsSkinManager *sSkinManager1;
        TsButton *sButton1;
        TImage *Image1;
        TListBox *ListBox1;
        TLabel *Label1;
        TOpenDialog *OpenDialog1;
        void __fastcall ListBox1Click(TObject *Sender);
        void __fastcall sButton1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
