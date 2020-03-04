//SWEA 2805
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

const int DEBUG = 0;

int map[51][51];
int T=0,size=0,incom=0,haflg=0;
	
int solve();

int main(int argc, char** argv)
{
	int test_case;
	FILE * fp;

	fp = freopen("input.txt", "r", stdin);
	
	if(fp==0) {
		puts("NO File Existed");
		exit(1);
	}
	scanf("%d",&T);
	
			
	//T=1;
	for(test_case = 1; test_case <= T; ++test_case)
	{
		scanf("%d",&size);
		haflg = size/2;
		
		memset(map,sizeof(map),0);
		
		for(int i=0 ; i<size ; i++) {
			for(int j=0 ; j<size ; j++) {
				scanf("%1d",&map[i][j]);
			}
		}
			
		int temp = solve();
		printf("#%d %d\n",test_case,temp);	
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
} 

int solve() {
		incom=0;
		
		for(int i=0 ; i<haflg ; i++) {
			for(int j=haflg-i ; j<=haflg+i ; j++) {
				incom+=map[i][j];
			}
		}
		
		for(int i=haflg ; i>=0 ; i--) {
			for(int j=haflg-i ; j<=haflg+i ; j++) {
				incom+=map[size-1-i][j];
			}
		}
				
		return incom;
		
		
		if(DEBUG) {
			printf("\nhaflg:%d\n",haflg);
			for(int i=0 ; i<size ; i++) {
				for(int j=0 ; j<size ; j++) {
					printf("%d ",map[i][j]);
				}
				puts("");
			}
		}
		
		
		/*
		//
		for(int i=0 ; i<=haflg ; i++) {
		
			for(int j=0 ; j<size ; j++) {
				if( ((haflg-i) <= j) && (j <= (haflg+i)) ) {
					
					incom+=map[i][j];
					if(DEBUG) {
						putc('O',stdout);
					}
				}
				else {
					if(DEBUG) {
						putc('X',stdout);
					}
				}  
			}
			if(DEBUG) {puts("");}
			//puts("");
		}
		
		for(int i=1 ; i<=haflg ; i++) {
			int j=0;
			//for(int j=0 ; j<size ; j++) {
				for(int k=0 ; k<i ; k++) {
					j++;
		 			if(DEBUG) {
						putc('X',stdout);
					}
				}
				for(int k=0 ; k<size-(i*2) ; k++) {
					j++;
					incom+=map[i+haflg-1][j];
					
					if(DEBUG) {
						putc('O',stdout);
					}
				}
				for(int k=0 ; k<i ; k++) {
					j++;
					if(DEBUG) {
						putc('X',stdout);
					}
				}
			if(DEBUG) {puts("");}
			//puts("");
		}
		return incom;
		*/
		
		
}
