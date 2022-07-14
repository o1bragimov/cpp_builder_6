//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sSkinManager"
#pragma link "sPanel"
#pragma link "sEdit"
#pragma link "sLabel"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "frxExportCSV"
#pragma link "frxExportPDF"
#pragma link "frxExportRTF"
#pragma link "frxExportText"
#pragma resource "*.dfm"
TForm1 *Form1;
String ID;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{

}
//---------------------------------------------------------------------------







void __fastcall TForm1::Saqlash1Click(TObject *Sender)
{
                ADOQuery1->Close();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Text="INSERT INTO menu ([Ism], [Familya], [Kurs ishi mavzuvsi], [Fan], [Topshirgan sana], [Ball], [Guruh], [Baho]) VALUES (:p1, :p2, :p4, :p5, :p6, :p7, :p8, :p9) ";
                ADOQuery1->Parameters->ParamByName("p1")->Value = sEdit1->Text;
                ADOQuery1->Parameters->ParamByName("p2")->Value = sEdit2->Text;
                ADOQuery1->Parameters->ParamByName("p4")->Value = sEdit3->Text;
                ADOQuery1->Parameters->ParamByName("p5")->Value = sEdit4->Text;
                String date = FormatDateTime("dd\\mm\\yyyy", DateTimePicker1->Date);
                ADOQuery1->Parameters->ParamByName("p6")->Value = date;
                ADOQuery1->Parameters->ParamByName("p7")->Value = sEdit6->Text;
                ADOQuery1->Parameters->ParamByName("p8")->Value = sEdit5->Text;
                ADOQuery1->Parameters->ParamByName("p9")->Value = sEdit8->Text;

                ADOQuery1->ExecSQL();
                ShowMessage("Saqlandi.");

                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add( "SELECT * FROM  menu ");
                ADOQuery1->Open();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Ochirish1Click(TObject *Sender)
{

        int k = DBGrid2->DataSource->DataSet->RecordCount;
        if (k>0){
        String cur_id = DBGrid2->DataSource->DataSet->FieldByName("id")->AsString;


        if (Application->MessageBoxA("Foydalanuvchini o`chirmoqchimisiz.","Tasdiqlang!",MB_YESNO|MB_ICONINFORMATION)==ID_YES)
        {
                ADOQuery1->Close();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add("DELETE FROM menu WHERE id = " + cur_id);
                ADOQuery1->ExecSQL();

                ADOQuery1->Close();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add( "select *from menu" );
                ADOQuery1->Open();
         }



}}
//---------------------------------------------------------------------------





void __fastcall TForm1::Hisobot1Click(TObject *Sender)
{
         frxReport1->ShowReport();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TizimdanChiqish1Click(TObject *Sender)
{
    Form1->Close();    
}
//---------------------------------------------------------------------------

void __fastcall TForm1::About1Click(TObject *Sender)
{
   Form2->ShowModal();     
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormActivate(TObject *Sender)
{
     sEdit7->Text=DBGrid2->Font->Size;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::UpDown1Click(TObject *Sender, TUDBtnType Button)
{
        UpDown1->Max = 125;
	UpDown1->Min = 8;
	UpDown1->Increment = 2;
	UpDown1->Position = DBGrid2->Font->Size;


            DBGrid2->Font->Size=UpDown1->Position;
            sEdit7->Text=DBGrid2->Font->Size;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Qidirish1Click(TObject *Sender)
{
  Form3->ShowModal();      
}
//---------------------------------------------------------------------------


