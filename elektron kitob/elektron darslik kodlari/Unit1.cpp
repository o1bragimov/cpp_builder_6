//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "frxpngimage"
#pragma link "sSkinManager"
#pragma link "sBitBtn"
#pragma link "sEdit"
#pragma link "sCheckBox"
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
  if(Form1->AlphaBlendValue<250){
  Form1->AlphaBlendValue=Form1->AlphaBlendValue+50;}else
  {Form1->AlphaBlendValue=250;}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::sBitBtn1Click(TObject *Sender)
{
 if (sEdit1->Text.Length()>0 && sEdit2->Text.Length()>0){
         ADOQuery1->Close();
         ADOQuery1->SQL->Clear();
         ADOQuery1->SQL->Add("Select * from parol WHERE login = ('"+sEdit1->Text+"')");
         ADOQuery1->Open();

         if(ADOQuery1->FieldByName("login")->AsString!=sEdit1->Text )
          {
              ShowMessage("Login yoki Parol noto'g'ri!!!");
              sEdit1->Clear();
              sEdit2->Clear();
              sEdit1->SetFocus();
              return;
           }
           else{

              ADOQuery1->Close();
              ADOQuery1->SQL->Clear();
              ADOQuery1->SQL->Add("Select * from parol WHERE parol = \'"+sEdit2->Text+"\'");
              ADOQuery1->Open();

              if(ADOQuery1->FieldByName("parol")->AsString!=sEdit2->Text )
               {
                 ShowMessage("Login yoki Parol noto'g'ri!!!");
                 sEdit1->Clear();
                 sEdit2->Clear();
                 sEdit1->SetFocus();
                 return;
               }
              else
              {
                sEdit1->Clear();
                sEdit2->Clear();
                Form2->Show();
                Form1->Visible=False;
             }
           }
           }else{

               ShowMessage("Login yoki Parol noto'g'ri!!!");
                 sEdit1->Clear();
                 sEdit2->Clear();
                 sEdit1->SetFocus();
                 return;
           }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sEdit1KeyPress(TObject *Sender, char &Key)
{
   if (Key == VK_RETURN)
    {
     sEdit2->SetFocus();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sEdit2KeyPress(TObject *Sender, char &Key)
{
        if (Key == VK_RETURN)
         {
         sBitBtn1->SetFocus();
         }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sCheckBox1Click(TObject *Sender)
{
        if(!(sCheckBox1->Checked == true))
	sEdit2->PasswordChar = '*';
	else
	sEdit2->PasswordChar = '\0';
}
//---------------------------------------------------------------------------

