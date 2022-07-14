//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
#include "Unit4.h"
#include "Unit2.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "acAlphaImageList"
#pragma link "sBitBtn"
#pragma link "sLabel"
#pragma link "sPanel"
#pragma link "frxpngimage"
#pragma link "sComboBox"
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------







void __fastcall TForm3::sLabel1Click(TObject *Sender)
{
     Form2->Show();
     Form3->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormCreate(TObject *Sender)
{

       sComboBox1->Sorted = true;
       sComboBox1->Items->Clear();
       ADOQuery1->Close();
       ADOQuery1->SQL->Clear();
       ADOQuery1->SQL->Add("SELECT *FROM kiritish");
       ADOQuery1->Open();
         while (!ADOQuery1->Eof)
         {
          sComboBox1->Items->Add(ADOQuery1->Fields->FieldByName("kino_nomi")->AsString);
          sComboBox2->Items->Add(ADOQuery1->Fields->FieldByName("vaqti")->AsString);
          sComboBox3->Items->Add(ADOQuery1->Fields->FieldByName("summasi")->AsString);
          ADOQuery1->Next();
          }






}
//---------------------------------------------------------------------------


void __fastcall TForm3::sComboBox1Select(TObject *Sender)
{
          ADOQuery1->Close();
          ADOQuery1->SQL->Clear();
          ADOQuery1->SQL->Text = "Select * FROM kiritish WHERE kino_nomi = ('"+ sComboBox1->Items->Strings[sComboBox1->ItemIndex] +"') ";
          ADOQuery1->Open();

          sLabel3->Caption = ADOQuery1->FieldByName("kino_nomi")->AsString;

          sLabel5->Caption = ADOQuery1->FieldByName("vaqti")->AsString;

          sLabel7->Caption = ADOQuery1->FieldByName("summasi")->AsString;

          Image1->Picture->LoadFromFile(ADOQuery1->FieldByName("rasm")->AsString);

          ADOQuery1->ExecSQL();




}
//---------------------------------------------------------------------------

void __fastcall TForm3::sComboBox2Select(TObject *Sender)
{
          ADOQuery1->Close();
          ADOQuery1->SQL->Clear();
          ADOQuery1->SQL->Text = "Select * FROM kiritish WHERE vaqti = ('"+ sComboBox2->Items->Strings[sComboBox2->ItemIndex] +"') ";
          ADOQuery1->Open();

          sLabel3->Caption = ADOQuery1->FieldByName("kino_nomi")->AsString;

          sLabel5->Caption = ADOQuery1->FieldByName("vaqti")->AsString;

          sLabel7->Caption = ADOQuery1->FieldByName("summasi")->AsString;

          Image1->Picture->LoadFromFile(ADOQuery1->FieldByName("rasm")->AsString);

          ADOQuery1->ExecSQL();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::sComboBox3Select(TObject *Sender)
{
          ADOQuery1->Close();
          ADOQuery1->SQL->Clear();
          ADOQuery1->SQL->Text = "Select * FROM kiritish WHERE summasi = ('"+ sComboBox3->Items->Strings[sComboBox3->ItemIndex] +"') ";
          ADOQuery1->Open();

          sLabel3->Caption = ADOQuery1->FieldByName("kino_nomi")->AsString;

          sLabel5->Caption = ADOQuery1->FieldByName("vaqti")->AsString;

          sLabel7->Caption = ADOQuery1->FieldByName("summasi")->AsString;

          Image1->Picture->LoadFromFile(ADOQuery1->FieldByName("rasm")->AsString);

          ADOQuery1->ExecSQL();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::sBitBtn1Click(TObject *Sender)
{

         Form5->sLabel5->Caption = sLabel3->Caption;
         Form5->sLabel7->Caption = sLabel5->Caption;
         Form5->sLabel9->Caption = sLabel7->Caption;

   Form3->Visible=false;
   Form5->Show();     
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormClose(TObject *Sender, TCloseAction &Action)
{
Form1->Close();

}
//---------------------------------------------------------------------------

