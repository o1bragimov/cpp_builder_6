//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit3.h"
#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "acPNG"
#pragma link "sPanel"
#pragma link "sBitBtn"
#pragma link "sEdit"
#pragma link "sLabel"
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::sBitBtn1Click(TObject *Sender)
{

    if(sEdit1->Text.Length()>0 && sEdit1->Text.Length()>0 && sEdit1->Text.Length()>0)
      {
         ADOQuery1->Close();
         ADOQuery1->SQL->Clear();
         ADOQuery1->SQL->Add("SELECT * FROM admin WHERE nickname = \'"+sEdit3->Text+"\'");
         ADOQuery1->Open();
          if(ADOQuery1->IsEmpty())
             {
                ADOQuery1->Close();
                ADOQuery1->SQL->Clear();
                ADOQuery1->SQL->Add("INSERT INTO admin (login, parol, nickname) VALUES ('"+sEdit1->Text +"',  '"+sEdit2->Text+"', '"+sEdit3->Text+"')");
                ADOQuery1->ExecSQL();

                ShowMessage("Saqlandi.");
                sEdit1->Clear();
                sEdit2->Clear();
                
              }
           else
           {
               ShowMessage("Bu nom band qilingan.");
               sEdit1->Clear();
               sEdit2->Clear();
               sEdit1->SetFocus();
               return;
           }
        }
        else
         {
              ShowMessage("Barcha qatorlarni to'ldiring.");
         }

}
//---------------------------------------------------------------------------
