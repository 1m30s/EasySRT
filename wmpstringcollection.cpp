// Microsoft Visual C++ �Ŏ����������ꂽ IDispatch ���b�v �N���X

// ����: ���̃t�@�C���̓��e��ҏW���Ȃ��ł��������B ���̃N���X���ēx
//  Microsoft Visual C++ �Ő������ꂽ�ꍇ�A�ύX���㏑�����܂��B


#include "stdafx.h"
#include "wmpstringcollection.h"


/////////////////////////////////////////////////////////////////////////////
// CWMPStringCollection �v���p�e�B

/////////////////////////////////////////////////////////////////////////////
// CWMPStringCollection �I�y���[�V����

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
