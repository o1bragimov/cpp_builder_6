object Form2: TForm2
  Left = 237
  Top = 170
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Registratsiya oynasi.'
  ClientHeight = 342
  ClientWidth = 404
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
    Left = 40
    Top = 32
    Width = 56
    Height = 15
    Caption = 'Familya:'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 40
    Top = 72
    Width = 28
    Height = 15
    Caption = 'Ism:'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 40
    Top = 112
    Width = 105
    Height = 15
    Caption = 'Otasining ismi:'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 40
    Top = 152
    Width = 42
    Height = 15
    Caption = 'Email:'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label5: TLabel
    Left = 40
    Top = 192
    Width = 42
    Height = 15
    Caption = 'Login:'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label6: TLabel
    Left = 40
    Top = 232
    Width = 42
    Height = 15
    Caption = 'Parol:'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 160
    Top = 24
    Width = 230
    Height = 27
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 160
    Top = 64
    Width = 230
    Height = 27
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
  end
  object Edit3: TEdit
    Left = 160
    Top = 104
    Width = 230
    Height = 27
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
  end
  object Edit4: TEdit
    Left = 160
    Top = 144
    Width = 230
    Height = 27
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
  end
  object Edit5: TEdit
    Left = 160
    Top = 184
    Width = 230
    Height = 27
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
  end
  object Edit6: TEdit
    Left = 160
    Top = 224
    Width = 230
    Height = 27
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 5
  end
  object Button1: TButton
    Left = 160
    Top = 296
    Width = 75
    Height = 25
    Caption = 'Saqlash:'
    TabOrder = 6
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 320
    Top = 296
    Width = 75
    Height = 25
    Caption = 'Chiqish:'
    TabOrder = 7
    OnClick = Button2Click
  end
end
