//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sSkinManager"
#pragma link "sGauge"
#pragma link "sSkinManager"
#pragma link "frxpngimage"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
        sGauge1->Progress=sGauge1->Progress+20; //progress barni time da tolishi

}
//---------------------------------------------------------------------------



void __fastcall TForm1::sGauge1Change(TObject *Sender)
{
        if (sGauge1->Progress==100)
        {
             Form1->Visible=False;
             Form3->Show();
        }
}
//---------------------------------------------------------------------------


