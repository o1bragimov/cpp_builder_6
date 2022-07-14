//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "acAlphaImageList.hpp"
#include "acPNG.hpp"
#include "sCheckListBox.hpp"
#include "sListBox.hpp"
#include "sPanel.hpp"
#include "sSkinManager.hpp"
#include <ExtCtrls.hpp>
#include <ImgList.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TsSkinManager *sSkinManager1;
        TsPanel *sPanel1;
        TMemo *Memo1;
        TImage *Image1;
        TsAlphaImageList *sAlphaImageList1;
        TRadioGroup *RadioGroup1;
        void __fastcall RadioGroup1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
