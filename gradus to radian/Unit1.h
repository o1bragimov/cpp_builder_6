//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TRadioGroup *RadioGroup1;
        TPanel *Panel1;
        TPanel *Panel2;
        TEdit *Edit1;
        TButton *Button1;
        TLabel *Label1;
        TEdit *Edit2;
        TLabel *Label2;
        TButton *Button2;
        TEdit *Edit3;
        TLabel *Label3;
        TEdit *Edit4;
        void __fastcall Edit1Change(TObject *Sender);
        void __fastcall RadioGroup1Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Edit3Change(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
