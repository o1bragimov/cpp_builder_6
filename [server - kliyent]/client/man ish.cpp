//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "man.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
TMemoryStream *MS = new TMemoryStream ; // ������� �����
void Write(AnsiString Text);  // �-� ������ ���� � �����
int Size ; // ������ ����������� �����
bool Receive ; // �������� �� �� �� ������ ������ ����
AnsiString FileName ;  // ��� �����
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void Write(AnsiString Text)
{
if(MS->Size < Size)  // ���� �� ��� ��������� ���� � ������ ������ ������ ������� �����
{
MS->Write(Text.c_str(),Text.Length()); // ���������� � �����
Form1->Memo1->Lines->Add("��������� ������..."); //
}
if(MS->Size == Size) // ���� ���� ������ � ������ ������ ������������� ������� �����
{
Receive = false ; // ������������� ����� ��������
MS->Position = 0 ;   // ��������� ������� ������ � ������
Form1->Client->Socket->SendText("end"); // �������� ������� ��� �� ������� ����
CreateDir("Downloads"); // ������� ����� ��� ����������� ������
MS->SaveToFile("Downloads\\"+FileName); // ��������� ���� ��� ����
MS->Clear() ; // ����������� �����
Size = 0 ;
Form1->Memo1->Lines->Add("���� ������ !");
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ClientConnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
Memo1->Lines->Add("�� �������������� � ������: " + IPEd->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ClientError(TObject *Sender,
      TCustomWinSocket *Socket, TErrorEvent ErrorEvent, int &ErrorCode)
{
ErrorCode = 0;
ShowMessage("Client Error");        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
Client->Address = IPEd->Text;
Client->Host    = IPEd->Text;
Client->Open() ;  // �����������
Memo1->Lines->Add("�����������... � ������: " + IPEd->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
AnsiString Rtext ;  // �����, ������� �������� ������
Rtext = Client->Socket->ReceiveText() ;
if(Receive == true) // ���� �� � ������ �������� �����, ��
{
Write(Rtext); // ���������� ��� � �����
}
else // ���� ��� , ��
{
Memo1->Lines->Add("������� ����� :" + Rtext);
if(Rtext.SubString(0,Rtext.Pos("#")-1) == "file") // ���� ��� ����, ��...
{
Rtext.Delete(1,Rtext.Pos("#")) ;    // ������� ����� file
Name = Rtext.SubString(0,Rtext.Pos("#")-1); // ���������� ��� �����
FileName = Name.SubString(Name.LastDelimiter("\\")+1,Name.Length()); ; // �������� ������ ��� ����� , �������� � c:\\test.txt , ����� test.txt
Rtext.Delete(1,Rtext.Pos("#")) ;  // ������� ��������� �����������
Size = StrToInt(Rtext.SubString(0,Rtext.Pos("#")-1)) ; // ���������� ������ �����
Rtext.Delete(1, Rtext.Pos("#")); // ������� ��������� �����������
Memo1->Lines->Add("������ �����: "+IntToStr(Size)+" ����"); // ������� ������ �����
Memo1->Lines->Add("��� �����: "+Name); // ������� ��� �����
Receive = true; // ��������� ������ � ����� ����� �����
if(Receive == true)
{
Memo1->Lines->Add("����� ������ ������");
}
}
}
}
//---------------------------------------------------------------------------
