// Microsoft Visual C++ で自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。


#include "stdafx.h"
#include "wmpcontrols.h"

// このインターフェイスによって参照されるディスパッチ インターフェイス
#include "wmpmedia.h"


/////////////////////////////////////////////////////////////////////////////
// CWMPControls プロパティ

/////////////////////////////////////////////////////////////////////////////
// CWMPControls オペレーション

BOOL CWMPControls::GetIsAvailable(LPCTSTR bstrItem)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x3e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, parms,
		bstrItem);
	return result;
}

void CWMPControls::play()
{
	InvokeHelper(0x33, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CWMPControls::stop()
{
	InvokeHelper(0x34, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CWMPControls::pause()
{
	InvokeHelper(0x35, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CWMPControls::fastForward()
{
	InvokeHelper(0x36, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CWMPControls::fastReverse()
{
	InvokeHelper(0x37, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

double CWMPControls::GetCurrentPosition()
{
	double result;
	InvokeHelper(0x38, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CWMPControls::SetCurrentPosition(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x38, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

CString CWMPControls::GetCurrentPositionString()
{
	CString result;
	InvokeHelper(0x39, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CWMPControls::next()
{
	InvokeHelper(0x3a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CWMPControls::previous()
{
	InvokeHelper(0x3b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

CWMPMedia CWMPControls::GetCurrentItem()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x3c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CWMPMedia(pDispatch);
}

void CWMPControls::SetCurrentItem(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long CWMPControls::GetCurrentMarker()
{
	long result;
	InvokeHelper(0x3d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CWMPControls::SetCurrentMarker(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void CWMPControls::playItem(LPDISPATCH pIWMPMedia)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 pIWMPMedia);
}
