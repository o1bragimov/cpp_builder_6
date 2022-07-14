//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sBitBtn"
#pragma link "sButton"
#pragma link "sEdit"
#pragma link "sLabel"
#pragma link "sPanel"
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm5::sButton1Click(TObject *Sender)
{

                sLabel10->Caption = sButton1->Caption;



}
//---------------------------------------------------------------------------


void __fastcall TForm5::sBitBtn1Click(TObject *Sender)
{

                sLabel5->Caption = Form3->sLabel3->Caption ;
                sLabel7->Caption = Form3->sLabel5->Caption;
                sLabel9->Caption = Form3->sLabel7->Caption ;

                ADOQuery1->Close();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Text="INSERT INTO bilet ([Familya], [Ism], [joy], [film_nomi], [vaqti], [summasi]) VALUES (:p1, :p2, :p3, :p4, :p5 ,:p6) ";

                ADOQuery1->Parameters->ParamByName("p1")->Value = sEdit1->Text;
                ADOQuery1->Parameters->ParamByName("p2")->Value = sEdit2->Text;
                ADOQuery1->Parameters->ParamByName("p3")->Value = sLabel10->Caption ;
                ADOQuery1->Parameters->ParamByName("p4")->Value = sLabel5->Caption;
                ADOQuery1->Parameters->ParamByName("p5")->Value = sLabel7->Caption;
                ADOQuery1->Parameters->ParamByName("p6")->Value = sLabel9->Caption;

                ADOQuery1->ExecSQL();
                ShowMessage("Saqlandi.");
                Form5->Visible=false;
                Form3->Show();




}
//---------------------------------------------------------------------------

void __fastcall TForm5::sButton2Click(TObject *Sender)
{
 sLabel10->Caption = sButton2->Caption;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::sButton3Click(TObject *Sender)
{
 sLabel10->Caption = sButton3->Caption;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::sButton4Click(TObject *Sender)
{
 sLabel10->Caption = sButton4->Caption;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::sButton5Click(TObject *Sender)
{
 sLabel10->Caption = sButton5->Caption;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::sButton6Click(TObject *Sender)
{
 sLabel10->Caption = sButton6->Caption;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::sButton7Click(TObject *Sender)
{
 sLabel10->Caption = sButton7->Caption;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::sButton8Click(TObject *Sender)
{
 sLabel10->Caption = sButton8->Caption;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::sButton9Click(TObject *Sender)
{
 sLabel10->Caption = sButton9->Caption;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::sButton10Click(TObject *Sender)
{
 sLabel10->Caption = sButton9->Caption;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::sButton11Click(TObject *Sender)
{
 sLabel10->Caption = sButton11->Caption;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::sButton12Click(TObject *Sender)
{
 sLabel10->Caption = sButton12->Caption;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::sButton13Click(TObject *Sender)
{
 sLabel10->Caption = sButton13->Caption;        
}
//---------------------------------------------------------------------------

void __fastcall TForm5::FormClose(TObject *Sender, TCloseAction &Action)
{
 Form1->Close();        
}
//---------------------------------------------------------------------------

void __fastcall TForm5::sBitBtn2Click(TObject *Sender)
{
     Form5->Visible=false;
                Form3->Show();
}
//---------------------------------------------------------------------------

