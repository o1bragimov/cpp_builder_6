//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "sLabel.hpp"
#include "sPanel.hpp"
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
        TsPanel *sPanel1;
        TImage *Image1;
        TsLabel *sLabel1;
        TsLabelFX *sLabelFX1;
        TsLabel *sLabel2;
        TsLabel *sLabel3;
        TsLabel *sLabel4;
        TsLabel *sLabel5;
        TsLabel *sLabel6;
private:	// User declarations
public:		// User declarations
        __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
