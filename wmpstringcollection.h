#if !defined(AFX_WMPSTRINGCOLLECTION_H__0A43D174_8A00_445E_BAED_70A8D1FF3077__INCLUDED_)
#define AFX_WMPSTRINGCOLLECTION_H__0A43D174_8A00_445E_BAED_70A8D1FF3077__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ �ɂ���Ď����������ꂽ IDispatch ���b�v �N���X

// ����: ���̃t�@�C���̓��e��ҏW���Ȃ��ł��������B ���̃N���X���ēx
//  Microsoft Visual C++ �Ő������ꂽ�ꍇ�A�ύX���㏑�����܂��B

/////////////////////////////////////////////////////////////////////////////
// CWMPStringCollection ���b�v �N���X

class CWMPStringCollection : public COleDispatchDriver
{
public:
	CWMPStringCollection() {}		// COleDispatchDriver �f�t�H���g �R���X�g���N�V����
	CWMPStringCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPStringCollection(const CWMPStringCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// �A�g���r���[�g
public:

// �I�y���[�V����
public:
	long GetCount();
	CString Item(long lIndex);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_WMPSTRINGCOLLECTION_H__0A43D174_8A00_445E_BAED_70A8D1FF3077__INCLUDED_)
