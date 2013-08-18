// Microsoft Visual C++ で自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。


#include "stdafx.h"
#include "wmperroritem.h"


/////////////////////////////////////////////////////////////////////////////
// CWMPErrorItem プロパティ

/////////////////////////////////////////////////////////////////////////////
// CWMPErrorItem オペレーション

long CWMPErrorItem::GetErrorCode()
{
	long result;
	InvokeHelper(0x385, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString CWMPErrorItem::GetErrorDescription()
{
	CString result;
	InvokeHelper(0x386, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

VARIANT CWMPErrorItem::GetErrorContext()
{
	VARIANT result;
	InvokeHelper(0x387, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

long CWMPErrorItem::GetRemedy()
{
	long result;
	InvokeHelper(0x388, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CString CWMPErrorItem::GetCustomUrl()
{
	CString result;
	InvokeHelper(0x389, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}
