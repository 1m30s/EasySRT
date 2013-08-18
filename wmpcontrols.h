#if !defined(AFX_WMPCONTROLS_H__1CD8A358_16F0_4BC9_A1E9_B5041EF6EC0C__INCLUDED_)
#define AFX_WMPCONTROLS_H__1CD8A358_16F0_4BC9_A1E9_B5041EF6EC0C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ �ɂ���Ď����������ꂽ IDispatch ���b�v �N���X

// ����: ���̃t�@�C���̓��e��ҏW���Ȃ��ł��������B ���̃N���X���ēx
//  Microsoft Visual C++ �Ő������ꂽ�ꍇ�A�ύX���㏑�����܂��B


// ���̃C���^�[�t�F�C�X�ɂ���ĎQ�Ƃ����f�B�X�p�b�` �C���^�[�t�F�C�X�B
class CWMPMedia;

/////////////////////////////////////////////////////////////////////////////
// CWMPControls ���b�v �N���X

class CWMPControls : public COleDispatchDriver
{
public:
	CWMPControls() {}		// COleDispatchDriver �f�t�H���g �R���X�g���N�V����
	CWMPControls(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPControls(const CWMPControls& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// �A�g���r���[�g
public:

// �I�y���[�V����
public:
	BOOL GetIsAvailable(LPCTSTR bstrItem);
	void play();
	void stop();
	void pause();
	void fastForward();
	void fastReverse();
	double GetCurrentPosition();
	void SetCurrentPosition(double newValue);
	CString GetCurrentPositionString();
	void next();
	void previous();
	CWMPMedia GetCurrentItem();
	void SetCurrentItem(LPDISPATCH newValue);
	long GetCurrentMarker();
	void SetCurrentMarker(long nNewValue);
	void playItem(LPDISPATCH pIWMPMedia);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_WMPCONTROLS_H__1CD8A358_16F0_4BC9_A1E9_B5041EF6EC0C__INCLUDED_)
