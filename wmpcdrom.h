#if !defined(AFX_WMPCDROM_H__8501796F_FD97_4162_9C6D_7A3E11DB54E5__INCLUDED_)
#define AFX_WMPCDROM_H__8501796F_FD97_4162_9C6D_7A3E11DB54E5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ �ɂ���Ď����������ꂽ IDispatch ���b�v �N���X

// ����: ���̃t�@�C���̓��e��ҏW���Ȃ��ł��������B ���̃N���X���ēx
//  Microsoft Visual C++ �Ő������ꂽ�ꍇ�A�ύX���㏑�����܂��B


// ���̃C���^�[�t�F�C�X�ɂ���ĎQ�Ƃ����f�B�X�p�b�` �C���^�[�t�F�C�X�B
class CWMPPlaylist;

/////////////////////////////////////////////////////////////////////////////
// CWMPCdrom ���b�v �N���X

class CWMPCdrom : public COleDispatchDriver
{
public:
	CWMPCdrom() {}		// COleDispatchDriver �f�t�H���g �R���X�g���N�V����
	CWMPCdrom(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPCdrom(const CWMPCdrom& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// �A�g���r���[�g
public:

// �I�y���[�V����
public:
	CString GetDriveSpecifier();
	CWMPPlaylist GetPlaylist();
	void eject();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_WMPCDROM_H__8501796F_FD97_4162_9C6D_7A3E11DB54E5__INCLUDED_)
