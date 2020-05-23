object Fm_login: TFm_login
  Left = 482
  Top = 152
  Width = 633
  Height = 540
  Caption = #25805#20316#21592#36523#20221#35748#35777
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = #23435#20307
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 232
    Top = 48
    Width = 177
    Height = 25
    AutoSize = False
    BiDiMode = bdLeftToRight
    Caption = #21592#24037#20449#24687#31649#29702#31995#32479
    Color = clBtnFace
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = #23435#20307
    Font.Style = []
    ParentBiDiMode = False
    ParentColor = False
    ParentFont = False
    ParentShowHint = False
    ShowHint = False
  end
  object Label2: TLabel
    Left = 264
    Top = 80
    Width = 91
    Height = 13
    Caption = 'Employee V1.0'
  end
  object Label3: TLabel
    Left = 96
    Top = 160
    Width = 48
    Height = 16
    Caption = #25805#20316#21592
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = #23435#20307
    Font.Style = []
    ParentFont = False
    Layout = tlCenter
  end
  object Label4: TLabel
    Left = 96
    Top = 200
    Width = 48
    Height = 16
    Caption = #21475'  '#20196
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = #23435#20307
    Font.Style = []
    ParentFont = False
    Layout = tlCenter
  end
  object Label5: TLabel
    Left = 40
    Top = 104
    Width = 130
    Height = 13
    Caption = #35745#31639#26426#31185#23398#19982#25216#26415#23398#38498
  end
  object Label6: TLabel
    Left = 24
    Top = 120
    Width = 161
    Height = 13
    Caption = 'Copyright 2005 Reserved'
  end
  object Label7: TLabel
    Left = 184
    Top = 344
    Width = 207
    Height = 13
    Caption = #39318#27425#36827#20837#65306#25805#20316#21592' 0000 '#21475#20196' 1234'
  end
  object Bevel1: TBevel
    Left = 16
    Top = 145
    Width = 673
    Height = 8
    Shape = bsTopLine
  end
  object bt_login: TBitBtn
    Left = 128
    Top = 256
    Width = 137
    Height = 49
    Caption = #30331#24405'&L'
    TabOrder = 2
    OnClick = bt_loginClick
    Glyph.Data = {
      76010000424D7601000000000000760000002800000020000000100000000100
      04000000000000010000120B0000120B00001000000000000000000000000000
      800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
      333333333333333333333333333333333333333FF33333333FF3330033333333
      00333377FF33333377FF300003333330000337777FFFFFF7777F000000000000
      000077777777777777770F88FFFF8FFF88F07F333F33333333370FFF9FFF8FFF
      FF707F337FF333FFFFF70FF999FF800000037F377733377777730FFF9FFF0888
      80337F3373337F3337330FFFFFFF088803337FFFFFFF7FFF7333700000000000
      3333777777777777F33333333339399939333333333337773333333333333393
      3333333333333373333333333333933393333333333333333333333333333393
      3333333333333333333333333333333333333333333333333333}
    NumGlyphs = 2
  end
  object bt_exit: TBitBtn
    Left = 328
    Top = 256
    Width = 137
    Height = 49
    Caption = #36864#20986'&X'
    TabOrder = 3
    OnClick = bt_exitClick
    Glyph.Data = {
      76010000424D7601000000000000760000002800000020000000100000000100
      04000000000000010000130B0000130B00001000000000000000000000000000
      800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
      3333333FFF33F333FF3F330E0330FFFCCFCC33777FF7F3377F7730EEE030FFFC
      CFCC377777F7F33773770EEE0000FFFFFCCF777777773F33377FEEE0BFBF0FFF
      FCCF7777333373F337730E0BFBFBF0FFCCFF77733333373F77F330BFBFBFBF0F
      CCFF37F333333F7F773330FBFBFB0B0FFFFF37F3F33F737FFFFF30B0BF0FB000
      000037F73F73F777777730FB0BF0FB0FFFFF373F73F73F7F333F330030BF0F0F
      FF993F77373F737F3377CC33330BF00FFF9977FFF373F77F3F77CC993330009F
      99FF7777F337777F77F333993330F99F99FF3F77FF37F773773F993CC330FFF9
      9F9977F77F37F3377F77993CC330FFF99F997737733733377377}
    NumGlyphs = 2
  end
  object Edit1: TEdit
    Left = 160
    Top = 160
    Width = 265
    Height = 21
    TabOrder = 0
    OnKeyPress = Edit1KeyPress
  end
  object Edit2: TEdit
    Left = 160
    Top = 200
    Width = 265
    Height = 21
    PasswordChar = '*'
    TabOrder = 1
    OnKeyPress = Edit1KeyPress
  end
  object pwdQuery: TADOQuery
    Connection = MainForm.ADOConnection1
    Parameters = <>
    Left = 488
    Top = 200
  end
end
