
#include "stdafx.h"
#include "HandleINI.h"

CHandleINI::CHandleINI(){
}

// Call this method first (ex. Init((HINSTANCE)GetModuleHandle(NULL));)
void CHandleINI::Init(HINSTANCE hInst){
	GetModuleFileName(hInst, MyPath, 512);
	MyPath[strlen(MyPath)-3] = 'i';
	MyPath[strlen(MyPath)-2] = 'n';
	MyPath[strlen(MyPath)-1] = 'i';
}
void CHandleINI::Write(const char* section, const char* key, const char* word){
	WritePrivateProfileString(section, key, word, MyPath);
}
void CHandleINI::Read(const char* section, const char* key, char* word, DWORD size){
	GetPrivateProfileString(section, key, "", word, size, MyPath);
}
void CHandleINI::WriteInt(const char* section, const char* key, const int d){
	char word[128];
	sprintf(word, "%d", d);
	WritePrivateProfileString(section, key, word, MyPath);
}
int CHandleINI::ReadInt(const char* section, const char* key){
	char buf[128];
	Read(section, key, buf, 128);
	return (atoi(buf));
}