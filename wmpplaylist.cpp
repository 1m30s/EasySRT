// Microsoft Visual C++ で自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。


#include "stdafx.h"
#include "wmpplaylist.h"

// このインターフェイスによって参照されるディスパッチ インターフェイス
#include "WMPMedia.h"


/////////////////////////////////////////////////////////////////////////////
// CWMPPlaylist プロパティ

/////////////////////////////////////////////////////////////////////////////
// CWMPPlaylist オペレーション

long CWMPPlaylist::GetCount()
{
	long result;
	InvokeHelper(0xc9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString CWMPPlaylist::GetName()
{
	CString result;
	InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CWMPPlaylist::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xca, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long CWMPPlaylist::GetAttributeCount()
{
	long result;
	InvokeHelper(0xd2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString CWMPPlaylist::GetAttributeName(long lIndex)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms,
		lIndex);
	return result;
}

CWMPMedia CWMPPlaylist::GetItem(long lIndex)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, parms,
		lIndex);
	return CWMPMedia(pDispatch);
}

CString CWMPPlaylist::getItemInfo(LPCTSTR bstrName)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xcb, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		bstrName);
	return result;
}

void CWMPPlaylist::setItemInfo(LPCTSTR bstrName, LPCTSTR bstrValue)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0xcc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bstrName, bstrValue);
}

BOOL CWMPPlaylist::GetIsIdentical(LPDISPATCH pIWMPPlaylist)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xd5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, parms,
		pIWMPPlaylist);
	return result;
}

void CWMPPlaylist::clear()
{
	InvokeHelper(0xcd, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CWMPPlaylist::insertItem(long lIndex, LPDISPATCH pIWMPMedia)
{
	static BYTE parms[] =
		VTS_I4 VTS_DISPATCH;
	InvokeHelper(0xce, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 lIndex, pIWMPMedia);
}

void CWMPPlaylist::appendItem(LPDISPATCH pIWMPMedia)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xcf, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 pIWMPMedia);
}

void CWMPPlaylist::removeItem(LPDISPATCH pIWMPMedia)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xd0, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 pIWMPMedia);
}

void CWMPPlaylist::moveItem(long lIndexOld, long lIndexNew)
{
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0xd1, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 lIndexOld, lIndexNew);
}
