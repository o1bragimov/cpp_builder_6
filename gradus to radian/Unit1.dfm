object Form1: TForm1
  Left = 201
  Top = 126
  BorderIcons = [biSystemMenu, biMaximize]
  BorderStyle = bsDialog
  Caption = 'Form1'
  ClientHeight = 399
  ClientWidth = 283
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
  object RadioGroup1: TRadioGroup
    Left = 56
    Top = 32
    Width = 185
    Height = 105
    Items.Strings = (
      'Gradus'
      'Radian')
    TabOrder = 0
    OnClick = RadioGroup1Click
  end
  object Panel1: TPanel
    Left = 40
    Top = 152
    Width = 209
    Height = 217
    TabOrder = 1
    Visible = False
    object Label1: TLabel
      Left = 32
      Top = 168
      Width = 48
      Height = 18
      Caption = 'Javob:'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label2: TLabel
      Left = 32
      Top = 24
      Width = 49
      Height = 15
      Caption = 'Gradus:'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Edit1: TEdit
      Left = 32
      Top = 48
      Width = 129
      Height = 21
      Cursor = crIBeam
      TabOrder = 0
      OnChange = Edit1Change
    end
    object Button1: TButton
      Left = 56
      Top = 80
      Width = 75
      Height = 25
      Caption = 'OK'
      Enabled = False
      TabOrder = 1
      OnClick = Button1Click
    end
    object Edit2: TEdit
      Left = 32
      Top = 184
      Width = 121
      Height = 21
      ReadOnly = True
      TabOrder = 2
    end
  end
  object Panel2: TPanel
    Left = 40
    Top = 152
    Width = 209
    Height = 217
    TabOrder = 2
    Visible = False
    object Label3: TLabel
      Left = 40
      Top = 16
      Width = 49
      Height = 15
      Caption = 'Radian:'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Consolas'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Button2: TButton
      Left = 64
      Top = 72
      Width = 75
      Height = 25
      Caption = 'OK'
      Enabled = False
      TabOrder = 0
      OnClick = Button2Click
    end
    object Edit3: TEdit
      Left = 40
      Top = 40
      Width = 121
      Height = 21
      TabOrder = 1
      OnChange = Edit3Change
    end
    object Edit4: TEdit
      Left = 40
      Top = 152
      Width = 121
      Height = 21
      ReadOnly = True
      TabOrder = 2
    end
  end
end
