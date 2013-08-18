#if !defined(AFX_WMPPLAYLIST_H__809BFBD0_5172_47D2_9A52_1CABC4C3D438__INCLUDED_)
#define AFX_WMPPLAYLIST_H__809BFBD0_5172_47D2_9A52_1CABC4C3D438__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ �ɂ���Ď����������ꂽ IDispatch ���b�v �N���X

// ����: ���̃t�@�C���̓��e��ҏW���Ȃ��ł��������B ���̃N���X���ēx
//  Microsoft Visual C++ �Ő������ꂽ�ꍇ�A�ύX���㏑�����܂��B


// ���̃C���^�[�t�F�C�X�ɂ���ĎQ�Ƃ����f�B�X�p�b�` �C���^�[�t�F�C�X�B
class CWMPMedia;

/////////////////////////////////////////////////////////////////////////////
// CWMPPlaylist ���b�v �N���X

class CWMPPlaylist : public COleDispatchDriver
{
public:
	CWMPPlaylist() {}		// COleDispatchDriver �f�t�H���g �R���X�g���N�V����
	CWMPPlaylist(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPPlaylist(const CWMPPlaylist& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// �A�g���r���[�g
public:

// �I�y���[�V����
public:
	long GetCount();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	long GetAttributeCount();
	CString GetAttributeName(long lIndex);
	CWMPMedia GetItem(long lIndex);
	CString getItemInfo(LPCTSTR bstrName);
	void setItemInfo(LPCTSTR bstrName, LPCTSTR bstrValue);
	BOOL GetIsIdentical(LPDISPATCH pIWMPPlaylist);
	void clear();
	void insertItem(long lIndex, LPDISPATCH pIWMPMedia);
	void appendItem(LPDISPATCH pIWMPMedia);
	void removeItem(LPDISPATCH pIWMPMedia);
	void moveItem(long lIndexOld, long lIndexNew);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_WMPPLAYLIST_H__809BFBD0_5172_47D2_9A52_1CABC4C3D438__INCLUDED_)
