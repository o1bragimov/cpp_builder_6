object Form2: TForm2
  Left = 176
  Top = 75
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Kompyuter tarmoqlari.'
  ClientHeight = 584
  ClientWidth = 1180
  Color = clBtnFace
  DefaultMonitor = dmDesktop
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poDesktopCenter
  OnActivate = FormActivate
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object sPanel1: TsPanel
    Left = 329
    Top = 0
    Width = 851
    Height = 584
    Align = alClient
    TabOrder = 0
    SkinData.SkinSection = 'PANEL'
    object ActionMainMenuBar1: TActionMainMenuBar
      Left = 1
      Top = 1
      Width = 849
      Height = 31
      Caption = 'ActionMainMenuBar1'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clMenuText
      Font.Height = -12
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
      Spacing = 0
    end
    object UpDown1: TUpDown
      Left = 826
      Top = 8
      Width = 16
      Height = 21
      Cursor = crHandPoint
      Associate = sEdit1
      Min = 8
      Max = 75
      Increment = 2
      Position = 8
      TabOrder = 1
      Wrap = False
      OnClick = UpDown1Click
    end
    object sEdit1: TsEdit
      Left = 766
      Top = 8
      Width = 60
      Height = 21
      Cursor = crDrag
      Color = clWhite
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      ReadOnly = True
      TabOrder = 2
      Text = '8'
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
      Left = 400
      Top = 6
      Width = 225
      Height = 21
      Color = clWhite
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -11
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
    object sBitBtn1: TsBitBtn
      Left = 635
      Top = 4
      Width = 60
      Height = 25
      Caption = 'Qidirish'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 4
      OnClick = sBitBtn1Click
      SkinData.SkinSection = 'BUTTON'
    end
    object DBMemo1: TDBMemo
      Left = 1
      Top = 32
      Width = 849
      Height = 551
      Align = alClient
      DataField = 'matn'
      DataSource = DataSource2
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -12
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
      ParentFont = False
      ScrollBars = ssVertical
      TabOrder = 5
    end
    object sEdit3: TsEdit
      Left = 16
      Top = 6
      Width = 185
      Height = 22
      Color = clWhite
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -12
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
      ParentFont = False
      ReadOnly = True
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
  end
  object sPanel2: TsPanel
    Left = 0
    Top = 0
    Width = 329
    Height = 584
    Align = alLeft
    Alignment = taLeftJustify
    TabOrder = 1
    SkinData.SkinSection = 'PANEL'
    object DBGrid1: TDBGrid
      Left = 1
      Top = 1
      Width = 327
      Height = 582
      Cursor = crHandPoint
      Align = alClient
      DataSource = DataSource1
      DragCursor = crHandPoint
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -12
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
      Options = [dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgAlwaysShowSelection, dgConfirmDelete, dgCancelOnExit]
      ParentFont = False
      PopupMenu = PopupMenu1
      ReadOnly = True
      TabOrder = 0
      TitleFont.Charset = RUSSIAN_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -13
      TitleFont.Name = 'Consolas'
      TitleFont.Style = [fsBold, fsItalic]
      Columns = <
        item
          Expanded = False
          FieldName = 'mavzu'
          Visible = True
        end>
    end
  end
  object MainMenu1: TMainMenu
    Left = 336
    Top = 536
    object Asosiy1: TMenuItem
      Caption = 'Asosiy'
      object Shrift1: TMenuItem
        Caption = 'Tzimdan Chiqish'
        OnClick = Shrift1Click
      end
    end
    object About1: TMenuItem
      Caption = 'About'
      OnClick = About1Click
    end
  end
  object ADOTable1: TADOTable
    Active = True
    Connection = Form1.ADOConnection1
    CursorType = ctStatic
    LockType = ltReadOnly
    IndexFieldNames = 'id'
    TableName = 'mavzuvlar'
    Left = 240
    Top = 536
  end
  object ADOTable2: TADOTable
    Active = True
    Connection = Form1.ADOConnection1
    CursorType = ctStatic
    LockType = ltReadOnly
    IndexFieldNames = 'id'
    MasterFields = 'id'
    MasterSource = DataSource1
    TableName = 'matnlar'
    Left = 400
    Top = 536
  end
  object DataSource1: TDataSource
    DataSet = ADOTable1
    Left = 208
    Top = 536
  end
  object DataSource2: TDataSource
    DataSet = ADOTable2
    Left = 368
    Top = 536
  end
  object PopupMenu1: TPopupMenu
    Left = 272
    Top = 536
    object Mavzuqoshish1: TMenuItem
      Caption = 'Mavzu qo'#39'shish'
      ShortCut = 16462
      OnClick = Mavzuqoshish1Click
    end
    object Mavzuochirish1: TMenuItem
      Caption = 'Mavzu o'#39'chirish'
      ShortCut = 16430
      OnClick = Mavzuochirish1Click
    end
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = Form1.ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select * from mavzuvlar')
    Left = 168
    Top = 536
  end
end
