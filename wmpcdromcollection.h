#if !defined(AFX_WMPCDROMCOLLECTION_H__31A13E23_F636_4FC8_85BB_0F9C1CDD9672__INCLUDED_)
#define AFX_WMPCDROMCOLLECTION_H__31A13E23_F636_4FC8_85BB_0F9C1CDD9672__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ �ɂ���Ď����������ꂽ IDispatch ���b�v �N���X

// ����: ���̃t�@�C���̓��e��ҏW���Ȃ��ł��������B ���̃N���X���ēx
//  Microsoft Visual C++ �Ő������ꂽ�ꍇ�A�ύX���㏑�����܂��B


// ���̃C���^�[�t�F�C�X�ɂ���ĎQ�Ƃ����f�B�X�p�b�` �C���^�[�t�F�C�X�B
class CWMPCdrom;

/////////////////////////////////////////////////////////////////////////////
// CWMPCdromCollection ���b�v �N���X

class CWMPCdromCollection : public COleDispatchDriver
{
public:
	CWMPCdromCollection() {}		// COleDispatchDriver �f�t�H���g �R���X�g���N�V����
	CWMPCdromCollection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPCdromCollection(const CWMPCdromCollection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// �A�g���r���[�g
public:

// �I�y���[�V����
public:
	long GetCount();
	CWMPCdrom Item(long lIndex);
	CWMPCdrom getByDriveSpecifier(LPCTSTR bstrDriveSpecifier);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_WMPCDROMCOLLECTION_H__31A13E23_F636_4FC8_85BB_0F9C1CDD9672__INCLUDED_)
