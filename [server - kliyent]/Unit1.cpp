//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sButton"
#pragma link "sSkinManager"
#pragma link "sComboBox"
#pragma link "sLabel"
#pragma link "sPanel"
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
  if(OpenDialog1->Execute())
{
  if(SaveDialog1->Execute())
  {
    if(!CopyFile(OpenDialog1->FileName.c_str(), SaveDialog1->FileName.c_str(), true))
    {
      ShowMessage("?????????? ?????????? " + OpenDialog1->FileName + ".");
    }
  }
}      
}
//---------------------------------------------------------------------------
 