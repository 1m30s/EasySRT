#if !defined(AFX_WMPSETTINGS_H__1C28BD52_CBCE_46C5_B279_015D5F75C67D__INCLUDED_)
#define AFX_WMPSETTINGS_H__1C28BD52_CBCE_46C5_B279_015D5F75C67D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ によって自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。

/////////////////////////////////////////////////////////////////////////////
// CWMPSettings ラップ クラス

class CWMPSettings : public COleDispatchDriver
{
public:
	CWMPSettings() {}		// COleDispatchDriver デフォルト コンストラクション
	CWMPSettings(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPSettings(const CWMPSettings& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// アトリビュート
public:

// オペレーション
public:
	BOOL GetIsAvailable(LPCTSTR bstrItem);
	BOOL GetAutoStart();
	void SetAutoStart(BOOL bNewValue);
	CString GetBaseURL();
	void SetBaseURL(LPCTSTR lpszNewValue);
	CString GetDefaultFrame();
	void SetDefaultFrame(LPCTSTR lpszNewValue);
	BOOL GetInvokeURLs();
	void SetInvokeURLs(BOOL bNewValue);
	BOOL GetMute();
	void SetMute(BOOL bNewValue);
	long GetPlayCount();
	void SetPlayCount(long nNewValue);
	double GetRate();
	void SetRate(double newValue);
	long GetBalance();
	void SetBalance(long nNewValue);
	long GetVolume();
	void SetVolume(long nNewValue);
	BOOL getMode(LPCTSTR bstrMode);
	void setMode(LPCTSTR bstrMode, BOOL varfMode);
	BOOL GetEnableErrorDialogs();
	void SetEnableErrorDialogs(BOOL bNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_WMPSETTINGS_H__1C28BD52_CBCE_46C5_B279_015D5F75C67D__INCLUDED_)
