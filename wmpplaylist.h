#if !defined(AFX_WMPPLAYLIST_H__809BFBD0_5172_47D2_9A52_1CABC4C3D438__INCLUDED_)
#define AFX_WMPPLAYLIST_H__809BFBD0_5172_47D2_9A52_1CABC4C3D438__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ によって自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。


// このインターフェイスによって参照されるディスパッチ インターフェイス。
class CWMPMedia;

/////////////////////////////////////////////////////////////////////////////
// CWMPPlaylist ラップ クラス

class CWMPPlaylist : public COleDispatchDriver
{
public:
	CWMPPlaylist() {}		// COleDispatchDriver デフォルト コンストラクション
	CWMPPlaylist(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPPlaylist(const CWMPPlaylist& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// アトリビュート
public:

// オペレーション
public:
	long GetCount();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	long GetAttributeCount();
	CString GetAttributeName(long lIndex);
	CWMPMedia GetItem(long lIndex);
	CString getItemInfo(LPCTSTR bstrName);
	void setItemInfo(LPCTSTR bstrName, LPCTSTR bstrValue);
	BOOL GetIsIdentical(LPDISPATCH pIWMPPlaylist);
	void clear();
	void insertItem(long lIndex, LPDISPATCH pIWMPMedia);
	void appendItem(LPDISPATCH pIWMPMedia);
	void removeItem(LPDISPATCH pIWMPMedia);
	void moveItem(long lIndexOld, long lIndexNew);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_WMPPLAYLIST_H__809BFBD0_5172_47D2_9A52_1CABC4C3D438__INCLUDED_)
