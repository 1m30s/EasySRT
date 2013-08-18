#if !defined(AFX_WMPERRORITEM_H__57E8A6DD_6407_4E57_82D3_95735E91FDDA__INCLUDED_)
#define AFX_WMPERRORITEM_H__57E8A6DD_6407_4E57_82D3_95735E91FDDA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ によって自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。

/////////////////////////////////////////////////////////////////////////////
// CWMPErrorItem ラップ クラス

class CWMPErrorItem : public COleDispatchDriver
{
public:
	CWMPErrorItem() {}		// COleDispatchDriver デフォルト コンストラクション
	CWMPErrorItem(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPErrorItem(const CWMPErrorItem& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// アトリビュート
public:

// オペレーション
public:
	long GetErrorCode();
	CString GetErrorDescription();
	VARIANT GetErrorContext();
	long GetRemedy();
	CString GetCustomUrl();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_WMPERRORITEM_H__57E8A6DD_6407_4E57_82D3_95735E91FDDA__INCLUDED_)
