#include <stdio.h>
#include <iostream>
#include <cstring>
//#include <cstdlib>
#define DEBUG 0
#define DBP do{if(DEBUG){printf("M:%d,N:%d,R:%d,C:%d,D:%d\n+",M,N,R,C,D);}}while(0);



int main(int argc, char ** argv) {
	FILE * quot;
	int dr[] = {-1,0,1,0};
	int dc[] = {0,1,0,-1};
	//int temp;
	int T=0, M=0, N=0, R=0, C=0, D=0;
	int Answer=0;
	int MAT[51][51]={0};
	
	quot = freopen("Q513_input.txt", "r", stdin);
	if(quot == 0) {
		printf("file no exist!");
		exit(1);
	}
	//printf("freopen return : %d\n",quot);
	
	
	scanf("%d",&T);
	for(int test_case=1 ; test_case<=T+1 ; test_case++) {
		scanf("%d %d",&M, &N);
		scanf("%d %d %d",&R, &C, &D);
		DBP
		//printf("%d\t\n",a);
		for(int i=0 ; i<M ; i++) {
			for(int j=0 ; j<N ; j++) {
				scanf("%d",&MAT[i][j]);
			}
		}
		
		if(DEBUG) {
			puts("Map");
			for(int i=0 ; i<M ; i++) {
				for(int j=0 ; j<N ; j++) {
					printf("%d ",MAT[i][j]);
				}
				puts("");
			}
			//debug
			puts("===========================================");
		}
		
		while(true) {
			MAT[R][C] = 2;
			int next_R = R;
			int next_C = C;
			int next_D = D;
			for(int i=1 ; i<=4 ; i++) {
				next_R = R+dr[next_D];
				next_C = C+dr[next_D];
				if(MAT[next_R][next_C] == 0) {
					break;
				}
				else {
					next_D = (next_D + 1)%4;
				}
			}
			if(MAT[next_R][next_C] == 0) {
				R = next_R;
				C = next_C;
				D = next_D;
				Answer++;
			
			}
			else {
				int prev_D = (D+2)%4;
				int prev_R = R+dr[prev_D];
				int prev_C = C+dc[prev_D];
				
				//
				if(MAT[prev_R][prev_C] != 1) {
					R = prev_R;
					C = prev_C;
					Answer++;
				}
				else {
					break;
				}
			}
		}		
		printf("#%d %d\n",test_case, Answer);
		
	}
	
	return fclose(quot);
}
