// Microsoft Visual C++ �Ŏ����������ꂽ IDispatch ���b�v �N���X

// ����: ���̃t�@�C���̓��e��ҏW���Ȃ��ł��������B ���̃N���X���ēx
//  Microsoft Visual C++ �Ő������ꂽ�ꍇ�A�ύX���㏑�����܂��B


#include "stdafx.h"
#include "wmpplaylistarray.h"

// ���̃C���^�[�t�F�C�X�ɂ���ĎQ�Ƃ����f�B�X�p�b�` �C���^�[�t�F�C�X
#include "wmpplaylist.h"


/////////////////////////////////////////////////////////////////////////////
// CWMPPlaylistArray �v���p�e�B

/////////////////////////////////////////////////////////////////////////////
// CWMPPlaylistArray �I�y���[�V����

long CWMPPlaylistArray::GetCount()
{
	long result;
	InvokeHelper(0x1f5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CWMPPlaylist CWMPPlaylistArray::Item(long lIndex)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1f6, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		lIndex);
	return CWMPPlaylist(pDispatch);
}
