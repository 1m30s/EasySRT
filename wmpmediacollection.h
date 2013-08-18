#if !defined(AFX_WMPMEDIACOLLECTION_H__AC5D4AD1_0920_44F7_B52B_48A96704EEB2__INCLUDED_)
#define AFX_WMPMEDIACOLLECTION_H__AC5D4AD1_0920_44F7_B52B_48A96704EEB2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ によって自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。


// このインターフェイスによって参照されるディスパッチ インターフェイス。
class CWMPMedia;
class CWMPPlaylist;
class CWMPStringCollection;

/////////////////////////////////////////////////////////////////////////////
// CWMPMediaCollection ラップ クラス

class CWMPMediaCollection : public COleDispatchDriver
{
public:
	CWMPMediaCollection() {}		// COleDispatchDriver デフォルト コンストラクション
	CWMPMediaCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPMediaCollection(const CWMPMediaCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// アトリビュート
public:

// オペレーション
public:
	CWMPMedia add(LPCTSTR bstrURL);
	CWMPPlaylist getAll();
	CWMPPlaylist getByName(LPCTSTR bstrName);
	CWMPPlaylist getByGenre(LPCTSTR bstrGenre);
	CWMPPlaylist getByAuthor(LPCTSTR bstrAuthor);
	CWMPPlaylist getByAlbum(LPCTSTR bstrAlbum);
	CWMPPlaylist getByAttribute(LPCTSTR bstrAttribute, LPCTSTR bstrValue);
	void remove(LPDISPATCH pItem, BOOL varfDeleteFile);
	CWMPStringCollection getAttributeStringCollection(LPCTSTR bstrAttribute, LPCTSTR bstrMediaType);
	long getMediaAtom(LPCTSTR bstrItemName);
	void setDeleted(LPDISPATCH pItem, BOOL varfIsDeleted);
	BOOL isDeleted(LPDISPATCH pItem);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_WMPMEDIACOLLECTION_H__AC5D4AD1_0920_44F7_B52B_48A96704EEB2__INCLUDED_)
