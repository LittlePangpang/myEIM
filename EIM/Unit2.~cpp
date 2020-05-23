//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFm_login *Fm_login;

//---------------------------------------------------------------------------
__fastcall TFm_login::TFm_login(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFm_login::bt_loginClick(TObject *Sender)
{
static int count; 
 AnsiString S; 
 
S="select * from operator where zhangh='"+Edit1->Text+"' and mim='"+Edit2->Text+"'";
 pwdQuery->Close(); 
 pwdQuery->SQL->Clear(); 
 pwdQuery->SQL->Add(S); 
 pwdQuery->Open(); 
 if(pwdQuery->Eof) 
 { 
 count++; 
 if(count>=3) 
 { 
 pwdQuery->Close(); 
 Fm_login->Close(); 
 MainForm->Close(); 
 } 
 Application->MessageBox("用户名或密码错误，请重新输入！", "错误", MB_ICONERROR+MB_OK);
 Edit2->Text=""; 
 Edit2->SetFocus(); 
 } 
 else 
 { 
 MainForm->loginok=true; 
 MainForm->StatusBar1->Panels->Items[1]->Text=" 操 作 员 ："+pwdQuery->FieldByName("xingm")->AsString;
 Edit1->Text=""; 
 Edit2->Text=""; 
 pwdQuery->Close();
 Fm_login->Close();
 }
}
//---------------------------------------------------------------------------

void __fastcall TFm_login::bt_exitClick(TObject *Sender)
{
Close(); 
 MainForm->Close();        
}
//---------------------------------------------------------------------------








void __fastcall TFm_login::Edit1KeyPress(TObject *Sender, char &Key)
{
 if(Key==char(13)) 
SelectNext((TWinControl*)(Sender),true,true);
}
//---------------------------------------------------------------------------

