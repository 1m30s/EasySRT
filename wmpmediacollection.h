#if !defined(AFX_WMPMEDIACOLLECTION_H__AC5D4AD1_0920_44F7_B52B_48A96704EEB2__INCLUDED_)
#define AFX_WMPMEDIACOLLECTION_H__AC5D4AD1_0920_44F7_B52B_48A96704EEB2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ �ɂ���Ď����������ꂽ IDispatch ���b�v �N���X

// ����: ���̃t�@�C���̓��e��ҏW���Ȃ��ł��������B ���̃N���X���ēx
//  Microsoft Visual C++ �Ő������ꂽ�ꍇ�A�ύX���㏑�����܂��B


// ���̃C���^�[�t�F�C�X�ɂ���ĎQ�Ƃ����f�B�X�p�b�` �C���^�[�t�F�C�X�B
class CWMPMedia;
class CWMPPlaylist;
class CWMPStringCollection;

/////////////////////////////////////////////////////////////////////////////
// CWMPMediaCollection ���b�v �N���X

class CWMPMediaCollection : public COleDispatchDriver
{
public:
	CWMPMediaCollection() {}		// COleDispatchDriver �f�t�H���g �R���X�g���N�V����
	CWMPMediaCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPMediaCollection(const CWMPMediaCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// �A�g���r���[�g
public:

// �I�y���[�V����
public:
	CWMPMedia add(LPCTSTR bstrURL);
	CWMPPlaylist getAll();
	CWMPPlaylist getByName(LPCTSTR bstrName);
	CWMPPlaylist getByGenre(LPCTSTR bstrGenre);
	CWMPPlaylist getByAuthor(LPCTSTR bstrAuthor);
	CWMPPlaylist getByAlbum(LPCTSTR bstrAlbum);
	CWMPPlaylist getByAttribute(LPCTSTR bstrAttribute, LPCTSTR bstrValue);
	void remove(LPDISPATCH pItem, BOOL varfDeleteFile);
	CWMPStringCollection getAttributeStringCollection(LPCTSTR bstrAttribute, LPCTSTR bstrMediaType);
	long getMediaAtom(LPCTSTR bstrItemName);
	void setDeleted(LPDISPATCH pItem, BOOL varfIsDeleted);
	BOOL isDeleted(LPDISPATCH pItem);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_WMPMEDIACOLLECTION_H__AC5D4AD1_0920_44F7_B52B_48A96704EEB2__INCLUDED_)
