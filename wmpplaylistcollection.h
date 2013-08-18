#if !defined(AFX_WMPPLAYLISTCOLLECTION_H__FB02D274_CA84_4907_ACC0_95B5D4AA5F74__INCLUDED_)
#define AFX_WMPPLAYLISTCOLLECTION_H__FB02D274_CA84_4907_ACC0_95B5D4AA5F74__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ によって自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。


// このインターフェイスによって参照されるディスパッチ インターフェイス。
class CWMPPlaylist;
class CWMPPlaylistArray;

/////////////////////////////////////////////////////////////////////////////
// CWMPPlaylistCollection ラップ クラス

class CWMPPlaylistCollection : public COleDispatchDriver
{
public:
	CWMPPlaylistCollection() {}		// COleDispatchDriver デフォルト コンストラクション
	CWMPPlaylistCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPPlaylistCollection(const CWMPPlaylistCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// アトリビュート
public:

// オペレーション
public:
	CWMPPlaylist newPlaylist(LPCTSTR bstrName);
	CWMPPlaylistArray getAll();
	CWMPPlaylistArray getByName(LPCTSTR bstrName);
	void remove(LPDISPATCH pItem);
	void setDeleted(LPDISPATCH pItem, BOOL varfIsDeleted);
	BOOL isDeleted(LPDISPATCH pItem);
	CWMPPlaylist importPlaylist(LPDISPATCH pItem);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_WMPPLAYLISTCOLLECTION_H__FB02D274_CA84_4907_ACC0_95B5D4AA5F74__INCLUDED_)
