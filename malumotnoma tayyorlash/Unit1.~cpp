//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sPanel"
#pragma link "sSkinManager"
#pragma link "sLabel"
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


void __fastcall TForm1::sBitBtn1Click(TObject *Sender)
{
                ADOQuery1->Close();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Text="INSERT INTO guruh ([guruh], [familya], [ism], [sharif]) VALUES (:p1, :p2, :p3, :p4) ";

                ADOQuery1->Parameters->ParamByName("p1")->Value = sEdit1->Text;
                ADOQuery1->Parameters->ParamByName("p2")->Value = sEdit2->Text;
                ADOQuery1->Parameters->ParamByName("p3")->Value = sEdit3->Text ;
                ADOQuery1->Parameters->ParamByName("p4")->Value = sEdit4->Text;


                ADOQuery1->ExecSQL();
                ShowMessage("Saqlandi.");
             //   ADOQuery1->Close();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add( "select * from guruh" );
                ADOQuery1->Open();

}
//---------------------------------------------------------------------------



void __fastcall TForm1::sEdit1KeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{

    if (Key == VK_RETURN)
    {
     sEdit2->SetFocus();
    }

}
//---------------------------------------------------------------------------



void __fastcall TForm1::sEdit2KeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{

 if (Key == VK_RETURN)
    {
     sEdit3->SetFocus();
    }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::sEdit3KeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{

 if (Key == VK_RETURN)
    {
     sEdit4->SetFocus();
    }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::sEdit4KeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
/*
   if (Key == VK_RETURN)
    {
                ADOQuery1->Close();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Text="INSERT INTO guruh ([guruh], [familya], [ism], [sharif]) VALUES (:p1, :p2, :p3, :p4) ";

                ADOQuery1->Parameters->ParamByName("p1")->Value = sEdit1->Text;
                ADOQuery1->Parameters->ParamByName("p2")->Value = sEdit2->Text;
                ADOQuery1->Parameters->ParamByName("p3")->Value = sEdit3->Text ;
                ADOQuery1->Parameters->ParamByName("p4")->Value = sEdit4->Text;


                ADOQuery1->ExecSQL();
                ShowMessage("Saqlandi.");
                ADOQuery1->Close();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add( "select * from guruh" );
                ADOQuery1->Open();
    }
    */  
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sBitBtn3Click(TObject *Sender)
{
        int k = DBGrid1->DataSource->DataSet->RecordCount;
        if (k>0)
        {
           String del=DBGrid1->DataSource->DataSet->FieldByName("ID")->AsString;
          if(Application->MessageBoxA("Foydalanuvchini o`chirmoqchimisiz.","Tasdiqlang!",MB_YESNO|MB_ICONINFORMATION)==ID_YES)
              {
                ADOQuery1->Close();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add("DELETE FROM guruh WHERE ID="+del);
                ADOQuery1->ExecSQL();

                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add( "select * from guruh" );
                ADOQuery1->Open();
                }
          }
          else
                {
                ShowMessage("O'chirolmaysiz!!!");
                }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::sBitBtn2Click(TObject *Sender)
{
     sEdit1->Clear();
     sEdit2->Clear();
     sEdit3->Clear();
}
//---------------------------------------------------------------------------




void __fastcall TForm1::sCheckBox1Click(TObject *Sender)
{
   if(sCheckBox1->Checked==true){
      Form3->ShowModal();

   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sBitBtn4Click(TObject *Sender)
{
   Form2->ShowModal();
}
//---------------------------------------------------------------------------

