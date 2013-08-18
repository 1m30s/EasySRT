// EasySRTDlg.h : ヘッダー ファイル
//
//{{AFX_INCLUDES()
#include "wmpplayer4.h"
//}}AFX_INCLUDES

#include "LyricsDialogue.h"

#if !defined(AFX_EASYSRTDLG_H__FEB41E61_E10F_4981_A206_20152729BBE5__INCLUDED_)
#define AFX_EASYSRTDLG_H__FEB41E61_E10F_4981_A206_20152729BBE5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CEasySRTDlg ダイアログ

class CEasySRTDlg : public CDialog
{
// 構築
public:
	CEasySRTDlg(CWnd* pParent = NULL);	// 標準のコンストラクタ

// ダイアログ データ
	//{{AFX_DATA(CEasySRTDlg)
	enum { IDD = IDD_EASYSRT_DIALOG };
	CString	m_edit1;
	CString	m_edit2;
	CWMPPlayer4	m_wmp;
	//}}AFX_DATA

	// ClassWizard は仮想関数のオーバーライドを生成します。
	//{{AFX_VIRTUAL(CEasySRTDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV のサポート
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	//}}AFX_VIRTUAL

// インプリメンテーション
protected:
	HICON m_hIcon;

	// 生成されたメッセージ マップ関数
	//{{AFX_MSG(CEasySRTDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	virtual void OnOK();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnButton2();
	afx_msg void OnDestroy();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
//	CComPtr<IWMPPlayer> m_pIWMPPlayer;
//	CAxWindow m_wAxWindow;
	CLyricsDialogue m_Lyrics;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_EASYSRTDLG_H__FEB41E61_E10F_4981_A206_20152729BBE5__INCLUDED_)
