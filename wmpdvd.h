#if !defined(AFX_WMPDVD_H__4ED03C00_FBCD_446C_B1E0_89E8C88F41F8__INCLUDED_)
#define AFX_WMPDVD_H__4ED03C00_FBCD_446C_B1E0_89E8C88F41F8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ �ɂ���Ď����������ꂽ IDispatch ���b�v �N���X

// ����: ���̃t�@�C���̓��e��ҏW���Ȃ��ł��������B ���̃N���X���ēx
//  Microsoft Visual C++ �Ő������ꂽ�ꍇ�A�ύX���㏑�����܂��B

/////////////////////////////////////////////////////////////////////////////
// CWMPDVD ���b�v �N���X

class CWMPDVD : public COleDispatchDriver
{
public:
	CWMPDVD() {}		// COleDispatchDriver �f�t�H���g �R���X�g���N�V����
	CWMPDVD(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPDVD(const CWMPDVD& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// �A�g���r���[�g
public:

// �I�y���[�V����
public:
	BOOL GetIsAvailable(LPCTSTR bstrItem);
	CString GetDomain();
	void topMenu();
	void titleMenu();
	void back();
	void resume();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_WMPDVD_H__4ED03C00_FBCD_446C_B1E0_89E8C88F41F8__INCLUDED_)
