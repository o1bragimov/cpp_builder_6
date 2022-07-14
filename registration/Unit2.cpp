//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{


        if ( (Edit1->Text!=NULL) && (Edit2->Text!=NULL) && (Edit3->Text!=NULL) &&
                (Edit4->Text!=NULL) &&  (Edit5->Text!=NULL) && (Edit6->Text!=NULL))
        {
               /* TStringList* sl= new TStringList();
                sl->Add(Edit5->Text+" "+Edit6->Text);
                sl->SaveToFile("result.txt");
                delete sl;
                 */
                TFileStream *fs = new TFileStream("result.txt", fmCreate);
                fs->Write(Edit5->Text.c_str(), Edit5->Text.Length());
                fs->Write(" ",1);
                fs->Write(Edit6->Text.c_str(), Edit6->Text.Length());
                delete fs;

                ShowMessage("Saqlandi!");
                Form2->Close();
        }

}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
  Form2->Close();
}
//---------------------------------------------------------------------------
