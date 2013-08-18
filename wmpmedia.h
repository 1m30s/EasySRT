#if !defined(AFX_WMPMEDIA_H__01788C7F_01AB_40EF_BD55_5F2EE6BA3F1A__INCLUDED_)
#define AFX_WMPMEDIA_H__01788C7F_01AB_40EF_BD55_5F2EE6BA3F1A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ によって自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。

/////////////////////////////////////////////////////////////////////////////
// CWMPMedia ラップ クラス

class CWMPMedia : public COleDispatchDriver
{
public:
	CWMPMedia() {}		// COleDispatchDriver デフォルト コンストラクション
	CWMPMedia(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPMedia(const CWMPMedia& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// アトリビュート
public:

// オペレーション
public:
	BOOL GetIsIdentical(LPDISPATCH pIWMPMedia);
	CString GetSourceURL();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	long GetImageSourceWidth();
	long GetImageSourceHeight();
	long GetMarkerCount();
	double getMarkerTime(long MarkerNum);
	CString getMarkerName(long MarkerNum);
	double GetDuration();
	CString GetDurationString();
	long GetAttributeCount();
	CString getAttributeName(long lIndex);
	CString getItemInfo(LPCTSTR bstrItemName);
	void setItemInfo(LPCTSTR bstrItemName, LPCTSTR bstrVal);
	CString getItemInfoByAtom(long lAtom);
	BOOL isMemberOf(LPDISPATCH pPlaylist);
	BOOL isReadOnlyItem(LPCTSTR bstrItemName);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_WMPMEDIA_H__01788C7F_01AB_40EF_BD55_5F2EE6BA3F1A__INCLUDED_)
