// Microsoft Visual C++ で自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。


#include "stdafx.h"
#include "wmpplayer4.h"

// このインターフェイスによって参照されるディスパッチ インターフェイス
#include "wmpcontrols.h"
#include "WMPSettings.h"
#include "wmpmedia.h"
#include "wmpmediacollection.h"
#include "wmpplaylistcollection.h"
#include "wmpnetwork.h"
#include "wmpplaylist.h"
#include "wmpcdromcollection.h"
#include "wmpclosedcaption.h"
#include "WMPError.h"
#include "wmpdvd.h"
#include "WMPPlayerApplication.h"

/////////////////////////////////////////////////////////////////////////////
// CWMPPlayer4

IMPLEMENT_DYNCREATE(CWMPPlayer4, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CWMPPlayer4 プロパティ

/////////////////////////////////////////////////////////////////////////////
// CWMPPlayer4 オペレーション

void CWMPPlayer4::close()
{
	InvokeHelper(0x3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

CString CWMPPlayer4::GetUrl()
{
	CString result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CWMPPlayer4::SetUrl(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long CWMPPlayer4::GetOpenState()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CWMPPlayer4::GetPlayState()
{
	long result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CWMPControls CWMPPlayer4::GetControls()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CWMPControls(pDispatch);
}

CWMPSettings CWMPPlayer4::GetSettings()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CWMPSettings(pDispatch);
}

CWMPMedia CWMPPlayer4::GetCurrentMedia()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CWMPMedia(pDispatch);
}

void CWMPPlayer4::SetCurrentMedia(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

CWMPMediaCollection CWMPPlayer4::GetMediaCollection()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CWMPMediaCollection(pDispatch);
}

CWMPPlaylistCollection CWMPPlayer4::GetPlaylistCollection()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CWMPPlaylistCollection(pDispatch);
}

CString CWMPPlayer4::GetVersionInfo()
{
	CString result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CWMPPlayer4::launchURL(LPCTSTR bstrURL)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bstrURL);
}

CWMPNetwork CWMPPlayer4::GetNetwork()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CWMPNetwork(pDispatch);
}

CWMPPlaylist CWMPPlayer4::GetCurrentPlaylist()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CWMPPlaylist(pDispatch);
}

void CWMPPlayer4::SetCurrentPlaylist(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

CWMPCdromCollection CWMPPlayer4::GetCdromCollection()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CWMPCdromCollection(pDispatch);
}

CWMPClosedCaption CWMPPlayer4::GetClosedCaption()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CWMPClosedCaption(pDispatch);
}

BOOL CWMPPlayer4::GetIsOnline()
{
	BOOL result;
	InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

CWMPError CWMPPlayer4::GetError()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CWMPError(pDispatch);
}

CString CWMPPlayer4::GetStatus()
{
	CString result;
	InvokeHelper(0x12, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CWMPDVD CWMPPlayer4::GetDvd()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x28, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CWMPDVD(pDispatch);
}

CWMPPlaylist CWMPPlayer4::newPlaylist(LPCTSTR bstrName, LPCTSTR bstrURL)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x29, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		bstrName, bstrURL);
	return CWMPPlaylist(pDispatch);
}

CWMPMedia CWMPPlayer4::newMedia(LPCTSTR bstrURL)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2a, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		bstrURL);
	return CWMPMedia(pDispatch);
}

BOOL CWMPPlayer4::GetEnabled()
{
	BOOL result;
	InvokeHelper(0x13, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CWMPPlayer4::SetEnabled(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x13, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CWMPPlayer4::GetFullScreen()
{
	BOOL result;
	InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CWMPPlayer4::SetFullScreen(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x15, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CWMPPlayer4::GetEnableContextMenu()
{
	BOOL result;
	InvokeHelper(0x16, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CWMPPlayer4::SetEnableContextMenu(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x16, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

void CWMPPlayer4::SetUiMode(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x17, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString CWMPPlayer4::GetUiMode()
{
	CString result;
	InvokeHelper(0x17, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

BOOL CWMPPlayer4::GetStretchToFit()
{
	BOOL result;
	InvokeHelper(0x18, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CWMPPlayer4::SetStretchToFit(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x18, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CWMPPlayer4::GetWindowlessVideo()
{
	BOOL result;
	InvokeHelper(0x19, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CWMPPlayer4::SetWindowlessVideo(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x19, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CWMPPlayer4::GetIsRemote()
{
	BOOL result;
	InvokeHelper(0x1a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

CWMPPlayerApplication CWMPPlayer4::GetPlayerApplication()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x1b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CWMPPlayerApplication(pDispatch);
}

void CWMPPlayer4::openPlayer(LPCTSTR bstrURL)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1c, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bstrURL);
}
