// Microsoft Visual C++ �Ŏ����������ꂽ IDispatch ���b�v �N���X

// ����: ���̃t�@�C���̓��e��ҏW���Ȃ��ł��������B ���̃N���X���ēx
//  Microsoft Visual C++ �Ő������ꂽ�ꍇ�A�ύX���㏑�����܂��B


#include "stdafx.h"
#include "wmpcdrom.h"

// ���̃C���^�[�t�F�C�X�ɂ���ĎQ�Ƃ����f�B�X�p�b�` �C���^�[�t�F�C�X
#include "wmpplaylist.h"


/////////////////////////////////////////////////////////////////////////////
// CWMPCdrom �v���p�e�B

/////////////////////////////////////////////////////////////////////////////
// CWMPCdrom �I�y���[�V����

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
