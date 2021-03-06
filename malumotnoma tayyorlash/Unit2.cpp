//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sPanel"
#pragma link "frxpngimage"
#pragma link "sComboBox"
#pragma link "sLabel"
#pragma link "sBitBtn"
#pragma link "sPanel"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "sButton"
#pragma link "sEdit"
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Timer1Timer(TObject *Sender)
{
//  sLabel1->      
}
//---------------------------------------------------------------------------



void __fastcall TForm2::FormCreate(TObject *Sender)
{
       sComboBox1->Sorted = true;
       sComboBox1->Items->Clear();
       ADOQuery1->Close();
       ADOQuery1->SQL->Clear();
       ADOQuery1->SQL->Add("SELECT *FROM fakultet");
       ADOQuery1->Open();
         while (!ADOQuery1->Eof)
         {
          sComboBox1->Items->Add(ADOQuery1->Fields->FieldByName("lavozim")->AsString);
          ADOQuery1->Next();
          }

       sComboBox3->Sorted = true;
       sComboBox3->Items->Clear();
       ADOQuery2->Close();
       ADOQuery2->SQL->Clear();
       ADOQuery2->SQL->Add("SELECT *FROM guruh");
       ADOQuery2->Open();
         while (!ADOQuery2->Eof)
         {
          sComboBox3->Items->Add(ADOQuery2->Fields->FieldByName("familya")->AsString);
          ADOQuery2->Next();
          }



}
//---------------------------------------------------------------------------


void __fastcall TForm2::sComboBox1Select(TObject *Sender)
{
          ADOQuery1->Close();
          ADOQuery1->SQL->Clear();
          ADOQuery1->SQL->Text = "Select * FROM fakultet WHERE lavozim = ('"+ sComboBox1->Items->Strings[sComboBox1->ItemIndex] +"') ";
          ADOQuery1->Open();

          sLabel8->Caption = ADOQuery1->FieldByName("lavozim")->AsString;

          sLabel9->Caption = ADOQuery1->FieldByName("familya")->AsString;

          sLabel10->Caption = ADOQuery1->FieldByName("ism")->AsString;

          sLabel11->Caption = ADOQuery1->FieldByName("sharif")->AsString;

          sLabel12->Caption = ADOQuery1->FieldByName("fakultet")->AsString;

          ADOQuery1->ExecSQL();
}
//---------------------------------------------------------------------------


void __fastcall TForm2::sBitBtn1Click(TObject *Sender)
{
//   frxReport1->ShowReport();
Form4->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TForm2::sComboBox3Select(TObject *Sender)
{
         ADOQuery2->Close();
          ADOQuery2->SQL->Clear();
          ADOQuery2->SQL->Text = "Select * FROM guruh WHERE Familya = ('"+ sComboBox3->Items->Strings[sComboBox3->ItemIndex] +"') ";
          ADOQuery2->Open();

           ADOQuery2->FieldByName("guruh")->AsString;

           ADOQuery2->FieldByName("ism")->AsString;

           ADOQuery2->FieldByName("sharif")->AsString;

          ADOQuery2->ExecSQL();
}
//---------------------------------------------------------------------------


void __fastcall TForm2::sButton1Click(TObject *Sender)
{
        String s;
        s=sComboBox2->Items->Strings[sComboBox2->ItemIndex];

        sEdit1->Text=sComboBox3->Items->Strings[sComboBox3->ItemIndex];

        if(sEdit1->Text.Length()>0){
          switch(sComboBox1->ItemIndex){
                 case 0:
                 DBGrid1->DataSource->DataSet->Locate("guruh", sEdit1->Text, TLocateOptions() << loCaseInsensitive << loPartialKey);
                 DBGrid1->SetFocus();



                 break;

                 case 1:
                 DBGrid1->DataSource->DataSet->Locate("familya", sEdit1->Text, TLocateOptions() << loCaseInsensitive << loPartialKey);
                 DBGrid1->SetFocus();
                 break;

                 case 2:
                 DBGrid1->DataSource->DataSet->Locate("ism", sEdit1->Text, TLocateOptions() << loCaseInsensitive << loPartialKey);
                 DBGrid1->SetFocus();
                 break;

                 case 3:
                 DBGrid1->DataSource->DataSet->Locate("sharif", sEdit1->Text, TLocateOptions() << loCaseInsensitive << loPartialKey);
                 DBGrid1->SetFocus();
                 break;

         }


      }

}
//---------------------------------------------------------------------------

