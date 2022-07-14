object Form1: TForm1
  Left = 330
  Top = 130
  Width = 767
  Height = 480
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object sPanel1: TsPanel
    Left = 0
    Top = 0
    Width = 751
    Height = 441
    Align = alClient
    TabOrder = 0
    SkinData.SkinSection = 'PANEL'
    object sLabel1: TsLabel
      Left = 264
      Top = 179
      Width = 29
      Height = 13
      Caption = 'Login:'
      ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
    end
    object sLabel2: TsLabel
      Left = 264
      Top = 244
      Width = 27
      Height = 13
      Caption = 'Parol:'
      ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
    end
    object sLabel3: TsLabel
      Left = 24
      Top = 384
      Width = 9
      Height = 19
      ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -16
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
    end
    object sEdit1: TsEdit
      Left = 320
      Top = 176
      Width = 121
      Height = 21
      Color = clWhite
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      SkinData.SkinSection = 'EDIT'
      BoundLabel.Indent = 0
      BoundLabel.Font.Charset = DEFAULT_CHARSET
      BoundLabel.Font.Color = clWindowText
      BoundLabel.Font.Height = -11
      BoundLabel.Font.Name = 'MS Sans Serif'
      BoundLabel.Font.Style = []
      BoundLabel.Layout = sclLeft
      BoundLabel.MaxWidth = 0
      BoundLabel.UseSkinColor = True
    end
    object sEdit2: TsEdit
      Left = 320
      Top = 240
      Width = 121
      Height = 21
      Color = clWhite
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      SkinData.SkinSection = 'EDIT'
      BoundLabel.Indent = 0
      BoundLabel.Font.Charset = DEFAULT_CHARSET
      BoundLabel.Font.Color = clWindowText
      BoundLabel.Font.Height = -11
      BoundLabel.Font.Name = 'MS Sans Serif'
      BoundLabel.Font.Style = []
      BoundLabel.Layout = sclLeft
      BoundLabel.MaxWidth = 0
      BoundLabel.UseSkinColor = True
    end
    object sCheckBox1: TsCheckBox
      Left = 360
      Top = 280
      Width = 83
      Height = 19
      Caption = 'I'#39'm not robot'
      Alignment = taLeftJustify
      TabOrder = 2
      SkinData.SkinSection = 'CHECKBOX'
      ImgChecked = 0
      ImgUnchecked = 0
    end
    object sButton1: TsButton
      Left = 328
      Top = 328
      Width = 97
      Height = 33
      Caption = 'Kirish'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 3
      OnClick = sButton1Click
      SkinData.SkinSection = 'BUTTON'
    end
  end
  object sSkinManager1: TsSkinManager
    InternalSkins = <>
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
    Left = 112
    Top = 136
  end
end
