// EasySRTDlg.cpp : インプリメンテーション ファイル
//

#include "stdafx.h"
#include "EasySRT.h"
#include "EasySRTDlg.h"
#include "HandleINI.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


/////////////////////////////////////////////////////////////////////////////
// CEasySRTDlg ダイアログ

CEasySRTDlg::CEasySRTDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CEasySRTDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CEasySRTDlg)
	m_edit1 = _T("");
	m_edit2 = _T("");
	//}}AFX_DATA_INIT
	// メモ: LoadIcon は Win32 の DestroyIcon のサブシーケンスを要求しません。
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CEasySRTDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CEasySRTDlg)
	DDX_Text(pDX, IDC_EDIT1, m_edit1);
	DDX_Text(pDX, IDC_EDIT2, m_edit2);
	DDX_Control(pDX, IDC_OCX1, m_wmp);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CEasySRTDlg, CDialog)
	//{{AFX_MSG_MAP(CEasySRTDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_KEYDOWN()
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_WM_DESTROY()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEasySRTDlg メッセージ ハンドラ


CHandleINI i;

BOOL CEasySRTDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// このダイアログ用のアイコンを設定します。フレームワークはアプリケーションのメイン
	// ウィンドウがダイアログでない時は自動的に設定しません。
	SetIcon(m_hIcon, TRUE);			// 大きいアイコンを設定
	SetIcon(m_hIcon, FALSE);		// 小さいアイコンを設定
	
	i.Init((HINSTANCE)GetModuleHandle(NULL));
	int x,y,w,h;
	x = i.ReadInt("Window", "X"); if(x<=0) x=100;
	y = i.ReadInt("Window", "Y"); if(y<=0) y=100;
	w = i.ReadInt("Window", "Width"); if(w<=0) w=600;
	h = i.ReadInt("Window", "Height"); if(h<=0) h=400;

	// サイズの変更
	MoveWindow(x,y,w,h);
	
	return TRUE;  // TRUE を返すとコントロールに設定したフォーカスは失われません。
}
void CEasySRTDlg::OnDestroy() 
{
	RECT a;
	GetWindowRect(&a);
	i.WriteInt("Window", "X", a.left);
	i.WriteInt("Window", "Y", a.top);
	i.WriteInt("Window", "Width", a.right - a.left);
	i.WriteInt("Window", "Height", a.bottom - a.top);

	CDialog::OnDestroy();
	
	
}


// もしダイアログボックスに最小化ボタンを追加するならば、アイコンを描画する
// コードを以下に記述する必要があります。MFC アプリケーションは document/view
// モデルを使っているので、この処理はフレームワークにより自動的に処理されます。

void CEasySRTDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 描画用のデバイス コンテキスト

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// クライアントの矩形領域内の中央
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// アイコンを描画します。
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{

		CDialog::OnPaint();
	}
}

// システムは、ユーザーが最小化ウィンドウをドラッグしている間、
// カーソルを表示するためにここを呼び出します。
HCURSOR CEasySRTDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CEasySRTDlg::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: この位置にメッセージ ハンドラ用のコードを追加するかまたはデフォルトの処理を呼び出してください
	
	CDialog::OnKeyDown(nChar, nRepCnt, nFlags);
}

void CEasySRTDlg::OnOK() 
{
	return;
}

void CEasySRTDlg::OnSize(UINT nType, int cx, int cy) 
{
	CDialog::OnSize(nType, cx, cy);
	
	// 自動サイズ変更
	CEdit* pEdit1 = (CEdit*)GetDlgItem(IDC_EDIT1);
	CEdit* pEdit2 = (CEdit*)GetDlgItem(IDC_EDIT2);
	CButton* pButton2 = (CButton*)GetDlgItem(IDC_BUTTON2);
	if(pButton2) pButton2->MoveWindow(0,20,160,30);
	if(pEdit1) pEdit1->MoveWindow(0,50,cx/4,cy-50);
	if(pEdit2) pEdit2->MoveWindow(0,0,cx,20);
	if(m_wmp) { m_wmp.MoveWindow(cx/4, 50, cx*3/4, cy-50);}
	
}

void CEasySRTDlg::OnButton2() //同期画面表示
{
	if(m_edit2 == "") return;
	if ( !m_Lyrics.GetSafeHwnd() ) {
		m_Lyrics.Create(IDD_LYRICS,this);   // ダイアログの作成
	}
	
	UpdateData();
	m_Lyrics.SetParam(&m_edit1, &m_edit2, &m_wmp);
	m_Lyrics.ShowWindow(SW_SHOW);
}

LRESULT CEasySRTDlg::WindowProc(UINT message, WPARAM wParam, LPARAM lParam) 
{
	if(message == WM_DROPFILES){
		char buf[1024];
		HDROP hDrop;
		hDrop = (HDROP)wParam;
        DragQueryFile((HDROP)wParam, 0, buf, sizeof(buf));
		m_wmp.SetUrl(buf);
		UpdateData();
//		m_edit1 = "";
		m_edit2 = buf;
		UpdateData(FALSE);
        DragFinish(hDrop);

	}
	
	return CDialog::WindowProc(message, wParam, lParam);
}
