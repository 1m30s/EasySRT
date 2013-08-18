// Microsoft Visual C++ で自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。


#include "stdafx.h"
#include "wmpmediacollection.h"

// このインターフェイスによって参照されるディスパッチ インターフェイス
#include "wmpmedia.h"
#include "wmpplaylist.h"
#include "wmpstringcollection.h"


/////////////////////////////////////////////////////////////////////////////
// CWMPMediaCollection プロパティ

/////////////////////////////////////////////////////////////////////////////
// CWMPMediaCollection オペレーション

CWMPMedia CWMPMediaCollection::add(LPCTSTR bstrURL)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1c4, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		bstrURL);
	return CWMPMedia(pDispatch);
}

CWMPPlaylist CWMPMediaCollection::getAll()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x1c5, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CWMPPlaylist(pDispatch);
}

CWMPPlaylist CWMPMediaCollection::getByName(LPCTSTR bstrName)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1c6, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		bstrName);
	return CWMPPlaylist(pDispatch);
}

CWMPPlaylist CWMPMediaCollection::getByGenre(LPCTSTR bstrGenre)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1c7, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		bstrGenre);
	return CWMPPlaylist(pDispatch);
}

CWMPPlaylist CWMPMediaCollection::getByAuthor(LPCTSTR bstrAuthor)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1c8, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		bstrAuthor);
	return CWMPPlaylist(pDispatch);
}

CWMPPlaylist CWMPMediaCollection::getByAlbum(LPCTSTR bstrAlbum)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1c9, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		bstrAlbum);
	return CWMPPlaylist(pDispatch);
}

CWMPPlaylist CWMPMediaCollection::getByAttribute(LPCTSTR bstrAttribute, LPCTSTR bstrValue)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x1ca, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		bstrAttribute, bstrValue);
	return CWMPPlaylist(pDispatch);
}

void CWMPMediaCollection::remove(LPDISPATCH pItem, BOOL varfDeleteFile)
{
	static BYTE parms[] =
		VTS_DISPATCH VTS_BOOL;
	InvokeHelper(0x1cb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 pItem, varfDeleteFile);
}

CWMPStringCollection CWMPMediaCollection::getAttributeStringCollection(LPCTSTR bstrAttribute, LPCTSTR bstrMediaType)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x1cd, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		bstrAttribute, bstrMediaType);
	return CWMPStringCollection(pDispatch);
}

long CWMPMediaCollection::getMediaAtom(LPCTSTR bstrItemName)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1d6, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		bstrItemName);
	return result;
}

void CWMPMediaCollection::setDeleted(LPDISPATCH pItem, BOOL varfIsDeleted)
{
	static BYTE parms[] =
		VTS_DISPATCH VTS_BOOL;
	InvokeHelper(0x1d7, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 pItem, varfIsDeleted);
}

BOOL CWMPMediaCollection::isDeleted(LPDISPATCH pItem)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x1d8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pItem);
	return result;
}
