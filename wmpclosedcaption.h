#if !defined(AFX_WMPCLOSEDCAPTION_H__F13F83F9_1CB0_4017_A348_36932FBE90FF__INCLUDED_)
#define AFX_WMPCLOSEDCAPTION_H__F13F83F9_1CB0_4017_A348_36932FBE90FF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ によって自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。

/////////////////////////////////////////////////////////////////////////////
// CWMPClosedCaption ラップ クラス

class CWMPClosedCaption : public COleDispatchDriver
{
public:
	CWMPClosedCaption() {}		// COleDispatchDriver デフォルト コンストラクション
	CWMPClosedCaption(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPClosedCaption(const CWMPClosedCaption& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// アトリビュート
public:

// オペレーション
public:
	CString GetSAMIStyle();
	void SetSAMIStyle(LPCTSTR lpszNewValue);
	CString GetSAMILang();
	void SetSAMILang(LPCTSTR lpszNewValue);
	CString GetSAMIFileName();
	void SetSAMIFileName(LPCTSTR lpszNewValue);
	CString GetCaptioningId();
	void SetCaptioningId(LPCTSTR lpszNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_WMPCLOSEDCAPTION_H__F13F83F9_1CB0_4017_A348_36932FBE90FF__INCLUDED_)
