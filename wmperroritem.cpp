// Microsoft Visual C++ �Ŏ����������ꂽ IDispatch ���b�v �N���X

// ����: ���̃t�@�C���̓��e��ҏW���Ȃ��ł��������B ���̃N���X���ēx
//  Microsoft Visual C++ �Ő������ꂽ�ꍇ�A�ύX���㏑�����܂��B


#include "stdafx.h"
#include "wmperroritem.h"


/////////////////////////////////////////////////////////////////////////////
// CWMPErrorItem �v���p�e�B

/////////////////////////////////////////////////////////////////////////////
// CWMPErrorItem �I�y���[�V����

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
