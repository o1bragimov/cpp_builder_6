//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sBitBtn"
#pragma link "sEdit"
#pragma link "sLabel"
#pragma link "sPanel"
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::sBitBtn1Click(TObject *Sender)
{
                ADOQuery1->Close();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Text="INSERT INTO fakultet ([lavozim], [familya], [ism], [sharif], [fakultet]) VALUES (:p1, :p2, :p3, :p4,:p5) ";
                ADOQuery1->Parameters->ParamByName("p1")->Value = sEdit1->Text;
                ADOQuery1->Parameters->ParamByName("p2")->Value = sEdit2->Text;
                ADOQuery1->Parameters->ParamByName("p3")->Value = sEdit3->Text ;
                ADOQuery1->Parameters->ParamByName("p4")->Value = sEdit4->Text;
                ADOQuery1->Parameters->ParamByName("p5")->Value = sEdit5->Text;
                ADOQuery1->ExecSQL();
                ShowMessage("Saqlandi.");
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add( "select * from fakultet" );
                ADOQuery1->Open();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::sBitBtn3Click(TObject *Sender)
{
        int k = DBGrid1->DataSource->DataSet->RecordCount;
        if (k>0)
        {
           String del=DBGrid1->DataSource->DataSet->FieldByName("ID")->AsString;
          if(Application->MessageBoxA("Foydalanuvchini o`chirmoqchimisiz.","Tasdiqlang!",MB_YESNO|MB_ICONINFORMATION)==ID_YES)
              {
                ADOQuery1->Close();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add("DELETE FROM fakultet WHERE ID="+del);
                ADOQuery1->ExecSQL();

                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add( "select * from fakultet" );
                ADOQuery1->Open();
                }
          }
          else
                {
                ShowMessage("O'chirolmaysiz!!!");
                }

}
//---------------------------------------------------------------------------

void __fastcall TForm3::sBitBtn2Click(TObject *Sender)
{
/*                ADOQuery1->Close();
                ADOQuery1->SQL->Clear();
                String del=DBGrid1->DataSource->DataSet->FieldByName("id")->AsString;

                ADOQuery1->SQL->Text="update fakultet set (([lavozim], [familya], [ism], [sharif], [fakultet]) VALUES (:p1, :p2, :p3, :p4,:p5)) WHERE ID="+del;

                sEdit1->Text = ADOQuery1->FieldByName("lavozim")->AsString;
                sEdit2->Text = ADOQuery1->FieldByName("familya")->AsString;
                sEdit3->Text = ADOQuery1->FieldByName("ism")->AsString;
                sEdit4->Text = ADOQuery1->FieldByName("sharif")->AsString;
                sEdit5->Text = ADOQuery1->FieldByName("fakultet")->AsString;

                ADOQuery1->Parameters->ParamByName("p1")->Value = sEdit1->Text;
                ADOQuery1->Parameters->ParamByName("p2")->Value = sEdit2->Text;
                ADOQuery1->Parameters->ParamByName("p3")->Value = sEdit3->Text ;
                ADOQuery1->Parameters->ParamByName("p4")->Value = sEdit4->Text;
                ADOQuery1->Parameters->ParamByName("p5")->Value = sEdit5->Text;

                ADOQuery1->ExecSQL();
                ShowMessage("Saqlandi.");
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add( "select * from fakultet" );
                ADOQuery1->Open();
*/



                 sEdit1->Clear();
                 sEdit2->Clear();
                 sEdit3->Clear();
                 sEdit4->Clear();
                 sEdit5->Clear();











}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormClose(TObject *Sender, TCloseAction &Action)
{
    Form1->sCheckBox1->Checked=false;   
}
//---------------------------------------------------------------------------

