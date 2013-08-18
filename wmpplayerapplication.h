#if !defined(AFX_WMPPLAYERAPPLICATION_H__27D1AFD1_A804_47A6_90CD_649DFB2F8877__INCLUDED_)
#define AFX_WMPPLAYERAPPLICATION_H__27D1AFD1_A804_47A6_90CD_649DFB2F8877__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ によって自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。

/////////////////////////////////////////////////////////////////////////////
// CWMPPlayerApplication ラップ クラス

class CWMPPlayerApplication : public COleDispatchDriver
{
public:
	CWMPPlayerApplication() {}		// COleDispatchDriver デフォルト コンストラクション
	CWMPPlayerApplication(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPPlayerApplication(const CWMPPlayerApplication& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// アトリビュート
public:

// オペレーション
public:
	void switchToPlayerApplication();
	void switchToControl();
	BOOL GetPlayerDocked();
	BOOL GetHasDisplay();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_WMPPLAYERAPPLICATION_H__27D1AFD1_A804_47A6_90CD_649DFB2F8877__INCLUDED_)
