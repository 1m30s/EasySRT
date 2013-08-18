// Microsoft Visual C++ で自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。


#include "stdafx.h"
#include "wmpmedia.h"


/////////////////////////////////////////////////////////////////////////////
// CWMPMedia プロパティ

/////////////////////////////////////////////////////////////////////////////
// CWMPMedia オペレーション

BOOL CWMPMedia::GetIsIdentical(LPDISPATCH pIWMPMedia)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2fb, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, parms,
		pIWMPMedia);
	return result;
}

CString CWMPMedia::GetSourceURL()
{
	CString result;
	InvokeHelper(0x2ef, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString CWMPMedia::GetName()
{
	CString result;
	InvokeHelper(0x2fc, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CWMPMedia::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2fc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long CWMPMedia::GetImageSourceWidth()
{
	long result;
	InvokeHelper(0x2f0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CWMPMedia::GetImageSourceHeight()
{
	long result;
	InvokeHelper(0x2f1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CWMPMedia::GetMarkerCount()
{
	long result;
	InvokeHelper(0x2f2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

double CWMPMedia::getMarkerTime(long MarkerNum)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2f3, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		MarkerNum);
	return result;
}

CString CWMPMedia::getMarkerName(long MarkerNum)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2f4, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		MarkerNum);
	return result;
}

double CWMPMedia::GetDuration()
{
	double result;
	InvokeHelper(0x2f5, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

CString CWMPMedia::GetDurationString()
{
	CString result;
	InvokeHelper(0x2f6, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CWMPMedia::GetAttributeCount()
{
	long result;
	InvokeHelper(0x2f7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString CWMPMedia::getAttributeName(long lIndex)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2f8, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		lIndex);
	return result;
}

CString CWMPMedia::getItemInfo(LPCTSTR bstrItemName)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2f9, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		bstrItemName);
	return result;
}

void CWMPMedia::setItemInfo(LPCTSTR bstrItemName, LPCTSTR bstrVal)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x2fa, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bstrItemName, bstrVal);
}

CString CWMPMedia::getItemInfoByAtom(long lAtom)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2fd, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		lAtom);
	return result;
}

BOOL CWMPMedia::isMemberOf(LPDISPATCH pPlaylist)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x2fe, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pPlaylist);
	return result;
}

BOOL CWMPMedia::isReadOnlyItem(LPCTSTR bstrItemName)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x2ff, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		bstrItemName);
	return result;
}
