#if !defined(AFX_WMPPLAYERAPPLICATION_H__27D1AFD1_A804_47A6_90CD_649DFB2F8877__INCLUDED_)
#define AFX_WMPPLAYERAPPLICATION_H__27D1AFD1_A804_47A6_90CD_649DFB2F8877__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ �ɂ���Ď����������ꂽ IDispatch ���b�v �N���X

// ����: ���̃t�@�C���̓��e��ҏW���Ȃ��ł��������B ���̃N���X���ēx
//  Microsoft Visual C++ �Ő������ꂽ�ꍇ�A�ύX���㏑�����܂��B

/////////////////////////////////////////////////////////////////////////////
// CWMPPlayerApplication ���b�v �N���X

class CWMPPlayerApplication : public COleDispatchDriver
{
public:
	CWMPPlayerApplication() {}		// COleDispatchDriver �f�t�H���g �R���X�g���N�V����
	CWMPPlayerApplication(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPPlayerApplication(const CWMPPlayerApplication& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// �A�g���r���[�g
public:

// �I�y���[�V����
public:
	void switchToPlayerApplication();
	void switchToControl();
	BOOL GetPlayerDocked();
	BOOL GetHasDisplay();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_WMPPLAYERAPPLICATION_H__27D1AFD1_A804_47A6_90CD_649DFB2F8877__INCLUDED_)
