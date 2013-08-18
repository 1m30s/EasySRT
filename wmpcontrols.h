#if !defined(AFX_WMPCONTROLS_H__1CD8A358_16F0_4BC9_A1E9_B5041EF6EC0C__INCLUDED_)
#define AFX_WMPCONTROLS_H__1CD8A358_16F0_4BC9_A1E9_B5041EF6EC0C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ によって自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。


// このインターフェイスによって参照されるディスパッチ インターフェイス。
class CWMPMedia;

/////////////////////////////////////////////////////////////////////////////
// CWMPControls ラップ クラス

class CWMPControls : public COleDispatchDriver
{
public:
	CWMPControls() {}		// COleDispatchDriver デフォルト コンストラクション
	CWMPControls(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPControls(const CWMPControls& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// アトリビュート
public:

// オペレーション
public:
	BOOL GetIsAvailable(LPCTSTR bstrItem);
	void play();
	void stop();
	void pause();
	void fastForward();
	void fastReverse();
	double GetCurrentPosition();
	void SetCurrentPosition(double newValue);
	CString GetCurrentPositionString();
	void next();
	void previous();
	CWMPMedia GetCurrentItem();
	void SetCurrentItem(LPDISPATCH newValue);
	long GetCurrentMarker();
	void SetCurrentMarker(long nNewValue);
	void playItem(LPDISPATCH pIWMPMedia);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_WMPCONTROLS_H__1CD8A358_16F0_4BC9_A1E9_B5041EF6EC0C__INCLUDED_)
