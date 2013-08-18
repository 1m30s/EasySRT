#if !defined(AFX_WMPPLAYLISTCOLLECTION_H__FB02D274_CA84_4907_ACC0_95B5D4AA5F74__INCLUDED_)
#define AFX_WMPPLAYLISTCOLLECTION_H__FB02D274_CA84_4907_ACC0_95B5D4AA5F74__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ �ɂ���Ď����������ꂽ IDispatch ���b�v �N���X

// ����: ���̃t�@�C���̓��e��ҏW���Ȃ��ł��������B ���̃N���X���ēx
//  Microsoft Visual C++ �Ő������ꂽ�ꍇ�A�ύX���㏑�����܂��B


// ���̃C���^�[�t�F�C�X�ɂ���ĎQ�Ƃ����f�B�X�p�b�` �C���^�[�t�F�C�X�B
class CWMPPlaylist;
class CWMPPlaylistArray;

/////////////////////////////////////////////////////////////////////////////
// CWMPPlaylistCollection ���b�v �N���X

class CWMPPlaylistCollection : public COleDispatchDriver
{
public:
	CWMPPlaylistCollection() {}		// COleDispatchDriver �f�t�H���g �R���X�g���N�V����
	CWMPPlaylistCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPPlaylistCollection(const CWMPPlaylistCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// �A�g���r���[�g
public:

// �I�y���[�V����
public:
	CWMPPlaylist newPlaylist(LPCTSTR bstrName);
	CWMPPlaylistArray getAll();
	CWMPPlaylistArray getByName(LPCTSTR bstrName);
	void remove(LPDISPATCH pItem);
	void setDeleted(LPDISPATCH pItem, BOOL varfIsDeleted);
	BOOL isDeleted(LPDISPATCH pItem);
	CWMPPlaylist importPlaylist(LPDISPATCH pItem);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_WMPPLAYLISTCOLLECTION_H__FB02D274_CA84_4907_ACC0_95B5D4AA5F74__INCLUDED_)
