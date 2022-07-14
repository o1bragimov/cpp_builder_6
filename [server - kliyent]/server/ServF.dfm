object Form1: TForm1
  Left = 478
  Top = 227
  Width = 783
  Height = 604
  Caption = 'Server'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnActivate = FormActivate
  OnDestroy = FormDestroy
  DesignSize = (
    767
    565)
  PixelsPerInch = 96
  TextHeight = 13
  object exitBtn: TButton
    Left = 691
    Top = 8
    Width = 75
    Height = 25
    Anchors = [akTop, akRight]
    Cancel = True
    Caption = 'exitBtn'
    TabOrder = 0
    OnClick = exitBtnClick
  end
  object memMsg: TMemo
    Left = 8
    Top = 8
    Width = 676
    Height = 209
    Anchors = [akLeft, akTop, akRight]
    Lines.Strings = (
      'memMsg')
    ScrollBars = ssVertical
    TabOrder = 1
  end
  object pg: TPageControl
    Left = 8
    Top = 224
    Width = 764
    Height = 348
    ActivePage = TabSheet1
    Anchors = [akLeft, akTop, akRight, akBottom]
    TabIndex = 0
    TabOrder = 2
    object TabSheet1: TTabSheet
      Caption = 'TabSheet1'
      DesignSize = (
        756
        320)
      object ch1: TChart
        Left = 160
        Top = 8
        Width = 587
        Height = 308
        BackWall.Brush.Color = clWhite
        BackWall.Brush.Style = bsClear
        Title.Text.Strings = (
          'TChart')
        Legend.Visible = False
        View3D = False
        TabOrder = 0
        Anchors = [akLeft, akTop, akRight, akBottom]
        object Series1: TLineSeries
          Marks.ArrowLength = 8
          Marks.Visible = False
          SeriesColor = clRed
          Pointer.InflateMargins = True
          Pointer.Style = psRectangle
          Pointer.Visible = False
          XValues.DateTime = False
          XValues.Name = 'X'
          XValues.Multiplier = 1
          XValues.Order = loAscending
          YValues.DateTime = False
          YValues.Name = 'Y'
          YValues.Multiplier = 1
          YValues.Order = loNone
        end
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'TabSheet2'
      ImageIndex = 1
      DesignSize = (
        756
        320)
      object sh21ed: TEdit
        Left = 8
        Top = 8
        Width = 121
        Height = 21
        TabOrder = 0
        Text = #1042#1072#1089#1103
      end
      object sh22ed: TEdit
        Left = 8
        Top = 40
        Width = 121
        Height = 21
        TabOrder = 1
        Text = #1055#1091#1087#1082#1080#1085
      end
      object sh23ed: TEdit
        Left = 8
        Top = 72
        Width = 121
        Height = 21
        TabOrder = 2
        Text = #1057#1045#1056#1067#1049
      end
      object sh24ed: TEdit
        Left = 8
        Top = 120
        Width = 121
        Height = 21
        TabOrder = 3
        Text = #1050#1086#1079#1105#1083
      end
      object ch2: TChart
        Left = 136
        Top = 8
        Width = 612
        Height = 308
        BackWall.Brush.Color = clWhite
        BackWall.Brush.Style = bsClear
        Title.Text.Strings = (
          'TChart')
        Legend.Visible = False
        View3D = False
        TabOrder = 4
        Anchors = [akLeft, akTop, akRight, akBottom]
        object Series2: TLineSeries
          Marks.ArrowLength = 8
          Marks.Visible = False
          SeriesColor = clRed
          Pointer.InflateMargins = True
          Pointer.Style = psRectangle
          Pointer.Visible = False
          XValues.DateTime = False
          XValues.Name = 'X'
          XValues.Multiplier = 1
          XValues.Order = loAscending
          YValues.DateTime = False
          YValues.Name = 'Y'
          YValues.Multiplier = 1
          YValues.Order = loNone
        end
      end
    end
    object TabSheet3: TTabSheet
      Caption = 'TabSheet3'
      ImageIndex = 2
      object gr3: TStringGrid
        Left = 0
        Top = 0
        Width = 585
        Height = 285
        Align = alClient
        Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
        TabOrder = 0
      end
    end
  end
  object Server: TServerSocket
    Active = False
    Port = 1001
    ServerType = stNonBlocking
    OnAccept = ServerAccept
    OnClientConnect = ServerClientConnect
    OnClientDisconnect = ServerClientDisconnect
    OnClientRead = ServerClientRead
    OnClientError = ServerClientError
    Left = 80
    Top = 8
  end
  object Timer1: TTimer
    Enabled = False
    OnTimer = Timer1Timer
    Left = 128
    Top = 16
  end
  object openDlg: TOpenDialog
    Options = [ofReadOnly, ofHideReadOnly, ofAllowMultiSelect, ofEnableSizing]
    Left = 704
    Top = 80
  end
  object ServerFile: TServerSocket
    Active = False
    Port = 1002
    ServerType = stNonBlocking
    OnAccept = ServerFileAccept
    OnClientConnect = ServerFileClientConnect
    OnClientDisconnect = ServerFileClientDisconnect
    OnClientRead = ServerFileClientRead
    OnClientError = ServerFileClientError
    Left = 80
    Top = 40
  end
end
