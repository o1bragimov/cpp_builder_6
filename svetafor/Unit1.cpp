//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
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
Image2->Top=Image2->Top-25;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
Image3->Left=Image3->Left+25;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer3Timer(TObject *Sender)
{
  if( Timer3->Interval==2000)
   Shape1->Brush->Color=clRed;
   Shape2->Brush->Color=clWhite;
   Shape3->Brush->Color=clWhite;


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer4Timer(TObject *Sender)
{
Shape2->Brush->Color=clYellow;
Shape1->Brush->Color=clWhite;
Shape3->Brush->Color=clWhite;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer5Timer(TObject *Sender)
{
Shape3->Brush->Color=clGreen;
Shape2->Brush->Color=clWhite;
Shape1->Brush->Color=clWhite;
}
//---------------------------------------------------------------------------
