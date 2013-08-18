// Microsoft Visual C++ で自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。


#include "stdafx.h"
#include "wmpcdrom.h"

// このインターフェイスによって参照されるディスパッチ インターフェイス
#include "wmpplaylist.h"


/////////////////////////////////////////////////////////////////////////////
// CWMPCdrom プロパティ

/////////////////////////////////////////////////////////////////////////////
// CWMPCdrom オペレーション

CString CWMPCdrom::GetDriveSpecifier()
{
	CString result;
	InvokeHelper(0xfb, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CWMPPlaylist CWMPCdrom::GetPlaylist()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xfc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CWMPPlaylist(pDispatch);
}

void CWMPCdrom::eject()
{
	InvokeHelper(0xfd, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}
