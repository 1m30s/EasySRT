// Microsoft Visual C++ �Ŏ����������ꂽ IDispatch ���b�v �N���X

// ����: ���̃t�@�C���̓��e��ҏW���Ȃ��ł��������B ���̃N���X���ēx
//  Microsoft Visual C++ �Ő������ꂽ�ꍇ�A�ύX���㏑�����܂��B


#include "stdafx.h"
#include "wmperror.h"

// ���̃C���^�[�t�F�C�X�ɂ���ĎQ�Ƃ����f�B�X�p�b�` �C���^�[�t�F�C�X
#include "wmperroritem.h"


/////////////////////////////////////////////////////////////////////////////
// CWMPError �v���p�e�B

/////////////////////////////////////////////////////////////////////////////
// CWMPError �I�y���[�V����

void CWMPError::clearErrorQueue()
{
	InvokeHelper(0x353, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long CWMPError::GetErrorCount()
{
	long result;
	InvokeHelper(0x354, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CWMPErrorItem CWMPError::GetItem(long dwIndex)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x355, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, parms,
		dwIndex);
	return CWMPErrorItem(pDispatch);
}

void CWMPError::webHelp()
{
	InvokeHelper(0x356, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}
