//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sButton"
#pragma link "sCheckBox"
#pragma link "sEdit"
#pragma link "sLabel"
#pragma link "sPanel"
#pragma link "sSkinManager"
#pragma link "sButton"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sButton1Click(TObject *Sender)
{
     if(sEdit1->Text=="dasturlash"){
        if(sEdit2->Text=="kompyuter"){
          if(sCheckBox1->Checked==true) sLabel3->Caption="GULISTON DAVLAT UNIVERSITETI 1-KURS 7-21 GURUH";
          else sLabel3->Caption="SWD013 guruh Amirova Mahliyo";
        }

       }
         
}
//---------------------------------------------------------------------------
 