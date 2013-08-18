// LyricsDialogue.cpp : インプリメンテーション ファイル
//

#include "stdafx.h"
#include "EasySRT.h"
#include "LyricsDialogue.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLyricsDialogue ダイアログ


CLyricsDialogue::CLyricsDialogue(CWnd* pParent /*=NULL*/)
	: CDialog(CLyricsDialogue::IDD, pParent)
{
	//{{AFX_DATA_INIT(CLyricsDialogue)
		// メモ - ClassWizard はこの位置にマッピング用のマクロを追加または削除します。
	//}}AFX_DATA_INIT
}


void CLyricsDialogue::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CLyricsDialogue)
		// メモ - ClassWizard はこの位置にマッピング用のマクロを追加または削除します。
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CLyricsDialogue, CDialog)
	//{{AFX_MSG_MAP(CLyricsDialogue)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLyricsDialogue メッセージ ハンドラ

void CLyricsDialogue::OnButton1() // 同期
{
	CWMPControls c = pWmp->GetControls();
	double pos = c.GetCurrentPosition();
	CListBox* pList = (CListBox*)(GetDlgItem(IDC_LIST1));
	int i = pList->GetCurSel(); 
	if(i!=LB_ERR){
		char text[600];
		m_syncList[(int)(i/2)][i%2] = pos;

		// テキストの変更
		pList->DeleteString(i);
		_convd2t_ex(text, pos);
		if(i%2 == 0) strcat(text, m_textList[i/2]);
		pList->InsertString(i, text);
	}
	pList->SetCurSel(i+1);

}
void CLyricsDialogue::OnButton4() 
{
	CListBox* pList = (CListBox*)(GetDlgItem(IDC_LIST1));
	int i = pList->GetCurSel();
	if(i>=1) pList->SetCurSel(i-1);
}


void CLyricsDialogue::OnButton2() // 保存
{
	FILE* fp;
	int i,j;
	char buf[512], buf2[512];
	wchar_t buf3[512];// UTF-16
//	CListBox* pList = (CListBox*)(GetDlgItem(IDC_LIST1));
	if((fp = fopen(outname,"w")) != NULL){
		j=0;
		buf[0] = 0xEF; buf[1] = 0xBB; buf[2] = 0xBF; buf[3] = '\0'; //UTF-8
		fprintf(fp,buf,j);

		for(i=0;i<512;i++){
			if(m_syncList[i][0] != 0.0){
				fprintf(fp,"%d\n",j);
				_convd2t(buf,m_syncList[i][0]);
				fprintf(fp,buf);
				fprintf(fp," --> ");
				if(m_syncList[i][1] == 0.0) m_syncList[i][1] = m_syncList[i][0] + 0.0;
				_convd2t(buf,m_syncList[i][1]);
				fprintf(fp,buf);
				fprintf(fp,"\n");
//				pList->GetText(i*2, buf2);
				strcpy(buf2, m_textList[i]);
				// SJIS -> UTF-16 変換
				MultiByteToWideChar(CP_ACP, 0, buf2, -1, buf3, 512);
				// UTF-16 -> UTF-8 変換
				WideCharToMultiByte(CP_UTF8, 0, buf3, -1, buf2, 512, NULL, NULL);

				fprintf(fp,buf2);
				fprintf(fp,"\n\n");
				j++;
			}
		}
		fclose(fp);
	}

	DestroyWindow();
}

void CLyricsDialogue::OnButton3() // １秒もどる
{
	CWMPControls c = pWmp->GetControls();
	double pos = c.GetCurrentPosition();
	if(pos>1.5)
		pos -= 1.5;
	else pos = 0.0;
	c.SetCurrentPosition(pos);
}

void CLyricsDialogue::SetParam(CString *str, CString *fname, CWMPPlayer4 *pWmp)
{
	this->pWmp = pWmp;
	//歌詞インポート
	char lyr[20000];
	int i,j;
	strncpy(lyr, *str, sizeof(lyr));
	j=0;
	CListBox* pList = (CListBox*)(GetDlgItem(IDC_LIST1));
	pList->ResetContent();
	char buf[512], buf2[600];
	m_textList.clear();

	for(i=0;i<512;i++) {m_syncList[i][0]=0.0; m_syncList[i][1]=0.0;}

	int lineCnt = 0;

	for(i=0;lyr[i]!='\0';i++){
		if(lyr[i] == '\n'){
			buf[j]='\0';
			if(j!=0){
				if(strlen(buf) > 511){
					MessageBox("Error : １行の文字数は 512 行以下である必要があります。");
					pList->AddString("(Error)");
					pList->AddString("");
					m_textList.push_back("(Error)");
				}else{
					strcpy(buf2, "[--:--:--]");
					strcat(buf2, buf);
					pList->AddString(buf2);
					strcpy(buf2, "[--:--:--]");
					pList->AddString(buf2);
					m_textList.push_back(buf);
				}
				lineCnt ++;
			}
			j=0;
		}else if(lyr[i] != '\r'){
			buf[j]=lyr[i];
			j++;
		}
	}
	buf[j]='\0';
	if(j!=0){
		if(strlen(buf) > 511){
			MessageBox("Error : １行の文字数は 512 行以下である必要があります。");
			pList->AddString("(Error)");
			pList->AddString("");
			m_textList.push_back("(Error)");
		}else{
			strcpy(buf2, "[--:--:--]");
			strcat(buf2, buf);
			pList->AddString(buf2);
			strcpy(buf2, "[--:--:--]");
			pList->AddString(buf2);
			m_textList.push_back(buf);
		}
		lineCnt ++;
	}
	pList->SetCurSel(0);

	if(lineCnt > 511){
		MessageBox("Error : テキストの行数は 512 行以下である必要があります。");
	}

	strncpy(outname, *fname, 512);
	int l = strlen(outname);
	outname[l-3] = 's';
	outname[l-2] = 'r';
	outname[l-1] = 't';
}

void CLyricsDialogue::_convd2t(char *buf, double dobdat)
{
	int hour = 0;
	int min = 0;
	int sec = 0;
	double hosei = 0.46;//タイミング補正
	if(dobdat > hosei) dobdat -= hosei;
	while((dobdat - 3600.0)>=0.0){
		dobdat -= 3600.0;
		hour++;
	}
	while((dobdat - 60.0)>=0.0){
		dobdat -= 60.0;
		min++;
	}
	while((dobdat - 1.0)>=0.0){
		dobdat -= 1.0;
		sec++;
	}
	sprintf(buf,"%02d:%02d:%02d,%03d",hour,min,sec,(int)(dobdat*1000.0));
}

void CLyricsDialogue::_convd2t_ex(char *buf, double time)
{
	int hour = 0;
	int min = 0;
	int sec = 0;
	double hosei = 0.46;//タイミング補正
	if(time > hosei) time -= hosei;
	while((time - 3600.0)>=0.0){
		time -= 3600.0;
		hour++;
	}
	while((time - 60.0)>=0.0){
		time -= 60.0;
		min++;
	}
	while((time - 1.0)>=0.0){
		time -= 1.0;
		sec++;
	}
	sprintf(buf,"[%02d:%02d:%02d]",min,sec,(int)(time*100.0));
}
