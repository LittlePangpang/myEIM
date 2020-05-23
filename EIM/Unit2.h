//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <Buttons.hpp>
#include <DB.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFm_login : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TBitBtn *bt_login;
        TBitBtn *bt_exit;
        TBevel *Bevel1;
        TEdit *Edit1;
        TEdit *Edit2;
        TADOQuery *pwdQuery;
        void __fastcall bt_loginClick(TObject *Sender);
        void __fastcall bt_exitClick(TObject *Sender);
        void __fastcall Edit1KeyPress(TObject *Sender, char &Key);
private:	// User declarations
public:		// User declarations
        __fastcall TFm_login(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFm_login *Fm_login;
//---------------------------------------------------------------------------
#endif
