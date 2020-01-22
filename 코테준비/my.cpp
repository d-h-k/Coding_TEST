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
		///* 이 부분에 여러분의 알고리즘 구현이 들어갑니다.
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
