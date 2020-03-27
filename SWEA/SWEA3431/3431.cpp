#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <string>

using namespace std;

const int DEBUG = 1;
const int FILEIO = 1;

int main(void) {
	FILE * fp;
	long long T=0, L=0, U=0, X=0, ans=0;
	//
	if(FILEIO) {
		fp = freopen("sample_input.txt", "r", stdin);
		if(DEBUG) {
			if(fp==0) {
				puts("No File existed");
				exit(1);
			}
		}	
	}
	//
	
	scanf("%d", &T);
	for (int test_case=1 ; test_case<=T; test_case++) {

		scanf("%lld %lld %lld", &L, &U, &X);
		if(X>=U) {
			ans=-1;
		}
		else if(L<=X) {
			ans=0;
		}
		else {
			ans = L-X;
		}
		printf("#%d %d\n",test_case,ans);	
	}
	
	
	
	return 0;
} 
