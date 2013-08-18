#if !defined(AFX_WMPDVD_H__4ED03C00_FBCD_446C_B1E0_89E8C88F41F8__INCLUDED_)
#define AFX_WMPDVD_H__4ED03C00_FBCD_446C_B1E0_89E8C88F41F8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ によって自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。

/////////////////////////////////////////////////////////////////////////////
// CWMPDVD ラップ クラス

class CWMPDVD : public COleDispatchDriver
{
public:
	CWMPDVD() {}		// COleDispatchDriver デフォルト コンストラクション
	CWMPDVD(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPDVD(const CWMPDVD& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// アトリビュート
public:

// オペレーション
public:
	BOOL GetIsAvailable(LPCTSTR bstrItem);
	CString GetDomain();
	void topMenu();
	void titleMenu();
	void back();
	void resume();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_WMPDVD_H__4ED03C00_FBCD_446C_B1E0_89E8C88F41F8__INCLUDED_)
