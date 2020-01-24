#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argv, char ** argc) {
	FILE * fp;
	int T=0,test_case=0;
	int answer = 0;
	fp = freopen("6718_input.txt", "r", stdin);
	
	scanf("%d", &T);
	for (int test_case = 0; test_case < T; test_case++) {
		
		printf("#%d", test_case);
	}
	return 0;

}