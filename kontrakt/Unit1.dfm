object Form1: TForm1
  Left = 172
  Top = 113
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Form1'
  ClientHeight = 545
  ClientWidth = 1049
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object sPanel1: TsPanel
    Left = 0
    Top = 78
    Width = 1049
    Height = 467
    Align = alBottom
    TabOrder = 0
    SkinData.SkinSection = 'PANEL'
    object DBGrid1: TDBGrid
      Left = 1
      Top = 1
      Width = 760
      Height = 465
      Cursor = crHandPoint
      Align = alLeft
      DataSource = DataSource1
      Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgAlwaysShowSelection, dgConfirmDelete, dgCancelOnExit]
      ReadOnly = True
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      Columns = <
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'ism'
          Width = 130
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'familya'
          Width = 130
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'umumiy summa'
          Width = 130
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'tolangan summa'
          Width = 130
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'qoldiq summa'
          Width = 130
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'sana'
          Width = 88
          Visible = True
        end>
    end
  end
  object sPanel2: TsPanel
    Left = 0
    Top = 16
    Width = 1049
    Height = 49
    TabOrder = 1
    SkinData.SkinSection = 'PANEL'
    object sEdit1: TsEdit
      Left = 16
      Top = 16
      Width = 121
      Height = 20
      Cursor = crIBeam
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
      Left = 152
      Top = 16
      Width = 121
      Height = 20
      Cursor = crIBeam
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
    object sEdit3: TsEdit
      Left = 280
      Top = 16
      Width = 121
      Height = 20
      Cursor = crIBeam
      Color = clWhite
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
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
    object sEdit4: TsEdit
      Left = 408
      Top = 16
      Width = 121
      Height = 20
      Cursor = crIBeam
      Color = clWhite
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 3
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
    object DateTimePicker1: TDateTimePicker
      Left = 664
      Top = 16
      Width = 97
      Height = 20
      Cursor = crHandPoint
      CalAlignment = dtaLeft
      Date = 44726.9596428241
      Time = 44726.9596428241
      DateFormat = dfShort
      DateMode = dmComboBox
      Kind = dtkDate
      ParseInput = False
      TabOrder = 4
    end
    object sButton1: TsButton
      Left = 784
      Top = 11
      Width = 75
      Height = 25
      Caption = 'Saqlash'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 5
      OnClick = sButton1Click
      SkinData.SkinSection = 'BUTTON'
    end
    object sButton2: TsButton
      Left = 876
      Top = 11
      Width = 75
      Height = 25
      Caption = 'Tozalash'
      Font.Charset = OEM_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 6
      OnClick = sButton2Click
      SkinData.SkinSection = 'BUTTON'
    end
    object sButton3: TsButton
      Left = 965
      Top = 11
      Width = 75
      Height = 25
      Caption = 'O'#39'chirish'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 7
      OnClick = sButton3Click
      SkinData.SkinSection = 'BUTTON'
    end
  end
  object MainMenu1: TMainMenu
    Left = 16
    Top = 496
    object Asosiy1: TMenuItem
      Caption = 'Asosiy'
      object TizimdanChiqish1: TMenuItem
        Caption = 'Tizimdan Chiqish'
        OnClick = TizimdanChiqish1Click
      end
    end
    object About1: TMenuItem
      Caption = 'About'
      OnClick = About1Click
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
    Left = 88
    Top = 496
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 128
    Top = 496
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *from tablitsa')
    Left = 160
    Top = 504
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\Otabek\Des' +
      'ktop\kontrakt\database.mdb;Persist Security Info=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 200
    Top = 504
  end
end
