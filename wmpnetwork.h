#if !defined(AFX_WMPNETWORK_H__44E2DA06_BCAF_4F3D_BFC9_102313CFC251__INCLUDED_)
#define AFX_WMPNETWORK_H__44E2DA06_BCAF_4F3D_BFC9_102313CFC251__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ によって自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。

/////////////////////////////////////////////////////////////////////////////
// CWMPNetwork ラップ クラス

class CWMPNetwork : public COleDispatchDriver
{
public:
	CWMPNetwork() {}		// COleDispatchDriver デフォルト コンストラクション
	CWMPNetwork(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPNetwork(const CWMPNetwork& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// アトリビュート
public:

// オペレーション
public:
	long GetBandWidth();
	long GetRecoveredPackets();
	CString GetSourceProtocol();
	long GetReceivedPackets();
	long GetLostPackets();
	long GetReceptionQuality();
	long GetBufferingCount();
	long GetBufferingProgress();
	long GetBufferingTime();
	void SetBufferingTime(long nNewValue);
	long GetFrameRate();
	long GetMaxBitRate();
	long GetBitRate();
	long getProxySettings(LPCTSTR bstrProtocol);
	void setProxySettings(LPCTSTR bstrProtocol, long lProxySetting);
	CString getProxyName(LPCTSTR bstrProtocol);
	void setProxyName(LPCTSTR bstrProtocol, LPCTSTR bstrProxyName);
	long getProxyPort(LPCTSTR bstrProtocol);
	void setProxyPort(LPCTSTR bstrProtocol, long lProxyPort);
	CString getProxyExceptionList(LPCTSTR bstrProtocol);
	void setProxyExceptionList(LPCTSTR bstrProtocol, LPCTSTR pbstrExceptionList);
	BOOL getProxyBypassForLocal(LPCTSTR bstrProtocol);
	void setProxyBypassForLocal(LPCTSTR bstrProtocol, BOOL fBypassForLocal);
	long GetMaxBandwidth();
	void SetMaxBandwidth(long nNewValue);
	long GetDownloadProgress();
	long GetEncodedFrameRate();
	long GetFramesSkipped();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_WMPNETWORK_H__44E2DA06_BCAF_4F3D_BFC9_102313CFC251__INCLUDED_)
