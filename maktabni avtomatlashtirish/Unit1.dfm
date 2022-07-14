object Form1: TForm1
  Left = 176
  Top = 66
  AutoScroll = False
  Caption = 'Form1'
  ClientHeight = 593
  ClientWidth = 1101
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object sPanel1: TsPanel
    Left = 0
    Top = 104
    Width = 1101
    Height = 489
    Align = alBottom
    TabOrder = 0
    SkinData.SkinSection = 'PANEL'
    object DBGrid1: TDBGrid
      Left = 1
      Top = 8
      Width = 1099
      Height = 480
      Align = alBottom
      DataSource = DataSource1
      Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgAlwaysShowSelection, dgConfirmDelete, dgCancelOnExit]
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      Columns = <
        item
          Expanded = False
          FieldName = 'fio'
          Width = 150
          Visible = True
        end
        item
          Expanded = False
          FieldName = '5/02/2022'
          Width = 60
          Visible = True
        end
        item
          Expanded = False
          FieldName = '12/02/2022'
          Width = 60
          Visible = True
        end
        item
          Expanded = False
          FieldName = '19/02/2022'
          Width = 60
          Visible = True
        end
        item
          Expanded = False
          FieldName = '26/02/2022'
          Width = 60
          Visible = True
        end
        item
          Expanded = False
          FieldName = '05/03/2022'
          Width = 60
          Visible = True
        end
        item
          Expanded = False
          FieldName = '12/03/2022'
          Width = 60
          Visible = True
        end
        item
          Expanded = False
          FieldName = '19/03/2022'
          Width = 60
          Visible = True
        end
        item
          Expanded = False
          FieldName = '26/03/2022'
          Width = 60
          Visible = True
        end
        item
          Expanded = False
          FieldName = '02/04/2022'
          Width = 60
          Visible = True
        end
        item
          Expanded = False
          FieldName = '09/04/2022'
          Width = 60
          Visible = True
        end
        item
          Expanded = False
          FieldName = '16/04/2022'
          Width = 60
          Visible = True
        end
        item
          Expanded = False
          FieldName = '23/04/2022'
          Width = 60
          Visible = True
        end
        item
          Expanded = False
          FieldName = '30/04/2022'
          Width = 60
          Visible = True
        end
        item
          Expanded = False
          FieldName = '07/05/2022'
          Width = 60
          Visible = True
        end
        item
          Expanded = False
          FieldName = '14/05/2022'
          Width = 60
          Visible = True
        end
        item
          Expanded = False
          FieldName = '21/05/2022'
          Width = 60
          Visible = True
        end>
    end
  end
  object sPanel2: TsPanel
    Left = 0
    Top = 8
    Width = 1097
    Height = 89
    TabOrder = 1
    SkinData.SkinSection = 'PANEL'
    object sLabelFX1: TsLabelFX
      Left = 56
      Top = 24
      Width = 14
      Height = 26
      Caption = '9'
      ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -19
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
    end
    object sLabelFX2: TsLabelFX
      Left = 66
      Top = 18
      Width = 11
      Height = 17
      Caption = 'A'
      ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
    end
    object sLabelFX3: TsLabelFX
      Left = 82
      Top = 24
      Width = 214
      Height = 26
      Caption = 'Sinf Elektron Jurnali'
      ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -19
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
    end
    object DateTimePicker1: TDateTimePicker
      Left = 768
      Top = 40
      Width = 194
      Height = 21
      CalAlignment = dtaLeft
      Date = 44727.6338028935
      Time = 44727.6338028935
      DateFormat = dfShort
      DateMode = dmComboBox
      Kind = dtkDate
      ParseInput = False
      TabOrder = 0
    end
    object sButton1: TsButton
      Left = 984
      Top = 32
      Width = 99
      Height = 33
      Caption = 'Tasdiqlash'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 1
      OnClick = sButton1Click
      SkinData.SkinSection = 'BUTTON'
    end
    object sCheckBox1: TsCheckBox
      Left = 560
      Top = 40
      Width = 40
      Height = 19
      Caption = 'NB'
      TabOrder = 2
      SkinData.SkinSection = 'CHECKBOX'
      ImgChecked = 0
      ImgUnchecked = 0
    end
    object sComboBox1: TsComboBox
      Left = 608
      Top = 40
      Width = 145
      Height = 21
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
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ItemHeight = 15
      ItemIndex = -1
      ParentFont = False
      TabOrder = 3
      Text = 'sComboBox1'
    end
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
    Top = 526
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=database.mdb;Persis' +
      't Security Info=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 56
    Top = 528
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *from avtomat')
    Left = 96
    Top = 536
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 136
    Top = 536
  end
end
