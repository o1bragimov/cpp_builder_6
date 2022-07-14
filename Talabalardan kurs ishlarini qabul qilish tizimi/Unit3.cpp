//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sButton"
#pragma link "sComboBox"
#pragma link "sEdit"
#pragma link "sPanel"
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::sButton1Click(TObject *Sender)
{
  	String s;
        s=sComboBox1->Items->Strings[sComboBox1->ItemIndex];
        if(sComboBox1->ItemIndex>-1 && sEdit1->Text.Length()>0){
          switch(sComboBox1->ItemIndex){
                 case 0:
                 DBGrid1->DataSource->DataSet->Locate("Ism", sEdit1->Text, TLocateOptions() << loCaseInsensitive << loPartialKey);
                 DBGrid1->SetFocus();
                 break;

                 case 1:
                 DBGrid1->DataSource->DataSet->Locate("Familya", sEdit1->Text, TLocateOptions() << loCaseInsensitive << loPartialKey);
                 DBGrid1->SetFocus();
                 break;

                 case 2:
                 DBGrid1->DataSource->DataSet->Locate("Guruh", sEdit1->Text, TLocateOptions() << loCaseInsensitive << loPartialKey);
                 DBGrid1->SetFocus();
                 break;

                 case 3:
                 DBGrid1->DataSource->DataSet->Locate("Kurs ishi mavzuvsi", sEdit1->Text, TLocateOptions() << loCaseInsensitive << loPartialKey);
                 DBGrid1->SetFocus();
                 break;

                 case 4:
                 DBGrid1->DataSource->DataSet->Locate("Fan", sEdit1->Text, TLocateOptions() << loCaseInsensitive << loPartialKey);
                 DBGrid1->SetFocus();
                 break;

                 case 5:
                 DBGrid1->DataSource->DataSet->Locate("Topshirilgan sana", sEdit1->Text, TLocateOptions() << loCaseInsensitive << loPartialKey);
                 DBGrid1->SetFocus();
                 break;

                 case 6:
                 DBGrid1->DataSource->DataSet->Locate("Ball", sEdit1->Text, TLocateOptions() << loCaseInsensitive << loPartialKey);
                 DBGrid1->SetFocus();
                 break;

                 case 7:
                 DBGrid1->DataSource->DataSet->Locate("Baho", sEdit1->Text, TLocateOptions() << loCaseInsensitive << loPartialKey);
                 DBGrid1->SetFocus();
                 break;

         }


      }


}
//---------------------------------------------------------------------------
void __fastcall TForm3::UpDown1Click(TObject *Sender, TUDBtnType Button)
{
       UpDown1->Max = 125;
	UpDown1->Min = 8;
	UpDown1->Increment = 2;
	UpDown1->Position = DBGrid1->Font->Size;


            DBGrid1->Font->Size=UpDown1->Position;
            sEdit2->Text=DBGrid1->Font->Size;

}
//---------------------------------------------------------------------------
