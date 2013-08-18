// Microsoft Visual C++ で自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。


#include "stdafx.h"
#include "wmpstringcollection.h"


/////////////////////////////////////////////////////////////////////////////
// CWMPStringCollection プロパティ

/////////////////////////////////////////////////////////////////////////////
// CWMPStringCollection オペレーション

long CWMPStringCollection::GetCount()
{
	long result;
	InvokeHelper(0x191, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString CWMPStringCollection::Item(long lIndex)
{
	CString result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x192, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		lIndex);
	return result;
}
