object Form3: TForm3
  Left = 378
  Top = 241
  AutoScroll = False
  Caption = 'Form3'
  ClientHeight = 334
  ClientWidth = 741
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
    Top = 96
    Width = 741
    Height = 238
    Align = alBottom
    TabOrder = 0
    SkinData.SkinSection = 'PANEL'
    object DBGrid1: TDBGrid
      Left = 1
      Top = 1
      Width = 739
      Height = 236
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
          Alignment = taCenter
          Expanded = False
          FieldName = 'Ism'
          Title.Alignment = taCenter
          Width = 90
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Familya'
          Title.Alignment = taCenter
          Width = 90
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Guruh'
          Title.Alignment = taCenter
          Width = 90
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Kurs ishi mavzuvsi'
          Title.Alignment = taCenter
          Width = 90
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Fan'
          Title.Alignment = taCenter
          Width = 90
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Topshirgan sana'
          Title.Alignment = taCenter
          Width = 90
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Ball'
          Title.Alignment = taCenter
          Width = 90
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Baho'
          Title.Alignment = taCenter
          Width = 87
          Visible = True
        end>
    end
  end
  object sPanel2: TsPanel
    Left = 0
    Top = 16
    Width = 745
    Height = 57
    TabOrder = 1
    SkinData.SkinSection = 'PANEL'
    object sEdit1: TsEdit
      Left = 173
      Top = 16
      Width = 194
      Height = 22
      Color = clWhite
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -16
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
    object sButton1: TsButton
      Left = 384
      Top = 15
      Width = 75
      Height = 21
      Caption = 'Qidirish'
      TabOrder = 1
      OnClick = sButton1Click
      SkinData.SkinSection = 'BUTTON'
    end
    object sComboBox1: TsComboBox
      Left = 16
      Top = 18
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
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clBlack
      Font.Height = -15
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
      ItemHeight = 15
      ItemIndex = -1
      ParentFont = False
      TabOrder = 2
      Text = 'Tanlang...'
      Items.Strings = (
        'Ism'
        'Familya'
        'Guruh'
        'Kurs ishi mavzuvsi'
        'Fan'
        'Topshirilgan sana'
        'Ball')
    end
    object sEdit2: TsEdit
      Left = 670
      Top = 17
      Width = 41
      Height = 21
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
    object UpDown1: TUpDown
      Left = 713
      Top = 14
      Width = 17
      Height = 25
      Min = 0
      Position = 0
      TabOrder = 4
      Wrap = False
      OnClick = UpDown1Click
    end
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 690
    Top = 296
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = Form1.ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *from menu')
    Left = 648
    Top = 296
  end
end
