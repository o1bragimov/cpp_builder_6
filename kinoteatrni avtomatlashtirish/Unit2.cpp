//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sComboBox"
#pragma link "sPanel"
#pragma link "sBitBtn"
#pragma link "sEdit"
#pragma link "sCheckBox"
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm2::sBitBtn2Click(TObject *Sender)
{
        Form2->Visible=true;
        Form4->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::sBitBtn3Click(TObject *Sender)
{

          sPanel2->Visible=true;
          sPanel4->Visible=false;

}
//---------------------------------------------------------------------------


void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
        Form1->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::sBitBtn4Click(TObject *Sender)
{
          sPanel4->Visible=true;
          sPanel2->Visible=true;

}
//---------------------------------------------------------------------------


void __fastcall TForm2::sBitBtn1Click(TObject *Sender)
{
     Form2->Visible=false;
     Form3->Visible=true;   
}
//---------------------------------------------------------------------------

