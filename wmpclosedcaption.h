#if !defined(AFX_WMPCLOSEDCAPTION_H__F13F83F9_1CB0_4017_A348_36932FBE90FF__INCLUDED_)
#define AFX_WMPCLOSEDCAPTION_H__F13F83F9_1CB0_4017_A348_36932FBE90FF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ �ɂ���Ď����������ꂽ IDispatch ���b�v �N���X

// ����: ���̃t�@�C���̓��e��ҏW���Ȃ��ł��������B ���̃N���X���ēx
//  Microsoft Visual C++ �Ő������ꂽ�ꍇ�A�ύX���㏑�����܂��B

/////////////////////////////////////////////////////////////////////////////
// CWMPClosedCaption ���b�v �N���X

class CWMPClosedCaption : public COleDispatchDriver
{
public:
	CWMPClosedCaption() {}		// COleDispatchDriver �f�t�H���g �R���X�g���N�V����
	CWMPClosedCaption(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPClosedCaption(const CWMPClosedCaption& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// �A�g���r���[�g
public:

// �I�y���[�V����
public:
	CString GetSAMIStyle();
	void SetSAMIStyle(LPCTSTR lpszNewValue);
	CString GetSAMILang();
	void SetSAMILang(LPCTSTR lpszNewValue);
	CString GetSAMIFileName();
	void SetSAMIFileName(LPCTSTR lpszNewValue);
	CString GetCaptioningId();
	void SetCaptioningId(LPCTSTR lpszNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_WMPCLOSEDCAPTION_H__F13F83F9_1CB0_4017_A348_36932FBE90FF__INCLUDED_)
