// Microsoft Visual C++ で自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。


#include "stdafx.h"
#include "wmpplaylistcollection.h"

// このインターフェイスによって参照されるディスパッチ インターフェイス
#include "wmpplaylist.h"
#include "WMPPlaylistArray.h"


/////////////////////////////////////////////////////////////////////////////
// CWMPPlaylistCollection プロパティ

/////////////////////////////////////////////////////////////////////////////
// CWMPPlaylistCollection オペレーション

CWMPPlaylist CWMPPlaylistCollection::newPlaylist(LPCTSTR bstrName)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x228, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		bstrName);
	return CWMPPlaylist(pDispatch);
}

CWMPPlaylistArray CWMPPlaylistCollection::getAll()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x229, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CWMPPlaylistArray(pDispatch);
}

CWMPPlaylistArray CWMPPlaylistCollection::getByName(LPCTSTR bstrName)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x22a, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		bstrName);
	return CWMPPlaylistArray(pDispatch);
}

void CWMPPlaylistCollection::remove(LPDISPATCH pItem)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x22c, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 pItem);
}

void CWMPPlaylistCollection::setDeleted(LPDISPATCH pItem, BOOL varfIsDeleted)
{
	static BYTE parms[] =
		VTS_DISPATCH VTS_BOOL;
	InvokeHelper(0x230, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 pItem, varfIsDeleted);
}

BOOL CWMPPlaylistCollection::isDeleted(LPDISPATCH pItem)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x231, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pItem);
	return result;
}

CWMPPlaylist CWMPPlaylistCollection::importPlaylist(LPDISPATCH pItem)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x232, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		pItem);
	return CWMPPlaylist(pDispatch);
}
