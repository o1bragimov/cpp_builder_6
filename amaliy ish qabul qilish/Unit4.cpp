//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sBitBtn"
#pragma link "sEdit"
#pragma link "sLabel"
#pragma link "sPanel"
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm4::FormClose(TObject *Sender, TCloseAction &Action)
{
  Form2->RadioGroup1->ItemIndex=-1;
}
//---------------------------------------------------------------------------
void __fastcall TForm4::sBitBtn1Click(TObject *Sender)
{
   // sEdit1->Text Form2->sComboBox3->Items->Strings[sComboBox3->ItemIndex];
   Form2->sComboBox3->Items->Add(sEdit1->Text);
   ShowMessage("Saqlandi.");
   sEdit1->Text="";
   Form4->Close();
}
//---------------------------------------------------------------------------
