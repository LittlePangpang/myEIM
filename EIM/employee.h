//---------------------------------------------------------------------------

#ifndef employeeH
#define employeeH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <Buttons.hpp>
#include <DB.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TFm_employee : public TForm
{
__published:	// IDE-managed Components
        TBitBtn *bt_new;
        TBitBtn *bt_modify;
        TBitBtn *bt_delete;
        TBitBtn *bt_save;
        TBitBtn *bt_cancel;
        TBitBtn *bt_search;
        TBitBtn *bt_exit;
        TBitBtn *b_Search;
        TBitBtn *b_Cancel;
        TDBGrid *DBGrid1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label11;
        TDBEdit *DBEdit1;
        TDBEdit *DBEdit2;
        TDBEdit *DBEdit4;
        TDBEdit *DBEdit9;
        TDBEdit *DBEdit10;
        TDBEdit *DBEdit11;
        TDBComboBox *DBEdit3;
        TDBComboBox *DBEdit5;
        TDBComboBox *DBEdit6;
        TDBComboBox *DBEdit7;
        TDBComboBox *DBEdit8;
        TADOQuery *employeeQuery;
        TADOQuery *Query;
        TDataSource *employeeDS;
        TDBNavigator *DBNavigator1;
        TEdit *Edit100;
        void __fastcall FormShow(TObject *Sender);
        void __fastcall bt_newClick(TObject *Sender);
        void __fastcall bt_modifyClick(TObject *Sender);
        void __fastcall bt_deleteClick(TObject *Sender);
        void __fastcall bt_cancelClick(TObject *Sender);
        void __fastcall bt_searchClick(TObject *Sender);
        void __fastcall b_SearchClick(TObject *Sender);
        void __fastcall b_CancelClick(TObject *Sender);
        void __fastcall bt_exitClick(TObject *Sender);
        void __fastcall FormKeyPress(TObject *Sender, char &Key);
        void __fastcall bt_saveClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        void __fastcall DBEditTrue(); //使输入框可用
        void __fastcall DBEditFalse(); //使输入框不可用
        void __fastcall autoinc(); //编号自动+1
        AnsiString Temp,VBh;
        __fastcall TFm_employee(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFm_employee *Fm_employee;
//---------------------------------------------------------------------------
#endif
