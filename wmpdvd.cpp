// Microsoft Visual C++ �Ŏ����������ꂽ IDispatch ���b�v �N���X

// ����: ���̃t�@�C���̓��e��ҏW���Ȃ��ł��������B ���̃N���X���ēx
//  Microsoft Visual C++ �Ő������ꂽ�ꍇ�A�ύX���㏑�����܂��B


#include "stdafx.h"
#include "wmpdvd.h"


/////////////////////////////////////////////////////////////////////////////
// CWMPDVD �v���p�e�B

/////////////////////////////////////////////////////////////////////////////
// CWMPDVD �I�y���[�V����

BOOL CWMPDVD::GetIsAvailable(LPCTSTR bstrItem)
{
	BOOL result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, parms,
		bstrItem);
	return result;
}

CString CWMPDVD::GetDomain()
{
	CString result;
	InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CWMPDVD::topMenu()
{
	InvokeHelper(0x3eb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CWMPDVD::titleMenu()
{
	InvokeHelper(0x3ec, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CWMPDVD::back()
{
	InvokeHelper(0x3ed, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CWMPDVD::resume()
{
	InvokeHelper(0x3ee, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}
