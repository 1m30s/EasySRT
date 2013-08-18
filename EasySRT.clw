; CLW ファイルは MFC ClassWizard の情報を含んでいます。

[General Info]
Version=1
LastClass=CEasySRTDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "EasySRT.h"

ClassCount=3
Class1=CEasySRTApp
Class2=CEasySRTDlg

ResourceCount=3
Resource1=IDR_MAINFRAME
Resource2=IDD_EASYSRT_DIALOG
Class3=CLyricsDialogue
Resource3=IDD_LYRICS

[CLS:CEasySRTApp]
Type=0
HeaderFile=EasySRT.h
ImplementationFile=EasySRT.cpp
Filter=N
LastObject=CEasySRTApp
BaseClass=CWinApp
VirtualFilter=AC

[CLS:CEasySRTDlg]
Type=0
HeaderFile=EasySRTDlg.h
ImplementationFile=EasySRTDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=IDC_OCX1



[DLG:IDD_EASYSRT_DIALOG]
Type=1
Class=CEasySRTDlg
ControlCount=4
Control1=IDC_EDIT1,edit,1352732804
Control2=IDC_BUTTON2,button,1342242816
Control3=IDC_EDIT2,edit,1350633600
Control4=IDC_OCX1,{6BF52A52-394A-11D3-B153-00C04F79FAA6},1342242816

[DLG:IDD_LYRICS]
Type=1
Class=CLyricsDialogue
ControlCount=5
Control1=IDC_LIST1,listbox,1352732929
Control2=IDC_BUTTON1,button,1342242817
Control3=IDC_BUTTON2,button,1342242816
Control4=IDC_BUTTON3,button,1342242816
Control5=IDC_BUTTON4,button,1342242816

[CLS:CLyricsDialogue]
Type=0
HeaderFile=LyricsDialogue.h
ImplementationFile=LyricsDialogue.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_LIST1

