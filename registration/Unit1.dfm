object Form1: TForm1
  Left = 1063
  Top = 137
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Kirish'
  ClientHeight = 299
  ClientWidth = 251
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 272
    Width = 108
    Height = 19
    Cursor = crHandPoint
    Caption = 'Registration'
    DragCursor = crHandPoint
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Consolas'
    Font.Style = [fsBold, fsUnderline]
    ParentFont = False
    OnClick = Label1Click
  end
  object Label2: TLabel
    Left = 32
    Top = 64
    Width = 26
    Height = 13
    Caption = 'Login'
  end
  object Label3: TLabel
    Left = 32
    Top = 136
    Width = 24
    Height = 13
    Caption = 'Parol'
  end
  object Label4: TLabel
    Left = 64
    Top = 232
    Width = 32
    Height = 13
    Caption = 'Label4'
  end
  object Button1: TButton
    Left = 152
    Top = 264
    Width = 75
    Height = 25
    Caption = 'Kirish'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 32
    Top = 80
    Width = 201
    Height = 26
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 32
    Top = 152
    Width = 201
    Height = 26
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
    PasswordChar = '*'
    TabOrder = 1
  end
  object CheckBox1: TCheckBox
    Left = 128
    Top = 184
    Width = 97
    Height = 17
    Alignment = taLeftJustify
    Caption = 'parolni yashirish'
    TabOrder = 2
    OnClick = CheckBox1Click
  end
  object sSkinManager1: TsSkinManager
    InternalSkins = <>
    MenuSupport.IcoLineSkin = 'ICOLINE'
    MenuSupport.ExtraLineFont.Charset = DEFAULT_CHARSET
    MenuSupport.ExtraLineFont.Color = clWindowText
    MenuSupport.ExtraLineFont.Height = -11
    MenuSupport.ExtraLineFont.Name = 'MS Sans Serif'
    MenuSupport.ExtraLineFont.Style = []
    SkinDirectory = 'c:\Skins'
    SkinName = 'Vista'
    SkinInfo = '7.2'
    ThirdParty.ThirdEdits = ' '
    ThirdParty.ThirdButtons = 'TButton'
    ThirdParty.ThirdBitBtns = ' '
    ThirdParty.ThirdCheckBoxes = ' '
    ThirdParty.ThirdGroupBoxes = ' '
    ThirdParty.ThirdListViews = ' '
    ThirdParty.ThirdPanels = ' '
    ThirdParty.ThirdGrids = ' '
    ThirdParty.ThirdTreeViews = ' '
    ThirdParty.ThirdComboBoxes = ' '
    ThirdParty.ThirdWWEdits = ' '
    ThirdParty.ThirdVirtualTrees = ' '
    ThirdParty.ThirdGridEh = ' '
    ThirdParty.ThirdPageControl = ' '
    ThirdParty.ThirdTabControl = ' '
    ThirdParty.ThirdToolBar = ' '
    ThirdParty.ThirdStatusBar = ' '
    ThirdParty.ThirdSpeedButton = ' '
    ThirdParty.ThirdScrollControl = ' '
    ThirdParty.ThirdUpDown = ' '
    ThirdParty.ThirdScrollBar = ' '
    Left = 8
    Top = 8
  end
  object OpenDialog1: TOpenDialog
    FileName = 'result.txt'
    Filter = 'text|*.txt'
    Left = 64
    Top = 8
  end
end
