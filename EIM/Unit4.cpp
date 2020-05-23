//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFm_employeeseek *Fm_employeeseek;
//---------------------------------------------------------------------------
__fastcall TFm_employeeseek::TFm_employeeseek(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFm_employeeseek::FormShow(TObject *Sender)
{
 OldProc = DBGrid1->WindowProc; 
 DBGrid1->WindowProc = NewProc;
 AnsiString S;
 DTP1->Date=Date(); 
 DTP2->Date=Date(); 
 DTP3->Date=Date();
 DTP4->Date=Date(); 
 DTP1->Checked=false; 
 DTP2->Enabled=false; 
 DTP3->Checked=false; 
 DTP4->Enabled=false; 
 //下拉内容 
 S="select * from basic where xm='学历'"; 
 Query->Close(); 
 Query->SQL->Clear(); 
 Query->SQL->Add(S); 
 Query->Open(); 
 Edit4->Items->Clear(); 
 if(!Query->IsEmpty()) 
 { 
 while(!Query->Eof) 
 { 
 Edit4->Items->Add(Query->FieldByName("sjnr")->AsString); 
 Query->Next(); 
 } 
 } 
 S="select * from basic where xm='部门'"; 
 Query->Close(); 
 Query->SQL->Clear(); 
 Query->SQL->Add(S); 
 Query->Open(); 
 Edit5->Items->Clear(); 
 if(!Query->IsEmpty()) 
 { 
 while(!Query->Eof) 
 { 
 Edit5->Items->Add(Query->FieldByName("sjnr")->AsString); 
 Query->Next(); 
 }
 } 
 S="select * from basic where xm='职务'"; 
 Query->Close(); 
 Query->SQL->Clear(); 
 Query->SQL->Add(S); 
 Query->Open(); 
 Edit6->Items->Clear(); 
 if(!Query->IsEmpty()) 
 { 
 while(!Query->Eof) 
 { 
 Edit6->Items->Add(Query->FieldByName("sjnr")->AsString); 
 Query->Next(); 
 } 
 }
}
//---------------------------------------------------------------------------
void __fastcall TFm_employeeseek::bt_resetClick(TObject *Sender)
{
Edit1->Text=""; 
 Edit2->Text=""; 
 Edit3->Text=""; 
 Edit4->Text=""; 
 Edit5->Text=""; 
 Edit6->Text=""; 
 Edit7->Text=""; 
 Edit8->Text=""; 
 DTP1->Date=Date(); 
 DTP2->Date=Date(); 
 DTP3->Date=Date(); 
 DTP4->Date=Date(); 
 DTP1->Checked=false; 
 DTP2->Enabled=false; 
 DTP3->Checked=false; 
 DTP4->Enabled=false; 
 seekQuery->Close(); 
 bt_print->Enabled=false; 
 Edit1->SetFocus();        
}
//---------------------------------------------------------------------------
void __fastcall TFm_employeeseek::bt_seekClick(TObject *Sender)
{
AnsiString S=""; 
 if(Edit1->Text!="") 
 S=" bh like '%"+Edit1->Text+"%'"; 
 if(Edit2->Text!="") 
 if(S!="") 
 S= S+" and xm like '%"+Edit2->Text+"%'"; 
 else 
 S=" xm like '%"+Edit2->Text+"%'"; 
 if(Edit3->Text!="") 
 if(S!="") 
 S= S+" and xb like '%"+Edit3->Text+"%'"; 
 else 
 S=" xb like '%"+Edit3->Text+"%'"; 
 if(Edit4->Text!="") 
 if(S!="") 
 S= S+" and xl like '%"+Edit4->Text+"%'"; 
 else 
 S=" xl like '%"+ Edit4->Text+"%'"; 
 if(Edit5->Text!="") 
 if(S!="") 
 S= S+" and lsbm like '%"+Edit5->Text+"%'"; 
 else 
 S=" lsbm like '%"+Edit5->Text+"%'"; 
 if(Edit6->Text!="") 
 if(S!="") 
 S= S+" and zw like '%"+Edit6->Text+"%'"; 
 else 
 S=" zw like '%"+Edit6->Text+"%'"; 
 if(Edit7->Text!="") 
 if(S!="") 
 S= S+" and lxdh like '%"+Edit7->Text+"%'"; 
 else 
 S=" lxdh like '%"+Edit7->Text+"%'"; 
 if(Edit8->Text!="") 
 if(S!="")
  S= S+" and dz like '%"+Edit8->Text+"%'"; 
 else 
 S=" dz like '%"+Edit8->Text+"%'"; 
 if(DTP1->Checked)
 {
 if(S!="")
 S=S+" and csrq Between '"+DateToStr(DTP1->Date)+"' and'"+DateToStr(DTP2->Date)+"'";
 else
 S=" csrq Between '"+DateToStr(DTP1->Date)+"' and'"+DateToStr(DTP2->Date)+"'";
 }
 if(DTP3->Checked)
 {
 if(S!="")
 S=S+" and rzrq Between '"+DateToStr(DTP3->Date)+"' and'"+DateToStr(DTP4->Date)+"'";
 else
 S=" rzrq Between '"+DateToStr(DTP3->Date)+"' and'"+DateToStr(DTP4->Date)+"'";
 }
 if(S!="")
 S="select * from employee where"+S+" order by bh";
 else
 S="select * from employee order by bh";
 seekQuery->Close();
 seekQuery->SQL->Clear();
 seekQuery->SQL->Add(S);
 seekQuery->Open();
if(seekQuery->IsEmpty())
{
 bt_print->Enabled=false;
bt_export->Enabled=false;
}
else
{
 bt_print->Enabled=true;
bt_export->Enabled=true;
}
}
//---------------------------------------------------------------------------
void __fastcall TFm_employeeseek::bt_exitClick(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TFm_employeeseek::DTP1Click(TObject *Sender)
{
if(DTP1->Checked) 
 DTP2->Enabled=true; 
 else 
 DTP2->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TFm_employeeseek::DTP3Click(TObject *Sender)
{
if(DTP3->Checked) 
 DTP4->Enabled=true; 
else 
 DTP4->Enabled=false;        
}
//---------------------------------------------------------------------------
void __fastcall TFm_employeeseek::DBGrid1TitleClick(TColumn *Column)
{
 AnsiString str; //保存字段名 
 AnsiString caption; //保存 DBGrid 的标题 
 str= Column->FieldName ; 
 seekQuery->DisableControls(); 
 //遍历 seekQuery 的字段，判断其是否是鼠标点击的字段 
 for (int i = 0; i<seekQuery->FieldCount; i++) 
 { 
 caption=DBGrid1->Columns->Items[i]->Title->Caption; 
 if(seekQuery->Fields->Fields[i]->FieldName == str) 
 { 
 if(caption.SubString(1,2)=="▲") //第一种情况：前面原是"▲"，改为"▼"
 { 
 //将标题前的▲去掉
  caption=caption.SubString(3,caption.Length()-2);
 //在标题前加上▼ 
 DBGrid1->Columns->Items[i]->Title->Caption = "▼"+caption;
 seekQuery->Sort=Column->FieldName+" DESC"; //降序 
 } 
 else if(caption.SubString(1,2)=="▼") //第二种情况：前面原是"▼"，改为"▲"
 { 
 //将标题前的▼去掉 
 caption=caption.SubString(3,caption.Length()-2); 
 //在标题前加上▲ 
 DBGrid1->Columns->Items[i]->Title->Caption = "▲"+caption;
 seekQuery->Sort=Column->FieldName+" ASC"; //升序 
 } 
 else //第三种情况：首次点击某列，前面既不是"▲"也不是"▼"
 { 
 DBGrid1->Columns->Items[i]->Title->Caption = "▲"+caption;
 seekQuery->Sort=Column->FieldName+" ASC"; //升序 
 } 
 } 
 //清除未点击的标题的▲和▼ 
 else 
 { 
 if(caption.SubString(1,2)=="▲"||caption.SubString(1,2)=="▼")
 DBGrid1->Columns->Items[i]->Title->Caption =caption.SubString(3,caption.Length()-2);
 } 
 } 
 seekQuery->EnableControls();
}
//---------------------------------------------------------------------------
void __fastcall TFm_employeeseek::bt_exportClick(TObject *Sender)
{
AnsiString Title="员工信息表"; 
 seekQuery->First(); 
 SaveDialog1->Filter="*.xls|*.xls"; 
 SaveDialog1->FileName="员工信息表";
 if(SaveDialog1->Execute()) 
 { 
 if(SaveDialog1->FileName!="") 
 { 
if(SaveDialog1->FileName.SubString(SaveDialog1->FileName.Length()-3,4)!=".xls")
 SaveDialog1->FileName=SaveDialog1->FileName+".xls"; 
MainForm->DBGridToExcel(DBGrid1,SaveDialog1->FileName.c_str(),Title);
 } 
 }
}
//---------------------------------------------------------------------------
void __fastcall TFm_employeeseek::NewProc(TMessage& Message) 
{ 
 if(Message.Msg==WM_MOUSEWHEEL && seekQuery->Active) 
DBGrid1->DataSource->DataSet->MoveBy((short)Message.WParamHi<
0 ? 1 : -1); 
else 
OldProc(Message); 
}
//-----------------------------------------------------------------------------=


