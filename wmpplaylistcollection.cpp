// Microsoft Visual C++ �Ŏ����������ꂽ IDispatch ���b�v �N���X

// ����: ���̃t�@�C���̓��e��ҏW���Ȃ��ł��������B ���̃N���X���ēx
//  Microsoft Visual C++ �Ő������ꂽ�ꍇ�A�ύX���㏑�����܂��B


#include "stdafx.h"
#include "wmpplaylistcollection.h"

// ���̃C���^�[�t�F�C�X�ɂ���ĎQ�Ƃ����f�B�X�p�b�` �C���^�[�t�F�C�X
#include "wmpplaylist.h"
#include "WMPPlaylistArray.h"


/////////////////////////////////////////////////////////////////////////////
// CWMPPlaylistCollection �v���p�e�B

/////////////////////////////////////////////////////////////////////////////
// CWMPPlaylistCollection �I�y���[�V����

CWMPPlaylist CWMPPlaylistCollection::newPlaylist(LPCTSTR bstrName)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x228, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		bstrName);
	return CWMPPlaylist(pDispatch);
}

CWMPPlaylistArray CWMPPlaylistCollection::getAll()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x229, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CWMPPlaylistArray(pDispatch);
}

CWMPPlaylistArray CWMPPlaylistCollection::getByName(LPCTSTR bstrName)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x22a, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		bstrName);
	return CWMPPlaylistArray(pDispatch);
}

void CWMPPlaylistCollection::remove(LPDISPATCH pItem)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x22c, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 pItem);
}

void CWMPPlaylistCollection::setDeleted(LPDISPATCH pItem, BOOL varfIsDeleted)
{
	static BYTE parms[] =
		VTS_DISPATCH VTS_BOOL;
	InvokeHelper(0x230, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 pItem, varfIsDeleted);
}

BOOL CWMPPlaylistCollection::isDeleted(LPDISPATCH pItem)
{
	BOOL result;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x231, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms,
		pItem);
	return result;
}

CWMPPlaylist CWMPPlaylistCollection::importPlaylist(LPDISPATCH pItem)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x232, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		pItem);
	return CWMPPlaylist(pDispatch);
}
