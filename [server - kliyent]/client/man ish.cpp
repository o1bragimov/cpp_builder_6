//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "man.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
TMemoryStream *MS = new TMemoryStream ; // создаем поток
void Write(AnsiString Text);  // ф-я записи инфы в поток
int Size ; // размер пореданного файла
bool Receive ; // передаем ли мы на данный момент файл
AnsiString FileName ;  // имя файла
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void Write(AnsiString Text)
{
if(MS->Size < Size)  // если мы еще принимаем файл и размер потока меньше размера файла
{
MS->Write(Text.c_str(),Text.Length()); // записываем в поток
Form1->Memo1->Lines->Add("Принимаем данные..."); //
}
if(MS->Size == Size) // если файл принят и размер потока соответствует размеру файла
{
Receive = false ; // останавливаем режим передачи
MS->Position = 0 ;   // переводим каретку потока в начало
Form1->Client->Socket->SendText("end"); // отсылаем серверу что мы приняли файл
CreateDir("Downloads"); // создаем папку для сохраненных файлов
MS->SaveToFile("Downloads\\"+FileName); // сохраняем туда наш файл
MS->Clear() ; // освобождаем поток
Size = 0 ;
Form1->Memo1->Lines->Add("Файл принят !");
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ClientConnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
Memo1->Lines->Add("Вы присоеденились к адресу: " + IPEd->Text);
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
Client->Open() ;  // коннектимся
Memo1->Lines->Add("Коннектимся... к адресу: " + IPEd->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
AnsiString Rtext ;  // текст, который посылает сервер
Rtext = Client->Socket->ReceiveText() ;
if(Receive == true) // если мы в режиме передачи файла, то
{
Write(Rtext); // записываем его в поток
}
else // если нет , то
{
Memo1->Lines->Add("Приняли текст :" + Rtext);
if(Rtext.SubString(0,Rtext.Pos("#")-1) == "file") // Если это файл, то...
{
Rtext.Delete(1,Rtext.Pos("#")) ;    // удаляем слово file
Name = Rtext.SubString(0,Rtext.Pos("#")-1); // Определяем имя файла
FileName = Name.SubString(Name.LastDelimiter("\\")+1,Name.Length()); ; // Выделяем чистое имя файла , например с c:\\test.txt , берем test.txt
Rtext.Delete(1,Rtext.Pos("#")) ;  // Удаляем последний разделитель
Size = StrToInt(Rtext.SubString(0,Rtext.Pos("#")-1)) ; // Определяем размер файла
Rtext.Delete(1, Rtext.Pos("#")); // Удаляем последний разделитель
Memo1->Lines->Add("Размер файла: "+IntToStr(Size)+" байт"); // Выводим размер файла
Memo1->Lines->Add("Имя файла: "+Name); // Выводим имя файла
Receive = true; // Переводим сервер в режим приёма файла
if(Receive == true)
{
Memo1->Lines->Add("Режим приема буфера");
}
}
}
}
//---------------------------------------------------------------------------
