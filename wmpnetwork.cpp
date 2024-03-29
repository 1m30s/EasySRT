// Microsoft Visual C++ で自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。


#include "stdafx.h"
#include "wmpnetwork.h"


/////////////////////////////////////////////////////////////////////////////
// CWMPNetwork プロパティ

/////////////////////////////////////////////////////////////////////////////
// CWMPNetwork オペレーション

long CWMPNetwork::GetBandWidth()
{
	long result;
	InvokeHelper(0x321, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CWMPNetwork::GetRecoveredPackets()
{
	long result;
	InvokeHelper(0x322, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString CWMPNetwork::GetSourceProtocol()
{
	CString result;
	InvokeHelper(0x323, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CWMPNetwork::GetReceivedPackets()
{
	long result;
	InvokeHelper(0x324, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CWMPNetwork::GetLostPackets()
{
	long result;
	InvokeHelper(0x325, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CWMPNetwork::GetReceptionQuality()
{
	long result;
	InvokeHelper(0x326, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CWMPNetwork::GetBufferingCount()
{
	long result;
	InvokeHelper(0x327, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CWMPNetwork::GetBufferingProgress()
{
	long result;
	InvokeHelper(0x328, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CWMPNetwork::GetBufferingTime()
{
	long result;
	InvokeHelper(0x329, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CWMPNetwork::SetBufferingTime(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x329, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CWMPNetwork::GetFrameRate()
{
	long result;
	InvokeHelper(0x32a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CWMPNetwork::GetMaxBitRate()
{
	long result;
	InvokeHelper(0x32b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CWMPNetwork::GetBitRate()
{
	long result;
	InvokeHelper(0x32c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CWMPNetwork::getProxySettings(LPCTSTR bstrProtocol)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x32d, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		bstrProtocol);
	return result;
}

void CWMPNetwork::setProxySettings(LPCTSTR bstrProtocol, long lProxySetting)
{
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x32e, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bstrProtocol, lProxySetting);
}

CString CWMPNetwork::getProxyName(LPCTSTR bstrProtocol)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x32f, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		bstrProtocol);
	return result;
}

void CWMPNetwork::setProxyName(LPCTSTR bstrProtocol, LPCTSTR bstrProxyName)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x330, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bstrProtocol, bstrProxyName);
}

long CWMPNetwork::getProxyPort(LPCTSTR bstrProtocol)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x331, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		bstrProtocol);
	return result;
}

void CWMPNetwork::setProxyPort(LPCTSTR bstrProtocol, long lProxyPort)
{
	static BYTE parms[] =
		VTS_BSTR VTS_I4;
	InvokeHelper(0x332, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bstrProtocol, lProxyPort);
}

CString CWMPNetwork::getProxyExceptionList(LPCTSTR bstrProtocol)
{
	CString result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x333, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		bstrProtocol);
	return result;
}

void CWMPNetwork::setProxyExceptionList(LPCTSTR bstrProtocol, LPCTSTR pbstrExceptionList)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0x334, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bstrProtocol, pbstrExceptionList);
}

BOOL CWMPNetwork::getProxyBypassForLocal(LPCTSTR bstrProtocol)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x335, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		bstrProtocol);
	return result;
}

void CWMPNetwork::setProxyBypassForLocal(LPCTSTR bstrProtocol, BOOL fBypassForLocal)
{
	static BYTE parms[] =
		VTS_BSTR VTS_BOOL;
	InvokeHelper(0x336, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 bstrProtocol, fBypassForLocal);
}

long CWMPNetwork::GetMaxBandwidth()
{
	long result;
	InvokeHelper(0x337, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CWMPNetwork::SetMaxBandwidth(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x337, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CWMPNetwork::GetDownloadProgress()
{
	long result;
	InvokeHelper(0x338, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CWMPNetwork::GetEncodedFrameRate()
{
	long result;
	InvokeHelper(0x339, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CWMPNetwork::GetFramesSkipped()
{
	long result;
	InvokeHelper(0x33a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}
