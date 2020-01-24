#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argv, char ** argc) {
	FILE * fp;
	int T=0,test_case=0;
	int answer = 0,temp=0;
	fp = freopen("6718_input.txt", "r", stdin);
	if (fp == 0) {
		puts("no file");
	}
	
	scanf("%d", &T);
	//printf("T:%d\n", T);
	for (int test_case = 0; test_case < T; test_case++) {
		answer = 0;
		scanf("%d", &temp);
		printf("temp:%d\n", temp);
		temp = temp / 100;
		for (int i = 0; i < 6; i++) {
			if (temp < 1) {
				answer = i;
				break;
			}
			else if (temp >= 10000) {
				answer = 5;
				break;
			}
			else {
				temp = temp / 10;
			}
		}
		


		printf("#%d %d\n", test_case, answer);
	}
	return 0;

}



/*


		if (temp < 100) {
			answer = 0;
		}
		else if (temp < 1000) {
			answer = 1;
		}
		else if (temp < 10000) {
			answer = 2;
		}
		else if (temp > 100000) {
			answer = 3;
		}
		else if (temp > 1000000) {
			answer = 4;
		}
		else {
			answer = 5;
		}

*/