object Form1: TForm1
  Left = 698
  Top = 235
  AutoScroll = False
  BorderIcons = [biSystemMenu, biMinimize]
  ClientHeight = 452
  ClientWidth = 327
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
  object sPanel1: TsPanel
    Left = 0
    Top = 0
    Width = 327
    Height = 452
    Align = alClient
    TabOrder = 0
    SkinData.SkinSection = 'PANEL'
    object sLabel1: TsLabel
      Left = 136
      Top = 120
      Width = 37
      Height = 13
      Caption = 'sLabel1'
      ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
    end
    object sComboBox1: TsComboBox
      Left = 64
      Top = 160
      Width = 201
      Height = 36
      Alignment = taLeftJustify
      BoundLabel.Indent = 0
      BoundLabel.Font.Charset = DEFAULT_CHARSET
      BoundLabel.Font.Color = clWindowText
      BoundLabel.Font.Height = -11
      BoundLabel.Font.Name = 'MS Sans Serif'
      BoundLabel.Font.Style = []
      BoundLabel.Layout = sclLeft
      BoundLabel.MaxWidth = 0
      BoundLabel.UseSkinColor = True
      SkinData.SkinSection = 'COMBOBOX'
      Color = clWhite
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -16
      Font.Name = 'Segoe Print'
      Font.Style = [fsBold]
      ItemHeight = 30
      ItemIndex = -1
      ParentFont = False
      TabOrder = 0
      Text = 'Tanlang...'
      Items.Strings = (
        'Matematika'
        'Fizika'
        'Rustili'
        'Ingliz tili'
        'OYD'
        'Sanoq sistemasi'
        'Informatika')
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
    Left = 8
    Top = 8
  end
end
