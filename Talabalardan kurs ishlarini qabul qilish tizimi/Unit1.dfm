object Form1: TForm1
  Left = 188
  Top = 91
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Form1'
  ClientHeight = 562
  ClientWidth = 1117
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PopupMenu = PopupMenu1
  Position = poDesktopCenter
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object sPanel1: TsPanel
    Left = 0
    Top = 131
    Width = 1117
    Height = 431
    Align = alBottom
    PopupMenu = PopupMenu1
    TabOrder = 0
    SkinData.SkinSection = 'PANEL'
    object DBGrid2: TDBGrid
      Left = 8
      Top = 1
      Width = 1108
      Height = 429
      Align = alRight
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
          FieldName = 'Ism'
          Title.Alignment = taCenter
          Width = 135
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Familya'
          Title.Alignment = taCenter
          Width = 135
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Guruh'
          Title.Alignment = taCenter
          Width = 135
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Kurs ishi mavzuvsi'
          Title.Alignment = taCenter
          Width = 135
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Fan'
          Title.Alignment = taCenter
          Width = 135
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Topshirgan sana'
          Title.Alignment = taCenter
          Width = 135
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Ball'
          Title.Alignment = taCenter
          Width = 135
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Baho'
          Title.Alignment = taCenter
          Width = 139
          Visible = True
        end>
    end
  end
  object sPanel2: TsPanel
    Left = 0
    Top = 40
    Width = 1113
    Height = 72
    PopupMenu = PopupMenu1
    TabOrder = 1
    SkinData.SkinSection = 'PANEL'
    object sLabel1: TsLabel
      Left = 27
      Top = 24
      Width = 28
      Height = 14
      Caption = 'Ism:'
      ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -12
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
    end
    object sLabel2: TsLabel
      Left = 166
      Top = 24
      Width = 56
      Height = 14
      Caption = 'Familya:'
      ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -12
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
    end
    object sLabel3: TsLabel
      Left = 430
      Top = 24
      Width = 133
      Height = 14
      Caption = 'Kurs ishi mavzuvsi:'
      ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -12
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
    end
    object sLabel4: TsLabel
      Left = 575
      Top = 24
      Width = 28
      Height = 14
      Caption = 'Fan:'
      ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -12
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
    end
    object sLabel5: TsLabel
      Left = 706
      Top = 24
      Width = 126
      Height = 14
      Caption = 'Topshirilgan sana:'
      ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -12
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
    end
    object sLabel6: TsLabel
      Left = 848
      Top = 22
      Width = 35
      Height = 14
      Caption = 'Ball:'
      ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -12
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
    end
    object sLabel7: TsLabel
      Left = 298
      Top = 24
      Width = 48
      Height = 18
      Caption = 'Guruh:'
      ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -15
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
    end
    object sLabel8: TsLabel
      Left = 983
      Top = 19
      Width = 40
      Height = 18
      Caption = 'Baho:'
      ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -15
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
    end
    object sEdit1: TsEdit
      Left = 23
      Top = 40
      Width = 113
      Height = 26
      Color = clWhite
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -15
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
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
      Left = 164
      Top = 40
      Width = 121
      Height = 26
      Color = clWhite
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -15
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
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
      Left = 427
      Top = 40
      Width = 134
      Height = 26
      Color = clWhite
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -15
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
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
      Left = 574
      Top = 40
      Width = 128
      Height = 26
      Color = clWhite
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -15
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
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
    object sEdit6: TsEdit
      Left = 845
      Top = 40
      Width = 123
      Height = 26
      Color = clWhite
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -15
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 4
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
      Left = 707
      Top = 44
      Width = 126
      Height = 22
      Cursor = crHandPoint
      CalAlignment = dtaLeft
      Date = 44722.5997361111
      Time = 44722.5997361111
      DateFormat = dfShort
      DateMode = dmComboBox
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -12
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
      Kind = dtkDate
      ParseInput = False
      ParentFont = False
      TabOrder = 5
    end
    object sEdit5: TsEdit
      Left = 295
      Top = 40
      Width = 124
      Height = 26
      Color = clWhite
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -15
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 6
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
    object sEdit8: TsEdit
      Left = 984
      Top = 38
      Width = 121
      Height = 26
      Color = clWhite
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -15
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 7
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
  end
  object ActionToolBar1: TActionToolBar
    Left = 0
    Top = 0
    Width = 1117
    Height = 30
    AllowHiding = True
    Caption = 'ActionToolBar1'
    HorzSeparator = True
    Orientation = boLeftToRight
    PersistentHotKeys = False
    Spacing = 0
  end
  object sEdit7: TsEdit
    Left = 1049
    Top = 6
    Width = 42
    Height = 23
    Cursor = crNo
    Color = clWhite
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clBlack
    Font.Height = -13
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
    ReadOnly = True
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
  object UpDown1: TUpDown
    Left = 1096
    Top = 4
    Width = 17
    Height = 25
    Cursor = crHandPoint
    Min = 0
    Increment = 2
    Position = 0
    TabOrder = 4
    Wrap = False
    OnClick = UpDown1Click
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
    Left = 24
    Top = 504
  end
  object MainMenu1: TMainMenu
    Left = 64
    Top = 504
    object Menu1: TMenuItem
      Caption = 'Menu'
      object TizimdanChiqish1: TMenuItem
        Caption = 'Tizimdan Chiqish'
        OnClick = TizimdanChiqish1Click
      end
    end
    object Hisobot1: TMenuItem
      Caption = 'Hisobot'
      OnClick = Hisobot1Click
    end
    object About1: TMenuItem
      Caption = 'About'
      OnClick = About1Click
    end
  end
  object PopupMenu1: TPopupMenu
    Left = 104
    Top = 504
    object Saqlash1: TMenuItem
      Caption = 'Saqlash'
      ShortCut = 16467
      OnClick = Saqlash1Click
    end
    object Tozalash1: TMenuItem
      Caption = 'Tozalash'
      ShortCut = 116
    end
    object Ochirish1: TMenuItem
      Caption = 'O'#39'chirish'
      ShortCut = 46
      OnClick = Ochirish1Click
    end
    object Qidirish1: TMenuItem
      Caption = 'Qidirish'
      ShortCut = 16454
      OnClick = Qidirish1Click
    end
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 224
    Top = 504
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;User ID=Admin;Data Source=data.' +
      'mdb;Mode=Share Deny None;Persist Security Info=False;Jet OLEDB:S' +
      'ystem database="";Jet OLEDB:Registry Path="";Jet OLEDB:Database ' +
      'Password="";Jet OLEDB:Engine Type=5;Jet OLEDB:Database Locking M' +
      'ode=1;Jet OLEDB:Global Partial Bulk Ops=2;Jet OLEDB:Global Bulk ' +
      'Transactions=1;Jet OLEDB:New Database Password="";Jet OLEDB:Crea' +
      'te System Database=False;Jet OLEDB:Encrypt Database=False;Jet OL' +
      'EDB:Don'#39't Copy Locale on Compact=False;Jet OLEDB:Compact Without' +
      ' Replica Repair=False;Jet OLEDB:SFP=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 144
    Top = 504
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *from menu')
    Left = 184
    Top = 504
  end
  object frxDBDataset1: TfrxDBDataset
    UserName = 'frxDBDataset1'
    CloseDataSource = False
    DataSource = DataSource1
    BCDToCurrency = False
    Left = 288
    Top = 504
  end
  object frxReport1: TfrxReport
    Version = '4.15.13'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick]
    PreviewOptions.Zoom = 1
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 44723.6491164699
    ReportOptions.LastChange = 44723.6985143519
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      'begin'
      ''
      'end.')
    Left = 328
    Top = 504
    Datasets = <
      item
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
      end>
    Variables = <>
    Style = <>
    object Data: TfrxDataPage
      Height = 1000
      Width = 1000
    end
    object Page1: TfrxReportPage
      PaperWidth = 210
      PaperHeight = 297
      PaperSize = 9
      LeftMargin = 10
      RightMargin = 10
      TopMargin = 10
      BottomMargin = 10
      Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
      object ReportTitle1: TfrxReportTitle
        Height = 71.81107
        Top = 18.89765
        Width = 718.1107
        object Memo1: TfrxMemoView
          Top = 18.89765
          Width = 718.1107
          Height = 37.7953
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -29
          Font.Name = 'calibri'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            'Talabalardan kurs ishlarini qabul qilish hisoboti.')
          ParentFont = False
          VAlign = vaCenter
        end
      end
      object PageHeader1: TfrxPageHeader
        Height = 18.89765
        Top = 113.3859
        Width = 718.1107
        object Memo2: TfrxMemoView
          Top = 3.77953
          Width = 151.1812
          Height = 11.33859
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'calibri'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            'Ism')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo3: TfrxMemoView
          Left = 151.1812
          Width = 151.1812
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'calibri'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            'Familya')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo4: TfrxMemoView
          Left = 302.3624
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'calibri'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            'Fan')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo5: TfrxMemoView
          Left = 396.85065
          Width = 132.28355
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'calibri'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            'Kurs ishi mavzuvsi')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo6: TfrxMemoView
          Left = 529.1342
          Width = 113.3859
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'calibri'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            'Topshirilgan sana')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo7: TfrxMemoView
          Left = 642.5201
          Width = 79.37013
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'calibri'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            'Ball')
          ParentFont = False
          VAlign = vaCenter
        end
      end
      object MasterData1: TfrxMasterData
        Height = 34.01577
        Top = 192.75603
        Width = 718.1107
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
        RowCount = 0
        object frxDBDataset1Ism: TfrxMemoView
          Top = 7.55906
          Width = 151.1812
          Height = 18.89765
          ShowHint = False
          DataField = 'Ism'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'calibri'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            '[frxDBDataset1."Ism"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDataset1Familya: TfrxMemoView
          Left = 151.1812
          Top = 7.55906
          Width = 151.1812
          Height = 18.89765
          ShowHint = False
          DataField = 'Familya'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'calibri'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            '[frxDBDataset1."Familya"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDataset1Fan: TfrxMemoView
          Left = 302.3624
          Top = 7.55906
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          DataField = 'Fan'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'calibri'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            '[frxDBDataset1."Fan"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDataset1Kursishimavzuvsi: TfrxMemoView
          Left = 396.85065
          Top = 7.55906
          Width = 132.28355
          Height = 18.89765
          ShowHint = False
          DataField = 'Kurs ishi mavzuvsi'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'calibri'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            '[frxDBDataset1."Kurs ishi mavzuvsi"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDataset1Topshirgansana: TfrxMemoView
          Left = 529.1342
          Top = 7.55906
          Width = 113.3859
          Height = 18.89765
          ShowHint = False
          DataField = 'Topshirgan sana'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'calibri'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            '[frxDBDataset1."Topshirgan sana"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDataset1Ball: TfrxMemoView
          Left = 642.5201
          Top = 7.55906
          Width = 75.5906
          Height = 18.89765
          ShowHint = False
          DataField = 'Ball'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'calibri'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            '[frxDBDataset1."Ball"]')
          ParentFont = False
          VAlign = vaCenter
        end
      end
      object Footer1: TfrxFooter
        Height = 22.67718
        Top = 249.44898
        Width = 718.1107
        object Memo8: TfrxMemoView
          Left = 37.7953
          Top = 3.77953
          Width = 94.48825
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            'Tuzuvchi:')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo9: TfrxMemoView
          Left = 343.93723
          Top = 3.77953
          Width = 192.75603
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            'Mavluda Djabborova')
          ParentFont = False
          VAlign = vaCenter
        end
        object Date: TfrxMemoView
          Left = 540.47279
          Top = 3.77953
          Width = 177.63791
          Height = 18.89765
          ShowHint = False
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          HAlign = haCenter
          Memo.UTF8 = (
            '[Date]')
          ParentFont = False
          VAlign = vaCenter
        end
      end
      object Page: TfrxMemoView
        Left = 298.58287
        Top = 1024.25263
        Width = 98.26778
        Height = 18.89765
        ShowHint = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = -19
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        HAlign = haCenter
        Memo.UTF8 = (
          '[Page]')
        ParentFont = False
        VAlign = vaCenter
      end
    end
  end
  object frxPDFExport1: TfrxPDFExport
    UseFileCache = True
    ShowProgress = True
    OverwritePrompt = False
    DataOnly = False
    PrintOptimized = False
    Outline = False
    Background = False
    HTMLTags = True
    Quality = 95
    Author = 'FastReport'
    Subject = 'FastReport PDF export'
    ProtectionFlags = [ePrint, eModify, eCopy, eAnnot]
    HideToolbar = False
    HideMenubar = False
    HideWindowUI = False
    FitWindow = False
    CenterWindow = False
    PrintScaling = False
    CheckboxAsShape = False
    Left = 368
    Top = 504
  end
  object frxRTFExport1: TfrxRTFExport
    UseFileCache = True
    ShowProgress = True
    OverwritePrompt = False
    DataOnly = False
    PictureType = gpPNG
    Wysiwyg = True
    Creator = 'FastReport'
    SuppressPageHeadersFooters = False
    HeaderFooterMode = hfText
    AutoSize = False
    Left = 408
    Top = 504
  end
  object frxSimpleTextExport1: TfrxSimpleTextExport
    UseFileCache = True
    ShowProgress = True
    OverwritePrompt = False
    DataOnly = False
    Frames = False
    EmptyLines = False
    OEMCodepage = False
    DeleteEmptyColumns = True
    Left = 440
    Top = 504
  end
  object frxCSVExport1: TfrxCSVExport
    UseFileCache = True
    ShowProgress = True
    OverwritePrompt = False
    DataOnly = False
    Separator = ';'
    OEMCodepage = False
    NoSysSymbols = True
    ForcedQuotes = False
    Left = 480
    Top = 504
  end
end
