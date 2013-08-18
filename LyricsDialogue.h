#if !defined(AFX_LYRICSDIALOGUE_H__C0BB3792_17F8_42F0_80F8_AF7CFAB0FDE6__INCLUDED_)
#define AFX_LYRICSDIALOGUE_H__C0BB3792_17F8_42F0_80F8_AF7CFAB0FDE6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// LyricsDialogue.h : �w�b�_�[ �t�@�C��
//
#include "wmpplayer4.h"
#include "wmpcontrols.h"

/////////////////////////////////////////////////////////////////////////////
// CLyricsDialogue �_�C�A���O

class CLyricsDialogue : public CDialog
{
// �R���X�g���N�V����
public:
	void SetParam(CString* str, CString* fname, CWMPPlayer4 *pWmp);
	CLyricsDialogue(CWnd* pParent = NULL);   // �W���̃R���X�g���N�^

// �_�C�A���O �f�[�^
	//{{AFX_DATA(CLyricsDialogue)
	enum { IDD = IDD_LYRICS };
		// ����: ClassWizard �͂��̈ʒu�Ƀf�[�^ �����o��ǉ����܂��B
	//}}AFX_DATA


// �I�[�o�[���C�h
	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂��B
	//{{AFX_VIRTUAL(CLyricsDialogue)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �T�|�[�g
	//}}AFX_VIRTUAL

// �C���v�������e�[�V����
protected:

	// �������ꂽ���b�Z�[�W �}�b�v�֐�
	//{{AFX_MSG(CLyricsDialogue)
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	afx_msg void OnButton4();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	void _convd2t_ex(char* buf, double time);
	void _convd2t(char* buf,double dobdat);
	CWMPPlayer4 *pWmp;
	double m_syncList[512][2];//
	char outname[512];
	vector<CString> m_textList;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_LYRICSDIALOGUE_H__C0BB3792_17F8_42F0_80F8_AF7CFAB0FDE6__INCLUDED_)
