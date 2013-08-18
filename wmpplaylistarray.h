#if !defined(AFX_WMPPLAYLISTARRAY_H__7D77CD81_D4E8_465F_BF65_94C95B3F1811__INCLUDED_)
#define AFX_WMPPLAYLISTARRAY_H__7D77CD81_D4E8_465F_BF65_94C95B3F1811__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ によって自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。


// このインターフェイスによって参照されるディスパッチ インターフェイス。
class CWMPPlaylist;

/////////////////////////////////////////////////////////////////////////////
// CWMPPlaylistArray ラップ クラス

class CWMPPlaylistArray : public COleDispatchDriver
{
public:
	CWMPPlaylistArray() {}		// COleDispatchDriver デフォルト コンストラクション
	CWMPPlaylistArray(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPPlaylistArray(const CWMPPlaylistArray& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// アトリビュート
public:

// オペレーション
public:
	long GetCount();
	CWMPPlaylist Item(long lIndex);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_WMPPLAYLISTARRAY_H__7D77CD81_D4E8_465F_BF65_94C95B3F1811__INCLUDED_)
