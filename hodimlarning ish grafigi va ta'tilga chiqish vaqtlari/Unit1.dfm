object Form1: TForm1
  Left = 215
  Top = 130
  BorderStyle = bsSingle
  Caption = 'Form1'
  ClientHeight = 496
  ClientWidth = 1072
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
    Top = 91
    Width = 1072
    Height = 405
    Align = alBottom
    TabOrder = 0
    SkinData.SkinSection = 'PANEL'
    object DBGrid1: TDBGrid
      Left = 1
      Top = 1
      Width = 1070
      Height = 403
      Align = alClient
      DataSource = DataSource1
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      Columns = <
        item
          Expanded = False
          FieldName = 'ism'
          Width = 200
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'familya'
          Width = 192
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'lavozim'
          Width = 164
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'ketish'
          Width = 182
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'kelish'
          Width = 180
          Visible = True
        end>
    end
  end
  object sPanel2: TsPanel
    Left = 0
    Top = 24
    Width = 1289
    Height = 57
    TabOrder = 1
    SkinData.SkinSection = 'PANEL'
    object DateTimePicker1: TDateTimePicker
      Left = 576
      Top = 24
      Width = 177
      Height = 21
      CalAlignment = dtaLeft
      Date = 44725.0821117708
      Time = 44725.0821117708
      DateFormat = dfShort
      DateMode = dmComboBox
      Kind = dtkDate
      ParseInput = False
      TabOrder = 0
    end
    object DateTimePicker2: TDateTimePicker
      Left = 760
      Top = 24
      Width = 177
      Height = 21
      CalAlignment = dtaLeft
      Date = 44725.0821945949
      Time = 44725.0821945949
      DateFormat = dfShort
      DateMode = dmComboBox
      Kind = dtkDate
      ParseInput = False
      TabOrder = 1
    end
    object ComboBoxEx1: TComboBoxEx
      Left = 344
      Top = 24
      Width = 145
      Height = 22
      ItemsEx.CaseSensitive = True
      ItemsEx.SortType = stData
      ItemsEx = <
        item
          Caption = 'gfgdsfg'
        end
        item
          Caption = 'sfdsfs'
        end>
      StyleEx = []
      ItemHeight = 16
      TabOrder = 2
      Text = 'ComboBoxEx1'
      DropDownCount = 8
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
    Top = 416
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 168
    Top = 416
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=database.mdb;Persis' +
      't Security Info=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 88
    Top = 416
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *from oylik')
    Left = 128
    Top = 416
  end
  object MainMenu1: TMainMenu
    Left = 264
    Top = 416
    object Asosiy1: TMenuItem
      Caption = 'Asosiy'
      object TizimdanChiqish1: TMenuItem
        Caption = 'Tizimdan Chiqish'
      end
    end
    object About1: TMenuItem
      Caption = 'About'
    end
  end
  object PopupMenu1: TPopupMenu
    Left = 296
    Top = 416
  end
end
