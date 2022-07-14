//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit1Change(TObject *Sender)
{
  if(Edit1->Text.Length()>0){
    Button1->Enabled=true;
    }else{
    Button1->Enabled=false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioGroup1Click(TObject *Sender)
{
  if(RadioGroup1->ItemIndex==0){
    Panel1->Visible=true;
    Panel2->Visible=false;
  } else{
  Panel2->Visible=true;
   Panel1->Visible=false;
  }



}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
 float a = StrToFloat(Edit1->Text);
      float b = a*(3.14/180);
 Edit2->Text= FloatToStr(b);

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit3Change(TObject *Sender)
{
   if(Edit3->Text.Length()>0){
    Button2->Enabled=true;
    }else{
    Button2->Enabled=false;
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
      float a = StrToFloat(Edit3->Text);
      float b = a*(180/3.14);
      Edit4->Text= FloatToStr(b);
}
//---------------------------------------------------------------------------
