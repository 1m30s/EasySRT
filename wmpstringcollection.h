#if !defined(AFX_WMPSTRINGCOLLECTION_H__0A43D174_8A00_445E_BAED_70A8D1FF3077__INCLUDED_)
#define AFX_WMPSTRINGCOLLECTION_H__0A43D174_8A00_445E_BAED_70A8D1FF3077__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ によって自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。

/////////////////////////////////////////////////////////////////////////////
// CWMPStringCollection ラップ クラス

class CWMPStringCollection : public COleDispatchDriver
{
public:
	CWMPStringCollection() {}		// COleDispatchDriver デフォルト コンストラクション
	CWMPStringCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPStringCollection(const CWMPStringCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// アトリビュート
public:

// オペレーション
public:
	long GetCount();
	CString Item(long lIndex);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_WMPSTRINGCOLLECTION_H__0A43D174_8A00_445E_BAED_70A8D1FF3077__INCLUDED_)
