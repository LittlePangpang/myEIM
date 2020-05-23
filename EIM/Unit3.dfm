object Fm_employee: TFm_employee
  Left = 251
  Top = 155
  Width = 974
  Height = 584
  Caption = #21592#24037#36164#26009#32500#25252
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clWindowText
  Font.Height = -15
  Font.Name = #23435#20307
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnKeyPress = FormKeyPress
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 15
  object Label1: TLabel
    Left = 64
    Top = 72
    Width = 38
    Height = 15
    Caption = #32534' '#21495
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = #23435#20307
    Font.Style = []
    ParentFont = False
    Layout = tlCenter
  end
  object Label2: TLabel
    Left = 248
    Top = 72
    Width = 30
    Height = 15
    Caption = #22995#21517
    Layout = tlCenter
  end
  object Label3: TLabel
    Left = 416
    Top = 72
    Width = 30
    Height = 15
    Caption = #24615#21035
    Layout = tlCenter
  end
  object Label4: TLabel
    Left = 560
    Top = 72
    Width = 60
    Height = 15
    Caption = #20986#29983#26085#26399
    Layout = tlCenter
  end
  object Label5: TLabel
    Left = 64
    Top = 104
    Width = 38
    Height = 15
    Caption = #23398' '#21382
    Layout = tlCenter
  end
  object Label6: TLabel
    Left = 216
    Top = 104
    Width = 60
    Height = 15
    Caption = #38582#23646#37096#38376
    Layout = tlCenter
  end
  object Label7: TLabel
    Left = 416
    Top = 104
    Width = 30
    Height = 15
    Caption = #32844#21153
    Layout = tlCenter
  end
  object Label8: TLabel
    Left = 560
    Top = 104
    Width = 60
    Height = 15
    Caption = #20837#32844#26085#26399
    Layout = tlCenter
  end
  object Label9: TLabel
    Left = 40
    Top = 136
    Width = 60
    Height = 15
    Caption = #32852#31995#30005#35805
    Layout = tlCenter
  end
  object Label10: TLabel
    Left = 248
    Top = 136
    Width = 30
    Height = 15
    Caption = #22320#22336
    Layout = tlCenter
  end
  object Label11: TLabel
    Left = 496
    Top = 136
    Width = 40
    Height = 15
    Caption = 'email'
    Layout = tlCenter
  end
  object bt_new: TBitBtn
    Left = 280
    Top = 472
    Width = 75
    Height = 25
    Caption = #28155#21152
    TabOrder = 0
    OnClick = bt_newClick
  end
  object bt_modify: TBitBtn
    Left = 352
    Top = 472
    Width = 75
    Height = 25
    Caption = #20462#25913
    TabOrder = 1
    OnClick = bt_modifyClick
  end
  object bt_delete: TBitBtn
    Left = 424
    Top = 472
    Width = 75
    Height = 25
    Caption = #21024#38500
    TabOrder = 2
    OnClick = bt_deleteClick
  end
  object bt_save: TBitBtn
    Left = 496
    Top = 472
    Width = 75
    Height = 25
    Caption = #20445#23384
    TabOrder = 3
    OnClick = bt_saveClick
  end
  object bt_cancel: TBitBtn
    Left = 568
    Top = 472
    Width = 75
    Height = 25
    Caption = #21462#28040
    TabOrder = 4
    OnClick = bt_cancelClick
  end
  object bt_search: TBitBtn
    Left = 640
    Top = 472
    Width = 75
    Height = 25
    Caption = #26816#32034
    TabOrder = 5
    OnClick = bt_searchClick
  end
  object bt_exit: TBitBtn
    Left = 712
    Top = 472
    Width = 75
    Height = 25
    Caption = #36864#20986
    TabOrder = 6
    OnClick = bt_exitClick
  end
  object b_Search: TBitBtn
    Left = 640
    Top = 496
    Width = 75
    Height = 25
    Caption = #26597#35810
    TabOrder = 7
    Visible = False
    OnClick = b_SearchClick
  end
  object b_Cancel: TBitBtn
    Left = 712
    Top = 496
    Width = 75
    Height = 25
    Caption = #21462#28040
    TabOrder = 8
    Visible = False
    OnClick = b_CancelClick
  end
  object DBGrid1: TDBGrid
    Left = 56
    Top = 168
    Width = 729
    Height = 289
    DataSource = employeeDS
    TabOrder = 9
    TitleFont.Charset = ANSI_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -15
    TitleFont.Name = #23435#20307
    TitleFont.Style = []
  end
  object DBEdit1: TDBEdit
    Left = 112
    Top = 72
    Width = 89
    Height = 23
    DataField = 'bh'
    DataSource = employeeDS
    TabOrder = 10
  end
  object DBEdit2: TDBEdit
    Left = 280
    Top = 72
    Width = 81
    Height = 23
    DataField = 'xm'
    DataSource = employeeDS
    TabOrder = 11
  end
  object DBEdit4: TDBEdit
    Left = 624
    Top = 72
    Width = 137
    Height = 23
    DataField = 'csrq'
    DataSource = employeeDS
    TabOrder = 13
  end
  object DBEdit9: TDBEdit
    Left = 112
    Top = 136
    Width = 89
    Height = 23
    DataField = 'lxdh'
    DataSource = employeeDS
    TabOrder = 18
  end
  object DBEdit10: TDBEdit
    Left = 288
    Top = 136
    Width = 177
    Height = 23
    DataField = 'dz'
    DataSource = employeeDS
    TabOrder = 19
  end
  object DBEdit11: TDBEdit
    Left = 536
    Top = 136
    Width = 121
    Height = 23
    DataField = 'email'
    DataSource = employeeDS
    TabOrder = 20
  end
  object DBEdit3: TDBComboBox
    Left = 448
    Top = 72
    Width = 73
    Height = 23
    DataField = 'xb'
    DataSource = employeeDS
    ItemHeight = 15
    Items.Strings = (
      #30007
      #22899)
    TabOrder = 12
  end
  object DBEdit5: TDBComboBox
    Left = 112
    Top = 104
    Width = 89
    Height = 23
    DataField = 'xl'
    DataSource = employeeDS
    ItemHeight = 15
    TabOrder = 14
  end
  object DBEdit6: TDBComboBox
    Left = 280
    Top = 104
    Width = 81
    Height = 23
    DataField = 'lsbm'
    DataSource = employeeDS
    ItemHeight = 15
    TabOrder = 15
  end
  object DBEdit7: TDBComboBox
    Left = 448
    Top = 104
    Width = 73
    Height = 23
    DataField = 'zw'
    DataSource = employeeDS
    ItemHeight = 15
    TabOrder = 16
  end
  object DBEdit8: TDBComboBox
    Left = 624
    Top = 104
    Width = 137
    Height = 23
    DataField = 'rzrq'
    DataSource = employeeDS
    ItemHeight = 15
    TabOrder = 17
  end
  object DBNavigator1: TDBNavigator
    Left = 56
    Top = 472
    Width = 224
    Height = 25
    DataSource = employeeDS
    VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast]
    TabOrder = 22
  end
  object Edit100: TEdit
    Left = 232
    Top = 40
    Width = 177
    Height = 23
    TabOrder = 21
    Visible = False
  end
  object employeeQuery: TADOQuery
    Connection = MainForm.ADOConnection1
    Parameters = <>
    SQL.Strings = (
      'select * from employee')
    Left = 872
    Top = 96
  end
  object Query: TADOQuery
    Connection = MainForm.ADOConnection1
    Parameters = <>
    Left = 872
    Top = 128
  end
  object employeeDS: TDataSource
    DataSet = employeeQuery
    Left = 880
    Top = 176
  end
end
