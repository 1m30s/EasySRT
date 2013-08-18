#ifndef __HANDLE_INI__
#define __HANDLE_INI__

	class CHandleINI{
	private:
		char MyPath[512];
	public:
		CHandleINI();
		void Init(HINSTANCE hInst);
		void Write(const char* section, const char* key, const char* word);
		void Read(const char* section, const char* key, char* word, DWORD size);
		void WriteInt(const char* section, const char* key, const int d);
		int ReadInt(const char* section, const char* key);
	};

#endif