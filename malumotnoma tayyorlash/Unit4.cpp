//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sBitBtn"
#pragma link "sEdit"
#pragma link "sScrollBar"
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm4::FormClose(TObject *Sender, TCloseAction &Action)
{
   RichEdit1->Lines->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm4::sBitBtn1Click(TObject *Sender)
{
       RichEdit1->Font->Size=RichEdit1->Font->Size+2;
        sEdit1->Text=RichEdit1->Font->Size;
}
//---------------------------------------------------------------------------
void __fastcall TForm4::sBitBtn2Click(TObject *Sender)
{
                RichEdit1->Font->Size=RichEdit1->Font->Size-2;
                sEdit1->Text=RichEdit1->Font->Size;
}
//---------------------------------------------------------------------------
void __fastcall TForm4::sBitBtn3Click(TObject *Sender)
{
 AnsiString rtf = ".rtf";

if(SaveDialog1->Execute())
  {
    rtf = SaveDialog1->FileName;
//    RichEdit1->Lines->SaveToFile(SaveDialog1->FileName);
    RichEdit1->Lines->SaveToFile(SaveDialog1->FileName);
  }

}
//---------------------------------------------------------------------------

void __fastcall TForm4::sBitBtn4Click(TObject *Sender)
{
       if(PrintDialog1->Execute()){
            RichEdit1->Print("");
              }

}
//---------------------------------------------------------------------------


void __fastcall TForm4::FormActivate(TObject *Sender)
{
RichEdit1->Lines->Add("Qoraqalpoq davlat universiritetti rektori");
    RichEdit1->Lines->Add("A.Reymovga " + Form2->ADOQuery1->FieldByName("fakultet")->AsString + "   " +Form2->ADOQuery1->FieldByName("lavozim")->AsString+"   "+Form2->ADOQuery1->FieldByName("familya")->AsString+"dan");
    RichEdit1->Lines->Add("                                  Bildirishnoma                                     ");
    RichEdit1->Lines->Add(Form2->ADOQuery1->FieldByName("fakultet")->AsString+ "  "+ Form2->ADOQuery2->FieldByName("guruh")->AsString+" "+"guruhining talabasi"+" "+Form2->ADOQuery2->Fields->FieldByName("familya")->AsString+" "+Form2->ADOQuery2->Fields->FieldByName("ism")->AsString+" "+Form2->ADOQuery2->Fields->FieldByName("sharif")->AsString+"ning"+"  "+"Ozbekiston Respublikasining Vazirlar Mahkamasining 2017 yil 20 iyundan");
    RichEdit1->Lines->Add("Oliy ta'lim muassasalariga o'qishga qabul qilish, talabalar o'qishini kochirish, qayta tiklash va o'qishdan chetlatirish tartibi tog'risida");
    RichEdit1->Lines->Add("gi Nizomning 5 bob 36-G, D ( o'quv intizomini va oliy talim muassasasining ichki tartib qoidalarini buzganligi, 1 semester davomida darslarni uzirli sabablarsiz 74 soatdan ortiq qoldirganligi), bandlariga asosan 2022- yil 30-apreldan talabalar safidan chetlatirishga ruxsat berishingizni sorayman.");
        
}
//---------------------------------------------------------------------------

