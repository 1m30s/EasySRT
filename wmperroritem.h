#if !defined(AFX_WMPERRORITEM_H__57E8A6DD_6407_4E57_82D3_95735E91FDDA__INCLUDED_)
#define AFX_WMPERRORITEM_H__57E8A6DD_6407_4E57_82D3_95735E91FDDA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ �ɂ���Ď����������ꂽ IDispatch ���b�v �N���X

// ����: ���̃t�@�C���̓��e��ҏW���Ȃ��ł��������B ���̃N���X���ēx
//  Microsoft Visual C++ �Ő������ꂽ�ꍇ�A�ύX���㏑�����܂��B

/////////////////////////////////////////////////////////////////////////////
// CWMPErrorItem ���b�v �N���X

class CWMPErrorItem : public COleDispatchDriver
{
public:
	CWMPErrorItem() {}		// COleDispatchDriver �f�t�H���g �R���X�g���N�V����
	CWMPErrorItem(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPErrorItem(const CWMPErrorItem& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// �A�g���r���[�g
public:

// �I�y���[�V����
public:
	long GetErrorCode();
	CString GetErrorDescription();
	VARIANT GetErrorContext();
	long GetRemedy();
	CString GetCustomUrl();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_WMPERRORITEM_H__57E8A6DD_6407_4E57_82D3_95735E91FDDA__INCLUDED_)
