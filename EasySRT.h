// EasySRT.h : EASYSRT �A�v���P�[�V�����̃��C�� �w�b�_�[ �t�@�C���ł��B
//

#if !defined(AFX_EASYSRT_H__788E4D4C_5D9E_4E68_898A_01CA38A41782__INCLUDED_)
#define AFX_EASYSRT_H__788E4D4C_5D9E_4E68_898A_01CA38A41782__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// ���C�� �V���{��

/////////////////////////////////////////////////////////////////////////////
// CEasySRTApp:
// ���̃N���X�̓���̒�`�Ɋւ��Ă� EasySRT.cpp �t�@�C�����Q�Ƃ��Ă��������B
//

class CEasySRTApp : public CWinApp
{
public:
	CEasySRTApp();

// �I�[�o�[���C�h
	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂��B
	//{{AFX_VIRTUAL(CEasySRTApp)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

// �C���v�������e�[�V����

	//{{AFX_MSG(CEasySRTApp)
		// ���� - ClassWizard �͂��̈ʒu�Ƀ����o�֐���ǉ��܂��͍폜���܂��B
		//        ���̈ʒu�ɐ��������R�[�h��ҏW���Ȃ��ł��������B
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_EASYSRT_H__788E4D4C_5D9E_4E68_898A_01CA38A41782__INCLUDED_)
