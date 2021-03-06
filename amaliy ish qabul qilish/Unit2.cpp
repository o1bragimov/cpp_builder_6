//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sBitBtn"
#pragma link "sComboBox"
#pragma link "sEdit"
#pragma link "sPanel"
#pragma link "sLabel"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "frxExportPDF"
#pragma link "frxExportXLS"
#pragma link "sSkinProvider"
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm2::sBitBtn2Click(TObject *Sender)
{

         if (sComboBox2->ItemIndex>-1 && sComboBox2->ItemIndex<=3
              && sComboBox3->ItemIndex>-1 && sComboBox3->ItemIndex<=3)
        {
           if(sEdit2->Text.Length()>0 && sEdit3->Text.Length()>0
              && sEdit4->Text.Length()>0 && sEdit5->Text.Length()>0
              && sEdit6->Text.Length()>0){

                ADOQuery1->Close();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Text="INSERT INTO tabel1 ([Familya], [Ism], [Guruh], [Fakultet], [Fan], [Amali Ish Mavzu], [Topshiriq Berilgan Sana], [Ball]) VALUES (:p1, :p2, :p3, :p4, :p5, :p6, :p7, :p8) ";

                ADOQuery1->Parameters->ParamByName("p1")->Value = sEdit2->Text;
                ADOQuery1->Parameters->ParamByName("p2")->Value = sEdit3->Text;
                ADOQuery1->Parameters->ParamByName("p3")->Value = sComboBox3->Items->Strings[sComboBox3->ItemIndex];
                ADOQuery1->Parameters->ParamByName("p4")->Value = sComboBox2->Items->Strings[sComboBox2->ItemIndex];
                ADOQuery1->Parameters->ParamByName("p5")->Value = sEdit4->Text;
                ADOQuery1->Parameters->ParamByName("p6")->Value = sEdit5->Text;
                ADOQuery1->Parameters->ParamByName("p7")->Value = MaskEdit1->Text;
                ADOQuery1->Parameters->ParamByName("p8")->Value = sEdit6->Text;

                ADOQuery1->ExecSQL();
                ShowMessage("Saqlandi.");

                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add( "select * from tabel1" );
                ADOQuery1->Open();

                int k = DBGrid1->DataSource->DataSet->RecordCount;
                sLabel9->Caption=IntToStr(k);

              }
                   else{
                ShowMessage("To'liq hamma qatorlarni to'ldiring!");
                   }
        }
        else
        {
            ShowMessage("Tanlanmadi!");
        }




}
//---------------------------------------------------------------------------

void __fastcall TForm2::sBitBtn4Click(TObject *Sender)
{

        int k = DBGrid1->DataSource->DataSet->RecordCount;
        sLabel9->Caption=IntToStr(k);
        if (k>0){
        String del=DBGrid1->DataSource->DataSet->FieldByName("ID")->AsString;

        if (Application->MessageBoxA("Foydalanuvchini o`chirmoqchimisiz.","Tasdiqlang!",MB_YESNO|MB_ICONINFORMATION)==ID_YES)
        {
                ADOQuery1->Close();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add("DELETE FROM tabel1 WHERE ID="+del);
                ADOQuery1->ExecSQL();


                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add( "select * from tabel1" );
                ADOQuery1->Open();

          }

          }
          else{ShowMessage("O'chirolmaysiz!!!");}
         k = DBGrid1->DataSource->DataSet->RecordCount;
        sLabel9->Caption=IntToStr(k);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::sBitBtn3Click(TObject *Sender)
{
   sComboBox2->Text="Tanlang...";
   sComboBox3->Text="Tanlang...";

   sEdit2->Text = "";
   sEdit3->Text = "";
   sEdit4->Text = "";
   sEdit5->Text = "";
   sEdit6->Text = "";
   MaskEdit1->Text = "  .  .    ";

}
//---------------------------------------------------------------------------







void __fastcall TForm2::sBitBtn1Click(TObject *Sender)
{
         Form1->Close();
         Form2->Close();

}
//---------------------------------------------------------------------------


void __fastcall TForm2::sBitBtn6Click(TObject *Sender)
{
        DBGrid1->Font->Size=StrToInt(DBGrid1->Font->Size)-2;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::sBitBtn7Click(TObject *Sender)
{
        DBGrid1->Font->Size=StrToInt(DBGrid1->Font->Size)+2;
}
//---------------------------------------------------------------------------







void __fastcall TForm2::FormCreate(TObject *Sender)
{
int k = DBGrid1->DataSource->DataSet->RecordCount;
        sLabel9->Caption=IntToStr(k);

             

}
//---------------------------------------------------------------------------



void __fastcall TForm2::sBitBtn8Click(TObject *Sender)
{
        String s;
        s=sComboBox1->Items->Strings[sComboBox1->ItemIndex];
        if(sComboBox1->ItemIndex>-1 && sEdit1->Text.Length()>0){
          switch(sComboBox1->ItemIndex){
                 case 0:
                 DBGrid1->DataSource->DataSet->Locate("Fakultet", sEdit1->Text, TLocateOptions() << loCaseInsensitive << loPartialKey);
                 DBGrid1->SetFocus();
                 break;

                 case 1:
                 DBGrid1->DataSource->DataSet->Locate("Familya", sEdit1->Text, TLocateOptions() << loCaseInsensitive << loPartialKey);
                 DBGrid1->SetFocus();
                 break;

                 case 2:
                 DBGrid1->DataSource->DataSet->Locate("Fan", sEdit1->Text, TLocateOptions() << loCaseInsensitive << loPartialKey);
                 DBGrid1->SetFocus();
                 break;

                 case 3:
                 DBGrid1->DataSource->DataSet->Locate("Ism", sEdit1->Text, TLocateOptions() << loCaseInsensitive << loPartialKey);
                 DBGrid1->SetFocus();
                 break;

                 case 4:
                 DBGrid1->DataSource->DataSet->Locate("Guruh", sEdit1->Text, TLocateOptions() << loCaseInsensitive << loPartialKey);
                 DBGrid1->SetFocus();
                 break;

                 case 5:
                 DBGrid1->DataSource->DataSet->Locate("Amali Ish Mavzu", sEdit1->Text, TLocateOptions() << loCaseInsensitive << loPartialKey);
                 DBGrid1->SetFocus();
                 break;

                 case 6:
                 DBGrid1->DataSource->DataSet->Locate("Sana", sEdit1->Text, TLocateOptions() << loCaseInsensitive << loPartialKey);
                 DBGrid1->SetFocus();
                 break;

                 case 7:
                 DBGrid1->DataSource->DataSet->Locate("Ball", sEdit1->Text, TLocateOptions() << loCaseInsensitive << loPartialKey);
                 DBGrid1->SetFocus();
                 break;

         }


      }

}
//---------------------------------------------------------------------------


void __fastcall TForm2::FormActivate(TObject *Sender)
{
  sEdit2->SetFocus();      
}
//---------------------------------------------------------------------------



void __fastcall TForm2::sEdit2KeyPress(TObject *Sender, char &Key)
{
   if (Key == VK_RETURN)
    {
     sEdit3->SetFocus();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::sEdit3KeyPress(TObject *Sender, char &Key)
{
if (Key == VK_RETURN)
    {
     sComboBox3->SetFocus();
    }
}
//---------------------------------------------------------------------------



void __fastcall TForm2::sEdit4KeyPress(TObject *Sender, char &Key)
{
   if (Key == VK_RETURN)
    {
     sEdit5->SetFocus();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::sEdit5KeyPress(TObject *Sender, char &Key)
{
 if (Key == VK_RETURN)
    {
     MaskEdit1->SetFocus();
    }        
}
//---------------------------------------------------------------------------

void __fastcall TForm2::sEdit6KeyPress(TObject *Sender, char &Key)
{
 if (Key == VK_RETURN){
     if (sComboBox2->ItemIndex>-1 && sComboBox2->ItemIndex<=3
              && sComboBox3->ItemIndex>-1 && sComboBox3->ItemIndex<=3)
        {
           if(sEdit2->Text.Length()>0 && sEdit3->Text.Length()>0
              && sEdit4->Text.Length()>0 && sEdit5->Text.Length()>0
              && sEdit6->Text.Length()>0){

                ADOQuery1->Close();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Text="INSERT INTO tabel1 ([Familya], [Ism], [Guruh], [Fakultet], [Fan], [Amali Ish Mavzu], [Topshiriq Berilgan Sana], [Ball]) VALUES (:p1, :p2, :p3, :p4, :p5, :p6, :p7, :p8) ";

                ADOQuery1->Parameters->ParamByName("p1")->Value = sEdit2->Text;
                ADOQuery1->Parameters->ParamByName("p2")->Value = sEdit3->Text;
                ADOQuery1->Parameters->ParamByName("p3")->Value = sComboBox3->Items->Strings[sComboBox3->ItemIndex];
                ADOQuery1->Parameters->ParamByName("p4")->Value = sComboBox2->Items->Strings[sComboBox2->ItemIndex];
                ADOQuery1->Parameters->ParamByName("p5")->Value = sEdit4->Text;
                ADOQuery1->Parameters->ParamByName("p6")->Value = sEdit5->Text;
                ADOQuery1->Parameters->ParamByName("p7")->Value = MaskEdit1->Text;
                ADOQuery1->Parameters->ParamByName("p8")->Value = sEdit6->Text;

                ADOQuery1->ExecSQL();
                ShowMessage("Saqlandi.");

                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add( "select * from tabel1" );
                ADOQuery1->Open();

                int k = DBGrid1->DataSource->DataSet->RecordCount;
                sLabel9->Caption=IntToStr(k);

              }
                   else{
                ShowMessage("To'liq hamma qatorlarni to'ldiring!");
                   }
        }
        else
        {
            ShowMessage("Tanlanmadi!");
        }
      }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::sComboBox3KeyPress(TObject *Sender, char &Key)
{
   if (Key == VK_RETURN)
    {
     sComboBox2->SetFocus();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::sComboBox2KeyPress(TObject *Sender, char &Key)
{
if (Key == VK_RETURN)
    {
     sEdit4->SetFocus();
    }
}
//---------------------------------------------------------------------------


void __fastcall TForm2::MaskEdit1KeyPress(TObject *Sender, char &Key)
{
    if (Key == VK_RETURN)
    {
     sEdit6->SetFocus();
    }
}
//---------------------------------------------------------------------------


void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
         Form1->Close();

}
//---------------------------------------------------------------------------





void __fastcall TForm2::RadioGroup1Click(TObject *Sender)
{
 if( RadioGroup1->ItemIndex==0){
    Form2->frxReport1->ShowReport();
 }else if( RadioGroup1->ItemIndex==1){
    Form4->ShowModal();
 }else if( RadioGroup1->ItemIndex==2){
    Form5->ShowModal();
 }else{
        Form2->Visible=False;
        Form1->Visible=False;
        Form3->Visible=True;
      }




}
//---------------------------------------------------------------------------

void __fastcall TForm2::frxReport1ClosePreview(TObject *Sender)
{
   Form2->RadioGroup1->ItemIndex=-1;     
}
//---------------------------------------------------------------------------


