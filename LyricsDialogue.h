#if !defined(AFX_LYRICSDIALOGUE_H__C0BB3792_17F8_42F0_80F8_AF7CFAB0FDE6__INCLUDED_)
#define AFX_LYRICSDIALOGUE_H__C0BB3792_17F8_42F0_80F8_AF7CFAB0FDE6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// LyricsDialogue.h : ヘッダー ファイル
//
#include "wmpplayer4.h"
#include "wmpcontrols.h"

/////////////////////////////////////////////////////////////////////////////
// CLyricsDialogue ダイアログ

class CLyricsDialogue : public CDialog
{
// コンストラクション
public:
	void SetParam(CString* str, CString* fname, CWMPPlayer4 *pWmp);
	CLyricsDialogue(CWnd* pParent = NULL);   // 標準のコンストラクタ

// ダイアログ データ
	//{{AFX_DATA(CLyricsDialogue)
	enum { IDD = IDD_LYRICS };
		// メモ: ClassWizard はこの位置にデータ メンバを追加します。
	//}}AFX_DATA


// オーバーライド
	// ClassWizard は仮想関数のオーバーライドを生成します。
	//{{AFX_VIRTUAL(CLyricsDialogue)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV サポート
	//}}AFX_VIRTUAL

// インプリメンテーション
protected:

	// 生成されたメッセージ マップ関数
	//{{AFX_MSG(CLyricsDialogue)
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	afx_msg void OnButton4();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	void _convd2t_ex(char* buf, double time);
	void _convd2t(char* buf,double dobdat);
	CWMPPlayer4 *pWmp;
	double m_syncList[512][2];//
	char outname[512];
	vector<CString> m_textList;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_LYRICSDIALOGUE_H__C0BB3792_17F8_42F0_80F8_AF7CFAB0FDE6__INCLUDED_)
