//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "sSkinManager.hpp"
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Graphics.hpp>
#include "frxpngimage.hpp"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TImage *Image2;
        TTimer *Timer1;
        TImage *Image3;
        TTimer *Timer2;
        TShape *Shape4;
        TShape *Shape1;
        TShape *Shape3;
        TShape *Shape2;
        TShape *Shape5;
        TShape *Shape6;
        TTimer *Timer3;
        TTimer *Timer4;
        TTimer *Timer5;
        TTimer *Timer6;
        TTimer *Timer7;
        TTimer *Timer8;
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall Timer2Timer(TObject *Sender);
        void __fastcall Timer3Timer(TObject *Sender);
        void __fastcall Timer4Timer(TObject *Sender);
        void __fastcall Timer5Timer(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
