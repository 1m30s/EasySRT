// Microsoft Visual C++ で自動生成された IDispatch ラップ クラス

// メモ: このファイルの内容を編集しないでください。 このクラスが再度
//  Microsoft Visual C++ で生成された場合、変更を上書きします。


#include "stdafx.h"
#include "wmpplayerapplication.h"


/////////////////////////////////////////////////////////////////////////////
// CWMPPlayerApplication プロパティ

/////////////////////////////////////////////////////////////////////////////
// CWMPPlayerApplication オペレーション

void CWMPPlayerApplication::switchToPlayerApplication()
{
	InvokeHelper(0x44d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CWMPPlayerApplication::switchToControl()
{
	InvokeHelper(0x44e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL CWMPPlayerApplication::GetPlayerDocked()
{
	BOOL result;
	InvokeHelper(0x44f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

BOOL CWMPPlayerApplication::GetHasDisplay()
{
	BOOL result;
	InvokeHelper(0x450, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}
