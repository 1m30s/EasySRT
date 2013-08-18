#if !defined(AFX_WMPERROR_H__01FAAC22_5049_4BC5_B780_A6D899147D3E__INCLUDED_)
#define AFX_WMPERROR_H__01FAAC22_5049_4BC5_B780_A6D899147D3E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ によって自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。


// このインターフェイスによって参照されるディスパッチ インターフェイス。
class CWMPErrorItem;

/////////////////////////////////////////////////////////////////////////////
// CWMPError ラップ クラス

class CWMPError : public COleDispatchDriver
{
public:
	CWMPError() {}		// COleDispatchDriver デフォルト コンストラクション
	CWMPError(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPError(const CWMPError& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// アトリビュート
public:

// オペレーション
public:
	void clearErrorQueue();
	long GetErrorCount();
	CWMPErrorItem GetItem(long dwIndex);
	void webHelp();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_WMPERROR_H__01FAAC22_5049_4BC5_B780_A6D899147D3E__INCLUDED_)
