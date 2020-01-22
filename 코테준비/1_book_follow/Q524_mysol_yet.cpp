#include <cstdio>
#define DEBUG 0
//#include 
// T= num of case, N=count of city, M=starting point, MAT[][] = graph table
int T=0, N=0, M=0,temp=0,Answer;
int MAT[11][11]={0};
int main() {
	int test_case=0;
	FILE * fp;
	fp = freopen("Q524_input.txt","r",stdin);
	if(fp == 0) {
		puts("No File Exited");
	}
	
	scanf("%d",&T);
	for(int test_case=0 ; test_case<T ; test_case++) {
		scanf("%d %d",&N, &M);
		for(int i=1; i<=N ; i++) {
			for(int j=1 ; j<=N ; j++) {
				scanf("%d",&temp);
				MAT[i][j] = temp;
			}
		}
	
		printf("#%d %d\n",(test_case+1),Answer );
		if(DEBUG) {
			for(int i=1; i<=N ; i++) {
				for(int j=1 ; j<=N ; j++) {
					printf("%d ",MAT[i][j]);
				
				}
				puts("");
			}
		}
	}
	
	
	
	
	return 0;
}
