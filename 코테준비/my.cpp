#include <string.h>
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char** argv)
{
	FILE * fp;
	int test_case;
	int T;
	//char * arstr[3];
	//fgets(arstr[0], 100, stdin);
	//ps = &myc;
	char * ps;
	char myc;
	fflush(stdin);
	fp = freopen("input.txt", "r", stdin);
	scanf("%d",&T);
	string mystr;
	char arr[100];
	int idxspace[3] = { 0 };
	int count=0;
	printf("T : %d",T);
	
	for (test_case = 1; test_case <= T; ++test_case)
	{
		/////////////////////////////////////////////////////////////////////////////////////////////
		///* �� �κп� �������� �˰��� ������ ���ϴ�.
		fgets(arr, 100, stdin);
		
		ps = arr;
		for (int i = 0; i < 100; i++) {
			if (arr[i] == ' ') {
				idxspace[count]= i;
				count++;
			}
		}
	}
		
	return 0;
}
