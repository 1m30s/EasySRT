#if !defined(AFX_WMPMEDIA_H__01788C7F_01AB_40EF_BD55_5F2EE6BA3F1A__INCLUDED_)
#define AFX_WMPMEDIA_H__01788C7F_01AB_40EF_BD55_5F2EE6BA3F1A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ �ɂ���Ď����������ꂽ IDispatch ���b�v �N���X

// ����: ���̃t�@�C���̓��e��ҏW���Ȃ��ł��������B ���̃N���X���ēx
//  Microsoft Visual C++ �Ő������ꂽ�ꍇ�A�ύX���㏑�����܂��B

/////////////////////////////////////////////////////////////////////////////
// CWMPMedia ���b�v �N���X

class CWMPMedia : public COleDispatchDriver
{
public:
	CWMPMedia() {}		// COleDispatchDriver �f�t�H���g �R���X�g���N�V����
	CWMPMedia(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPMedia(const CWMPMedia& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// �A�g���r���[�g
public:

// �I�y���[�V����
public:
	BOOL GetIsIdentical(LPDISPATCH pIWMPMedia);
	CString GetSourceURL();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	long GetImageSourceWidth();
	long GetImageSourceHeight();
	long GetMarkerCount();
	double getMarkerTime(long MarkerNum);
	CString getMarkerName(long MarkerNum);
	double GetDuration();
	CString GetDurationString();
	long GetAttributeCount();
	CString getAttributeName(long lIndex);
	CString getItemInfo(LPCTSTR bstrItemName);
	void setItemInfo(LPCTSTR bstrItemName, LPCTSTR bstrVal);
	CString getItemInfoByAtom(long lAtom);
	BOOL isMemberOf(LPDISPATCH pPlaylist);
	BOOL isReadOnlyItem(LPCTSTR bstrItemName);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_WMPMEDIA_H__01788C7F_01AB_40EF_BD55_5F2EE6BA3F1A__INCLUDED_)
