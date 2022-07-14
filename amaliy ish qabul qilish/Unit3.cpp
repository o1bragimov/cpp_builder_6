//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sBitBtn"
#pragma link "sCheckBox"
#pragma link "sEdit"
#pragma link "sLabel"
#pragma link "sPanel"
#pragma link "sButton"
#pragma link "frxpngimage"
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm3::sCheckBox1Click(TObject *Sender)
{
    
        if(!(sCheckBox1->Checked == true))
	sEdit2->PasswordChar = '*';
	else
	sEdit2->PasswordChar = '\0';

        
}
//---------------------------------------------------------------------------

void __fastcall TForm3::sBitBtn1Click(TObject *Sender)
{
       if (sEdit1->Text.Length()>0 && sEdit2->Text.Length()>0){
         ADOQuery1->Close();
         ADOQuery1->SQL->Clear();
         ADOQuery1->SQL->Add("Select * from admin WHERE login = ('"+sEdit1->Text+"')");
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
              ADOQuery1->SQL->Add("Select * from admin WHERE parol = \'"+sEdit2->Text+"\'");
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
//                Form2->sLabel11->Caption = ADOQuery1->FieldByName("nickname")->AsString;
                sEdit1->Clear();
                sEdit2->Clear();
                Form2->Show();
                Form3->Visible=False;
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










void __fastcall TForm3::FormCloseQuery(TObject *Sender, bool &CanClose)
{
         ShowMessage("Dasturdan Chiqish Tugmasi Orqali Chiqiladi!");
         CanClose=false;
            return;        
}
//---------------------------------------------------------------------------

void __fastcall TForm3::sLabelFX1Click(TObject *Sender)
{
        Form2->Visible=False;
        Form6->ShowModal();

}
//---------------------------------------------------------------------------



void __fastcall TForm3::sBitBtn2Click(TObject *Sender)
{
        Form1->Close();
        Form3->Close();
}
//---------------------------------------------------------------------------

