
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
	if (DEBUG) {
		if (fp == 0) {
			puts("Nofile");
		}
	}
	scanf("%d",&T);
	string mystr;
	char arr[100];
	int idxspace[3] = { 0 };
	int count=0;
	printf("T : %d\n",T);
	for (test_case = 1; test_case <= T; ++test_case)
	{
		/////////////////////////////////////////////////////////////////////////////////////////////
		///* 이 부분에 여러분의 알고리즘 구현이 들어갑니다.
		fgets(arr, 100, stdin);
		
		ps = arr;
		for (int i = 0; i < 100; i++) {
			if (*ps+i == ' ') {
				idxspace[count]= i;
				count++;
			}
		}

	
		printf("idxspace\n 0:%d\n 1:%d\n 2:%d\n", idxspace[0],idxspace[1],idxspace[2]);


		 //*/
		 /////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}