// Microsoft Visual C++ で自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。


#include "stdafx.h"
#include "wmpplaylistarray.h"

// このインターフェイスによって参照されるディスパッチ インターフェイス
#include "wmpplaylist.h"


/////////////////////////////////////////////////////////////////////////////
// CWMPPlaylistArray プロパティ

/////////////////////////////////////////////////////////////////////////////
// CWMPPlaylistArray オペレーション

long CWMPPlaylistArray::GetCount()
{
	long result;
	InvokeHelper(0x1f5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CWMPPlaylist CWMPPlaylistArray::Item(long lIndex)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1f6, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		lIndex);
	return CWMPPlaylist(pDispatch);
}
