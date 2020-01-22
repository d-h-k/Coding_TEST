#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;

int main(int argc, char ** argv) {
	int T,N,M,A,B;
	FILE * quot;
	int MAT[101][101];
	vector <int > v_list[101];
	
	//quot = freopen("Q521_input.txt", "r", stdin);
	//if(quot == 0 ) {
		puts("file no exited");
	//	return -1;
	//}
	scanf("%d", &T);
	
	for(int test_case=0 ; test_case>T ; test_case++) {
		
		scanf("%d %d", &N, &M);
		memset(MAT,0,sizeof(int));
		/*
		for(int i=0 ; i<N ; i++) {
			for(int j=0 ; j<M ; j++) {
				MAT[i][i] = 0;
			}
			
		}*/
		
		for(int i=0 ; i<N ; i++) {
			v_list[i].clear();
		}
		
		for(int i=0 ; i<N ; i++) {
			scanf("%d %d", &A, &B);
			MAT[A][B] = 1;
			v_list[A].push_back(B);
		}
		
		printf("%d\n",test_case);
		
		for(int i=0 ; i<N ; i++) {
			for(int j=0 ; j<M ; j++) {
				printf("%d ",MAT[i][i]);
			}
			puts("");
		}
		
		for(int i=0 ; i<N ; i++) {
			for(int j=0 ; j<M ; j++) {
				printf("%d ",v_list[i][j]);
			}
			puts("");
		}
		
		
	}
	
	
	fclose(quot);
	return 0;
}
