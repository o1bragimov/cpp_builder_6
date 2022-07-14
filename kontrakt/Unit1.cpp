//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sEdit"
#pragma link "sPanel"
#pragma link "sSkinManager"
#pragma link "sButton"
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
                ADOQuery1->Close();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Text="INSERT INTO tablitsa ([ism], [familya], [umumiy summa], [tolangan summa], [qoldiq summa], [sana]) VALUES (:p1, :p2, :p3, :p4, :p5, :p6) ";

                String date = FormatDateTime("dd\\mm\\yyyy", DateTimePicker1->Date);
                String qiymat = IntToStr(StrToInt(sEdit3->Text) - StrToInt(sEdit4->Text) );
                ADOQuery1->Parameters->ParamByName("p1")->Value = sEdit1->Text;
                ADOQuery1->Parameters->ParamByName("p2")->Value = sEdit2->Text;
                ADOQuery1->Parameters->ParamByName("p3")->Value = sEdit3->Text;
                ADOQuery1->Parameters->ParamByName("p4")->Value = sEdit4->Text;
                ADOQuery1->Parameters->ParamByName("p5")->Value = qiymat;
                ADOQuery1->Parameters->ParamByName("p6")->Value = date;


                ADOQuery1->ExecSQL();
                ShowMessage("Saqlandi.");

                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add( "select * from tablitsa" );
                ADOQuery1->Open();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::sButton3Click(TObject *Sender)
{

        int k = DBGrid1->DataSource->DataSet->RecordCount;

        if (k>0){
        String del=DBGrid1->DataSource->DataSet->FieldByName("id")->AsString;

        if (Application->MessageBoxA("Foydalanuvchini o`chirmoqchimisiz.","Tasdiqlang!",MB_YESNO|MB_ICONINFORMATION)==ID_YES)
        {
                ADOQuery1->Close();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add("DELETE FROM tablitsa WHERE id="+del);
                ADOQuery1->ExecSQL();


                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add( "select * from tablitsa" );
                ADOQuery1->Open();

          }

          }
          else{ShowMessage("O'chirolmaysiz!!!");}
        


}
//---------------------------------------------------------------------------
void __fastcall TForm1::sButton2Click(TObject *Sender)
{
   sEdit1->Clear();
   sEdit2->Clear();
   sEdit3->Clear();
   sEdit4->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::About1Click(TObject *Sender)
{
        Form2->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TizimdanChiqish1Click(TObject *Sender)
{
     Form1->Close();   
}
//---------------------------------------------------------------------------
