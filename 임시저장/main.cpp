/*/
#include <cstdio>
#include <stdlib.h>
#include <tchar.h>
#include <locale.h>
#include <Windows.h>
#include <string.h>
//#include <TCHAR.H>
#include <wchar.h>

#define _CRT_SECURE_NO_WARNINGS
//#ifndef _CRT_SECURE_NO_WARNINGS
//	#define _CRT_SECURE_NO_WARNINGS
//#endif // !1


#define STR_LEN 256
#define CMD_TOKEN_NUM 10

TCHAR ERROR_CMD[] = _T("'%s'는 실행할 수 있는 프로그램이 아닙니다 \n");

int CmdProcessing(void);
TCHAR * StrLower(TCHAR *);
int main(int agrc, TCHAR * argv[])
{
	_tsetlocale(LC_ALL, _T("Korean"));
	DWORD isExit;

	while (1)
	{
		isExit = CmdProcessing();
		if (isExit == TRUE)
		{
			_fputts(_T("명령어 처리를 종료합니다 \n"), stdout);
			break;
		}

	}
	return 0;
}

TCHAR cmdString[STR_LEN];
TCHAR cmdTokenList[CMD_TOKEN_NUM][STR_LEN];
TCHAR seps[] = _T(",\t\n");

int CmdProcessing(void)
{
	_fputts(_T("Best command prompt >> "), stdout);
	fgetws(cmdString,sizeof(cmdString),stdin);

	TCHAR * token = _tcstok(cmdString, seps);
	int tokenNum = 0;
	while (token != NULL) {
		_tcscpy(cmdTokenList[tokenNum++], StrLower(token));
		token = _tcstok(NULL, seps);
	}

	if( !_tcscmp(cmdTokenList[0], _T("exit"))  ) 
	{
		return TRUE;
	}
	else if (!_tcscmp(cmdTokenList[0], _T("추가 되는 명령어 1")))
	{

	}
	else if (!_tcscmp(cmdTokenList[0], _T("추가 되는 명령어 2")))
	{

	}
	else
	{
		_tprintf(ERROR_CMD, cmdTokenList[0]);
	}
	return 0;
}

TCHAR * StrLower(TCHAR *pStr) {
	TCHAR *ret = pStr;
	while (*pStr)
	{
		if (_istupper(*pStr)) {
			*pStr = _totlower(*pStr);
		}
		pStr++;
		return ret;
	}
}

/*/