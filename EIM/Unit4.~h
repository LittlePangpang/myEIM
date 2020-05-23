//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <Dialogs.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TFm_employeeseek : public TForm
{
__published:	// IDE-managed Components
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
        TLabel *Label12;
        TLabel *Label13;
        TEdit *Edit1;
        TEdit *Edit2;
        TEdit *Edit7;
        TEdit *Edit8;
        TComboBox *Edit3;
        TComboBox *Edit4;
        TComboBox *Edit5;
        TComboBox *Edit6;
        TDateTimePicker *DTP1;
        TDateTimePicker *DTP2;
        TDateTimePicker *DTP3;
        TDateTimePicker *DTP4;
        TADOQuery *seekQuery;
        TADOQuery *Query;
        TDataSource *seekDS;
        TDBGrid *DBGrid1;
        TBitBtn *bt_reset;
        TBitBtn *bt_seek;
        TBitBtn *bt_export;
        TBitBtn *bt_print;
        TBitBtn *bt_exit;
        TSaveDialog *SaveDialog1;
        void __fastcall FormShow(TObject *Sender);
        void __fastcall bt_resetClick(TObject *Sender);
        void __fastcall bt_seekClick(TObject *Sender);
        void __fastcall bt_exitClick(TObject *Sender);
        void __fastcall DTP1Click(TObject *Sender);
        void __fastcall DTP3Click(TObject *Sender);
        void __fastcall DBGrid1TitleClick(TColumn *Column);
        void __fastcall bt_exportClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
       TWndMethod OldProc; 
        void __fastcall NewProc(TMessage &Message);
        __fastcall TFm_employeeseek(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFm_employeeseek *Fm_employeeseek;
//---------------------------------------------------------------------------
#endif
