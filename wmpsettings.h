#if !defined(AFX_WMPSETTINGS_H__1C28BD52_CBCE_46C5_B279_015D5F75C67D__INCLUDED_)
#define AFX_WMPSETTINGS_H__1C28BD52_CBCE_46C5_B279_015D5F75C67D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ �ɂ���Ď����������ꂽ IDispatch ���b�v �N���X

// ����: ���̃t�@�C���̓��e��ҏW���Ȃ��ł��������B ���̃N���X���ēx
//  Microsoft Visual C++ �Ő������ꂽ�ꍇ�A�ύX���㏑�����܂��B

/////////////////////////////////////////////////////////////////////////////
// CWMPSettings ���b�v �N���X

class CWMPSettings : public COleDispatchDriver
{
public:
	CWMPSettings() {}		// COleDispatchDriver �f�t�H���g �R���X�g���N�V����
	CWMPSettings(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPSettings(const CWMPSettings& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// �A�g���r���[�g
public:

// �I�y���[�V����
public:
	BOOL GetIsAvailable(LPCTSTR bstrItem);
	BOOL GetAutoStart();
	void SetAutoStart(BOOL bNewValue);
	CString GetBaseURL();
	void SetBaseURL(LPCTSTR lpszNewValue);
	CString GetDefaultFrame();
	void SetDefaultFrame(LPCTSTR lpszNewValue);
	BOOL GetInvokeURLs();
	void SetInvokeURLs(BOOL bNewValue);
	BOOL GetMute();
	void SetMute(BOOL bNewValue);
	long GetPlayCount();
	void SetPlayCount(long nNewValue);
	double GetRate();
	void SetRate(double newValue);
	long GetBalance();
	void SetBalance(long nNewValue);
	long GetVolume();
	void SetVolume(long nNewValue);
	BOOL getMode(LPCTSTR bstrMode);
	void setMode(LPCTSTR bstrMode, BOOL varfMode);
	BOOL GetEnableErrorDialogs();
	void SetEnableErrorDialogs(BOOL bNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_WMPSETTINGS_H__1C28BD52_CBCE_46C5_B279_015D5F75C67D__INCLUDED_)
