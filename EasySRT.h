// EasySRT.h : EASYSRT アプリケーションのメイン ヘッダー ファイルです。
//

#if !defined(AFX_EASYSRT_H__788E4D4C_5D9E_4E68_898A_01CA38A41782__INCLUDED_)
#define AFX_EASYSRT_H__788E4D4C_5D9E_4E68_898A_01CA38A41782__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// メイン シンボル

/////////////////////////////////////////////////////////////////////////////
// CEasySRTApp:
// このクラスの動作の定義に関しては EasySRT.cpp ファイルを参照してください。
//

class CEasySRTApp : public CWinApp
{
public:
	CEasySRTApp();

// オーバーライド
	// ClassWizard は仮想関数のオーバーライドを生成します。
	//{{AFX_VIRTUAL(CEasySRTApp)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

// インプリメンテーション

	//{{AFX_MSG(CEasySRTApp)
		// メモ - ClassWizard はこの位置にメンバ関数を追加または削除します。
		//        この位置に生成されるコードを編集しないでください。
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_EASYSRT_H__788E4D4C_5D9E_4E68_898A_01CA38A41782__INCLUDED_)
