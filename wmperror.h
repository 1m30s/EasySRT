#if !defined(AFX_WMPERROR_H__01FAAC22_5049_4BC5_B780_A6D899147D3E__INCLUDED_)
#define AFX_WMPERROR_H__01FAAC22_5049_4BC5_B780_A6D899147D3E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ �ɂ���Ď����������ꂽ IDispatch ���b�v �N���X

// ����: ���̃t�@�C���̓��e��ҏW���Ȃ��ł��������B ���̃N���X���ēx
//  Microsoft Visual C++ �Ő������ꂽ�ꍇ�A�ύX���㏑�����܂��B


// ���̃C���^�[�t�F�C�X�ɂ���ĎQ�Ƃ����f�B�X�p�b�` �C���^�[�t�F�C�X�B
class CWMPErrorItem;

/////////////////////////////////////////////////////////////////////////////
// CWMPError ���b�v �N���X

class CWMPError : public COleDispatchDriver
{
public:
	CWMPError() {}		// COleDispatchDriver �f�t�H���g �R���X�g���N�V����
	CWMPError(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPError(const CWMPError& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// �A�g���r���[�g
public:

// �I�y���[�V����
public:
	void clearErrorQueue();
	long GetErrorCount();
	CWMPErrorItem GetItem(long dwIndex);
	void webHelp();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_WMPERROR_H__01FAAC22_5049_4BC5_B780_A6D899147D3E__INCLUDED_)
