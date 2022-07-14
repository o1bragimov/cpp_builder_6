//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "frxpngimage.hpp"
#include "sSkinManager.hpp"
#include <ExtCtrls.hpp>
#include "sBitBtn.hpp"
#include "sEdit.hpp"
#include <Buttons.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include "sCheckBox.hpp"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TsSkinManager *sSkinManager1;
        TsEdit *sEdit1;
        TsEdit *sEdit2;
        TsBitBtn *sBitBtn1;
        TTimer *Timer1;
        TADOQuery *ADOQuery1;
        TADOConnection *ADOConnection1;
        TDataSource *DataSource1;
        TsCheckBox *sCheckBox1;
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall sBitBtn1Click(TObject *Sender);
        void __fastcall sEdit1KeyPress(TObject *Sender, char &Key);
        void __fastcall sEdit2KeyPress(TObject *Sender, char &Key);
        void __fastcall sCheckBox1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
