// Microsoft Visual C++ で自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。


#include "stdafx.h"
#include "wmpsettings.h"


/////////////////////////////////////////////////////////////////////////////
// CWMPSettings プロパティ

/////////////////////////////////////////////////////////////////////////////
// CWMPSettings オペレーション

BOOL CWMPSettings::GetIsAvailable(LPCTSTR bstrItem)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x71, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, parms,
		bstrItem);
	return result;
}

BOOL CWMPSettings::GetAutoStart()
{
	BOOL result;
	InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CWMPSettings::SetAutoStart(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x65, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CString CWMPSettings::GetBaseURL()
{
	CString result;
	InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CWMPSettings::SetBaseURL(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x6c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString CWMPSettings::GetDefaultFrame()
{
	CString result;
	InvokeHelper(0x6d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CWMPSettings::SetDefaultFrame(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x6d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL CWMPSettings::GetInvokeURLs()
{
	BOOL result;
	InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CWMPSettings::SetInvokeURLs(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CWMPSettings::GetMute()
{
	BOOL result;
	InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CWMPSettings::SetMute(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x68, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long CWMPSettings::GetPlayCount()
{
	long result;
	InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CWMPSettings::SetPlayCount(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x69, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

double CWMPSettings::GetRate()
{
	double result;
	InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CWMPSettings::SetRate(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x6a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

long CWMPSettings::GetBalance()
{
	long result;
	InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CWMPSettings::SetBalance(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x66, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CWMPSettings::GetVolume()
{
	long result;
	InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CWMPSettings::SetVolume(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x6b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL CWMPSettings::getMode(LPCTSTR bstrMode)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x6e, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		bstrMode);
	return result;
}

void CWMPSettings::setMode(LPCTSTR bstrMode, BOOL varfMode)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL;
	InvokeHelper(0x6f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bstrMode, varfMode);
}

BOOL CWMPSettings::GetEnableErrorDialogs()
{
	BOOL result;
	InvokeHelper(0x70, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CWMPSettings::SetEnableErrorDialogs(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x70, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}
