#if !defined(AFX_WMPNETWORK_H__44E2DA06_BCAF_4F3D_BFC9_102313CFC251__INCLUDED_)
#define AFX_WMPNETWORK_H__44E2DA06_BCAF_4F3D_BFC9_102313CFC251__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//  Microsoft Visual C++ �ɂ���Ď����������ꂽ IDispatch ���b�v �N���X

// ����: ���̃t�@�C���̓��e��ҏW���Ȃ��ł��������B ���̃N���X���ēx
//  Microsoft Visual C++ �Ő������ꂽ�ꍇ�A�ύX���㏑�����܂��B

/////////////////////////////////////////////////////////////////////////////
// CWMPNetwork ���b�v �N���X

class CWMPNetwork : public COleDispatchDriver
{
public:
	CWMPNetwork() {}		// COleDispatchDriver �f�t�H���g �R���X�g���N�V����
	CWMPNetwork(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPNetwork(const CWMPNetwork& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// �A�g���r���[�g
public:

// �I�y���[�V����
public:
	long GetBandWidth();
	long GetRecoveredPackets();
	CString GetSourceProtocol();
	long GetReceivedPackets();
	long GetLostPackets();
	long GetReceptionQuality();
	long GetBufferingCount();
	long GetBufferingProgress();
	long GetBufferingTime();
	void SetBufferingTime(long nNewValue);
	long GetFrameRate();
	long GetMaxBitRate();
	long GetBitRate();
	long getProxySettings(LPCTSTR bstrProtocol);
	void setProxySettings(LPCTSTR bstrProtocol, long lProxySetting);
	CString getProxyName(LPCTSTR bstrProtocol);
	void setProxyName(LPCTSTR bstrProtocol, LPCTSTR bstrProxyName);
	long getProxyPort(LPCTSTR bstrProtocol);
	void setProxyPort(LPCTSTR bstrProtocol, long lProxyPort);
	CString getProxyExceptionList(LPCTSTR bstrProtocol);
	void setProxyExceptionList(LPCTSTR bstrProtocol, LPCTSTR pbstrExceptionList);
	BOOL getProxyBypassForLocal(LPCTSTR bstrProtocol);
	void setProxyBypassForLocal(LPCTSTR bstrProtocol, BOOL fBypassForLocal);
	long GetMaxBandwidth();
	void SetMaxBandwidth(long nNewValue);
	long GetDownloadProgress();
	long GetEncodedFrameRate();
	long GetFramesSkipped();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_WMPNETWORK_H__44E2DA06_BCAF_4F3D_BFC9_102313CFC251__INCLUDED_)
