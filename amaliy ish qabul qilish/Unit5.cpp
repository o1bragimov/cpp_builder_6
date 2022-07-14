//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sBitBtn"
#pragma link "sEdit"
#pragma link "sLabel"
#pragma link "sPanel"
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::FormClose(TObject *Sender, TCloseAction &Action)
{
  Form2->RadioGroup1->ItemIndex=-1;      
}
//---------------------------------------------------------------------------

void __fastcall TForm5::sBitBtn1Click(TObject *Sender)
{
   Form2->sComboBox2->Items->Add(sEdit1->Text);
   ShowMessage("Saqlandi.");
   sEdit1->Text="";
   Form5->Close();
}
//---------------------------------------------------------------------------

