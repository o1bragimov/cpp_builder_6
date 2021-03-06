//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
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

void __fastcall TForm3::Saqlash1Click(TObject *Sender)
{

               Form2->ADOQuery1->Active=false;
               Form2->ADOQuery1->Close();
               Form2->ADOQuery1->SQL->Clear();
               Form2->ADOQuery1->SQL->Text="INSERT INTO mavzuvlar ([mavzu]) VALUES (:p1)";
               Form2->ADOQuery1->Parameters->ParamByName("p1")->Value = sEdit1->Text;
               Form2->ADOQuery1->ExecSQL();
               Form2->ADOQuery1->Close();
               Form2->ADOQuery1->SQL->Clear();
               Form2->ADOQuery1->SQL->Text="INSERT INTO matnlar ([matn]) VALUES (:p1)";
               Form2->ADOQuery1->Parameters->ParamByName("p1")->Value = Memo1->Text;
               Form2->ADOQuery1->ExecSQL();
                 ShowMessage("Saqlandi.");
               Form2->ADOQuery1->SQL->Clear();
               Form2->ADOQuery1->SQL->Add( "select * from mavzuvlar" );
               Form2->ADOQuery1->Open();
               Form2->ADOTable1->Active=false;
               Form2->ADOTable2->Active=false;
               Form2->ADOTable2->Active=true;
               Form2->ADOTable1->Active=true;
               Form2->ADOQuery1->Active=true;
               sEdit1->Clear();
               Memo1->Lines->Clear();
               Form3->Close();
}
//---------------------------------------------------------------------------
