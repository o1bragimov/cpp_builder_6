//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "Unit3.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sListBox"
#pragma link "sPanel"
#pragma link "sScrollBar"
#pragma link "sBitBtn"
#pragma link "sEdit"
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
    Form1->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormActivate(TObject *Sender)
{
  sEdit1->Text = DBMemo1->Font->Size;
  DBGrid1->SetFocus();
int  k = DBGrid1->DataSource->DataSet->RecordCount;
  sEdit3->Text="Mavzuvlar soni: "+IntToStr(k);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Shrift1Click(TObject *Sender)
{
   Form1->Close();     
}
//---------------------------------------------------------------------------






void __fastcall TForm2::UpDown1Click(TObject *Sender, TUDBtnType Button)
{
  DBMemo1->Font->Size= StrToInt(sEdit1->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::sBitBtn1Click(TObject *Sender)
{
   AnsiString sPoisk;  int p,len;
   sPoisk=Trim(sEdit2->Text); len=sPoisk.Length();
   p=AnsiPos(sPoisk,DBMemo1->Text);
   if (p>0)
        {
         DBMemo1->HideSelection=false;
         DBMemo1->SelStart=p-1;
         DBMemo1->SelLength=len;
         MessageDlgPos( "Qator <"+sPoisk+">  topildi \n va kok rang bilan belgilangan",mtInformation, TMsgDlgButtons()<<mbOK,0,95,175);
        }
    else
        {
        MessageDlgPos("Qator <"+sPoisk+">  topilmadi",mtInformation, TMsgDlgButtons()<<mbOK,0,95,175);
        DBMemo1->HideSelection=true;
        }

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Mavzuochirish1Click(TObject *Sender)
{
     int k = DBGrid1->DataSource->DataSet->RecordCount;
        sEdit3->Text="Mavzuvlar soni: "+IntToStr(k);
        if (k>0){
        String del=DBGrid1->DataSource->DataSet->FieldByName("id")->AsString;

        if (Application->MessageBoxA("Mavzuvni o'chirish.","Tasdiqlang!",MB_YESNO|MB_ICONINFORMATION)==ID_YES)
        {
                ADOQuery1->Close();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add("DELETE FROM mavzuvlar WHERE id="+del);
                ADOQuery1->ExecSQL();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add( "select * from mavzuvlar" );
                ADOQuery1->Open();
               ADOTable1->Active=false;
               ADOTable2->Active=false;
               ADOTable2->Active=true;
               ADOTable1->Active=true;
               ADOQuery1->Active=true;
          }

          }
          else{ShowMessage("O'chirolmaysiz!!!");}
         k = DBGrid1->DataSource->DataSet->RecordCount;
        sEdit3->Text="Mavzuvlar soni: "+IntToStr(k);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Mavzuqoshish1Click(TObject *Sender)
{
  Form3->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TForm2::About1Click(TObject *Sender)
{
   Form4->ShowModal();     
}
//---------------------------------------------------------------------------

