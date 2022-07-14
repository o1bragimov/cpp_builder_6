//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit3.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sEdit"
#pragma link "sPanel"
#pragma link "sBitBtn"
#pragma link "sLabel"
#pragma resource "*.dfm"
TForm4 *Form4;
 String picture;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm4::sBitBtn1Click(TObject *Sender)
{
         OpenPictureDialog1->Execute();
         Image1->Picture->LoadFromFile(OpenPictureDialog1->FileName);
         picture = OpenPictureDialog1->FileName;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::sBitBtn2Click(TObject *Sender)
{
                ADOQuery1->Close();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Text="INSERT INTO kiritish ([kino_nomi], [vaqti], [summasi], [rasm]) VALUES (:p1, :p2, :p3, :p4) ";

                ADOQuery1->Parameters->ParamByName("p1")->Value = sEdit1->Text;
                ADOQuery1->Parameters->ParamByName("p2")->Value = DateTimePicker1->Time;
                ADOQuery1->Parameters->ParamByName("p3")->Value = sEdit3->Text ;
                ADOQuery1->Parameters->ParamByName("p4")->Value = picture;


                ADOQuery1->ExecSQL();
                ShowMessage("Saqlandi.");

                Form2->ADOQuery1->SQL->Clear();
                Form2->ADOQuery1->SQL->Add( "select * from kiritish" );
                Form2->ADOQuery1->Open();


                sEdit1->Text="";
                sEdit3->Text="";
                //DateTimePicker1->Time="0:00:00";

                

}
//---------------------------------------------------------------------------


void __fastcall TForm4::sBitBtn4Click(TObject *Sender)
{
   Form4->Close();
   Form2->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::sBitBtn3Click(TObject *Sender)
{
                sEdit1->Text="";

                sEdit3->Text="";

}
//---------------------------------------------------------------------------


