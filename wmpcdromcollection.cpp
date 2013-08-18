// Microsoft Visual C++ で自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。


#include "stdafx.h"
#include "wmpcdromcollection.h"

// このインターフェイスによって参照されるディスパッチ インターフェイス
#include "WMPCdrom.h"


/////////////////////////////////////////////////////////////////////////////
// CWMPCdromCollection プロパティ

/////////////////////////////////////////////////////////////////////////////
// CWMPCdromCollection オペレーション

long CWMPCdromCollection::GetCount()
{
	long result;
	InvokeHelper(0x12d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CWMPCdrom CWMPCdromCollection::Item(long lIndex)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x12e, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		lIndex);
	return CWMPCdrom(pDispatch);
}

CWMPCdrom CWMPCdromCollection::getByDriveSpecifier(LPCTSTR bstrDriveSpecifier)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x12f, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		bstrDriveSpecifier);
	return CWMPCdrom(pDispatch);
}
