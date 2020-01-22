#include <cstdio>
#include <vector>
#include <cstring>
#define DEBUG 0
#define DGP do{if(DEBUG){printf("DEBUG : T:%d, N:%d, M:%d \n",T,N,M);}}while(0);
//do{printf("T:%d, M:%d, N:%d\n",T,M,N);}while(0);



using namespace std;
int T=0,N=0,M=0,A=0,B=0;
int MAT[101][101];
vector <int > v_list[101];
FILE * quot;		

int main(int argc, char ** argv) {

	quot = freopen("Q521_input.txt", "r", stdin);

	if(quot == 0 ) {
		puts("file no exited");
		return -1;
	}

	scanf("%d", &T);
	
	
	for(int test_case=1 ; test_case<=T ; test_case++) {
		
		scanf("%d %d", &N, &M);
		//scanf("%d",&N);
		//scanf("%d",&M);
		//matrix init
		//memset(MAT,0,sizeof(int));
		DGP
		
		for(int i=1 ; i<=N ; i++) {
			for(int j=1 ; j<=N ; j++) {
				MAT[i][i] = 0;
			}
			
		}
		
		//LL init
		for(int i=1 ; i<=N ; i++) {
			v_list[i].clear();
		}
		
		for(int i=1 ; i<=M ; i++) {
			scanf("%d %d", &A, &B);
			if(DEBUG) {
				printf("From DBG : A:%d ,B:%d\n",A,B);
			}
			MAT[A][B] = 1;
			v_list[A].push_back(B);
		}
		
		printf("#%d\n",test_case);
		
		for(int i=1 ; i<=N ; i++) {
			for(int j=1 ; j<=N ; j++) {
				printf("%d ",MAT[i][j]);
			}
			puts("");
		}
		
		
		for(int i=1 ; i<=N ; i++) {
			for(int j=0 ; j<v_list[i].size() ; j++) {
				printf("%d ",v_list[i][j]);
			}
			printf("\n");
		}
		puts("");
		
	}
		
	fclose(quot);
	return 0;
}
