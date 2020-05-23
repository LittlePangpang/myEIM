//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
        : TForm(Owner)
{ 
}

//---------------------------------------------------------------------------
void __fastcall TMainForm::N5Click(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::FormShow(TObject *Sender)
{
loginok=false; 
Fm_login->ShowModal(); //调用登录窗体 
if(!loginok)
Close();
}
//---------------------------------------------------------------------------




void __fastcall TMainForm::N6Click(TObject *Sender)
{
Fm_employee->Show();
}
//---------------------------------------------------------------------------



void __fastcall TMainForm::N7Click(TObject *Sender)
{
Fm_employeeseek->Show();
}
//---------------------------------------------------------------------------


void __fastcall TMainForm::DBGridToExcel(TDBGrid *dbg, String strXlsFile, AnsiString Title)
{ 
 if(!dbg->DataSource->DataSet->Active) // 数据集没有打开就返回
  return; 
 Variant vExcelApp, vSheet, vRange, vInter;
 AnsiString strRange; 
 AnsiString 
ff[52]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","AA","AB","AC","AD","AE","AF","AG","AH","AI","AJ","AK","AL","AM","AN","AO","AP","AQ","AR","AS","AT","AU","AV","AW","AX","AY","AZ"};
 try 
 { 
 vExcelApp = Variant::CreateObject("Excel.Application");
 } 
 catch(...) 
 { 
 Application->MessageBox("启动 Excel 出 错 , 可 能 是 没 有 安 装Excel", "信息", MB_ICONERROR);
 return; 
 } 
 // 隐藏 Excel 界面 
 vExcelApp.OlePropertySet("Visible", false); 
 // 新建一个工作表 
 vExcelApp.OlePropertyGet("Workbooks").OleFunction("Add", 1); 
 // 操作这个工作表 
 vSheet =vExcelApp.OlePropertyGet("ActiveWorkbook").OlePropertyGet("Sheets",1);
 // 设置 Excel 文档的字体 
 vSheet.OleProcedure("Select"); 
 vSheet.OlePropertyGet("Cells").OleProcedure("Select"); 
 
vExcelApp.OlePropertyGet("Selection").OlePropertyGet("Font").OlePropertySet("Size", dbg->Font->Size);
 
vExcelApp.OlePropertyGet("Selection").OlePropertyGet("Font").OlePropertySet("Name", dbg->Font->Name.c_str());
 
vExcelApp.OlePropertyGet("Selection").OlePropertyGet("Font").OlePropertySet("FontStyle", "常规");
 vSheet.OlePropertyGet("Cells", 1, 1).OleProcedure("Select"); 
 int nRowCount,nColCount;
  nRowCount = dbg->DataSource->DataSet->RecordCount; 
 nColCount = dbg->Columns->Count; 
 strRange = "A1:"+ff[nColCount-1]+"1"; 

vSheet.OlePropertyGet("Range",strRange.c_str()).OleProcedure("Merge");
 
vSheet.OlePropertyGet("Cells",1,1).OlePropertySet("HorizontalAlignment",3);
 
vSheet.OlePropertyGet("Rows",1).OlePropertyGet("Font").OlePropertySet("Size",16);
 
vSheet.OlePropertyGet("Rows",1).OlePropertyGet("Font").OlePropertySet("Name","宋体");
 
vSheet.OlePropertyGet("Rows",1).OlePropertyGet("Font").OlePropertySet("Bold",true);
 vExcelApp.OlePropertyGet("Rows", 1).OlePropertySet("RowHeight",50);
 vSheet.OlePropertyGet("Cells", 1,1).OlePropertySet("Value",Title.c_str());
 //设置表格线 
 strRange = "A2:"+ff[nColCount-1]+"2"; 
 vRange=vSheet.OlePropertyGet("Range",strRange.c_str()); 
 vRange.OlePropertyGet("Borders",1).OlePropertySet("Linestyle",1); 
 vRange.OlePropertyGet("Borders",2).OlePropertySet("Linestyle",1); 
 vRange.OlePropertyGet("Borders",3).OlePropertySet("Linestyle",1); 
 vRange.OlePropertyGet("Borders",4).OlePropertySet("Linestyle",1); 
 //写入标题 
 for(int i=1; i<=nColCount; i++) 
 { 
 int nColWidth = dbg->Columns->Items[i-1]->Width; 
 vExcelApp.OlePropertyGet("Columns",i).OlePropertySet("ColumnWidth", nColWidth / 8);
 vExcelApp.OlePropertyGet("Rows", 2).OlePropertySet("RowHeight",16);
 vSheet.OlePropertyGet("Cells", 2,i).OlePropertySet("HorizontalAlignment",3);
  // 设置列名单元格的背景色 
 vInter = vSheet.OlePropertyGet("Cells", 2,i).OlePropertyGet("Interior");
 vInter.OlePropertySet("ColorIndex", 15); // 灰色 
 vInter.OlePropertySet("Pattern", 1); // xlSolid 
 vInter.OlePropertySet("PatternColorIndex", -4105); //xlAutomatic
 vSheet.OlePropertyGet("Cells", 2,i).OlePropertySet("Value",dbg->Columns->Items[i-1]->Title->Caption.c_str());
 } 
 //将 DBGrid 中的数据写入 Excel 表格 
 dbg->DataSource->DataSet->First(); 
 for(int i=1; i<=nRowCount; i++) 
 { 
 vExcelApp.OlePropertyGet("Rows", i+2).OlePropertySet("RowHeight", 16);
 //设置表格线 
 strRange="A"+IntToStr(i+2)+":"+ff[nColCount-1]+IntToStr(i+2); 
 vRange=vSheet.OlePropertyGet("Range",strRange.c_str()); 
 
vRange.OlePropertyGet("Borders",1).OlePropertySet("Linestyle",1); 
 
vRange.OlePropertyGet("Borders",2).OlePropertySet("Linestyle",1); 
 
vRange.OlePropertyGet("Borders",3).OlePropertySet("Linestyle",1); 
 
vRange.OlePropertyGet("Borders",4).OlePropertySet("Linestyle",1); 
 for(int j=0;j<nColCount;j++) 
 { 
 strRange=ff[j]+IntToStr(i+2)+":"+ff[j]+IntToStr(i+2); 
 vRange=vSheet.OlePropertyGet("Range",strRange.c_str());
 if(dbg->Columns->Items[j]->Alignment==taLeftJustify) 
 { 
 vRange.OlePropertySet("NumberFormatLocal","@"); 
 vSheet.OlePropertyGet("Cells", i + 2,j+1).OlePropertySet("HorizontalAlignment",2); //居左
 } 
 else if(dbg->Columns->Items[j]->Alignment==taCenter) 
 {
  vRange.OlePropertySet("NumberFormatLocal","@"); 
 vSheet.OlePropertyGet("Cells", i + 2,j+1).OlePropertySet("HorizontalAlignment",3); //居中
 } 
 else 
 { 
 
if(dbg->DataSource->DataSet->Fields->Fields[j]->DisplayLabel=="0.00") 
 vRange.OlePropertySet("NumberFormatLocal","0.00"); 
 else 
 vRange.OlePropertySet("NumberFormatLocal","G/通用格式"); 
 vSheet.OlePropertyGet("Cells", i + 2,j+1).OlePropertySet("HorizontalAlignment",4); //居右
 } 
 vSheet.OlePropertyGet("Cells", i + 2,j+1).OlePropertySet("Value",dbg->DataSource->DataSet->FieldByName(dbg->Columns->Items[j]->FieldName)->AsString.c_str());
 } 
 dbg->DataSource->DataSet->Next(); 
 } 
 // 保存 Excel 文档并退出 
 vExcelApp.OlePropertyGet("ActiveWorkbook").OleFunction("SaveAs",strXlsFile.c_str());
 vExcelApp.OleFunction("Quit"); 
 vSheet = Unassigned; 
 vExcelApp = Unassigned; 
 vRange = Unassigned; 
 vInter = Unassigned; 
 // 工作结束 
 Application->MessageBox(" 数 据 导 出 结 束 ！ ", " 信 息 ",MB_ICONINFORMATION);
}

