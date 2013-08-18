#if !defined(AFX_WMPCDROM_H__8501796F_FD97_4162_9C6D_7A3E11DB54E5__INCLUDED_)
#define AFX_WMPCDROM_H__8501796F_FD97_4162_9C6D_7A3E11DB54E5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ によって自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。


// このインターフェイスによって参照されるディスパッチ インターフェイス。
class CWMPPlaylist;

/////////////////////////////////////////////////////////////////////////////
// CWMPCdrom ラップ クラス

class CWMPCdrom : public COleDispatchDriver
{
public:
	CWMPCdrom() {}		// COleDispatchDriver デフォルト コンストラクション
	CWMPCdrom(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPCdrom(const CWMPCdrom& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// アトリビュート
public:

// オペレーション
public:
	CString GetDriveSpecifier();
	CWMPPlaylist GetPlaylist();
	void eject();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_WMPCDROM_H__8501796F_FD97_4162_9C6D_7A3E11DB54E5__INCLUDED_)
