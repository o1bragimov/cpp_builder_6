//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sEdit"
#pragma link "sPanel"
#pragma link "sSkinManager"
#pragma link "sButton"
#pragma link "sCheckBox"
#pragma link "sLabel"
#pragma link "sPanel"
#pragma link "sButton"
#pragma link "sCheckBox"
#pragma link "sLabel"
#pragma link "sComboBox"
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
   String date = FormatDateTime("dd\\mm\\yyyy", DateTimePicker1->Date);
   String del=DBGrid1->DataSource->DataSet->FieldByName("id")->AsString;
               if(sCheckBox1->Checked==true){
                ADOQuery1->Close();
                ADOQuery1->SQL->Clear();

                ADOQuery1->SQL->Add("insert into avtomat (05\03\2022), values (:p1)");
               // "UPDATE Students SET Nm = :p1, Ln = :p2, Ln2 = :p3, Gr = :p4, Adr = :p5, Tel = :p6 WHERE Id = :p7"
                ADOQuery1->Parameters->ParamByName("p1")->Value ="NB";
                ADOQuery1->ExecSQL();
                ShowMessage("Saqlandi.");
                ADOQuery1->Close();
                ADOQuery1->Open();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add( "select * from avtomat" );

                 }else{ShowMessage("NB tanlang.");}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormCreate(TObject *Sender)
{
      sComboBox1->Sorted = true;
       sComboBox1->Items->Clear();
       ADOQuery1->Close();
       ADOQuery1->SQL->Clear();
       ADOQuery1->SQL->Add("SELECT *FROM avtomat");
       ADOQuery1->Open();
         while (!ADOQuery1->Eof)
         {
          sComboBox1->Items->Add(ADOQuery1->Fields->FieldByName("fio")->AsString);
          ADOQuery1->Next();
          }
}
//---------------------------------------------------------------------------

