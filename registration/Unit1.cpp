//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sSkinManager"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Label1Click(TObject *Sender)
{
   Form2->ShowModal();        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CheckBox1Click(TObject *Sender)
{
        if(!(CheckBox1->Checked == true)){
	Edit2->PasswordChar = '*';
	}else{
	Edit2->PasswordChar = '\0';}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
TStringList *sl = new TStringList();
sl->LoadFromFile("result.txt");
AnsiString matn,ch;
ch=" ";
int k;
  for (int i=0; i<sl->Count; i++) {
             matn = AnsiString(sl->Strings[i]).c_str();
        }
   k=matn.Pos(ch);
  String a=matn.SubString(0, k-1);
  String b=matn.SubString(k+1, matn.Length()-k+1);
   if((Edit1->Text==x) && (Edit2->Text==y))
   {
       Form3->ShowModal();
   }

}
//---------------------------------------------------------------------------

