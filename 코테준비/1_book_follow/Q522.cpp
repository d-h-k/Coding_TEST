#include <cstdio>
#include <cstring>
#include <vector>

#define DEBUG 1


int T=0, N=0;
int visted[7];
int Answer[7];

int dfs(int depth) {
	
	//termination condition 
	if(depth == N+1) { // if N=3이라면 123 까지의 수 중에서 선택, 깊이는 3단계까지 4단계라면 리턴해서 재귀 끝 
		//printf("N:%d, depth:%d",N,depth);
		for(int i=1 ; i<=N ; i++) {
			printf("%d ", Answer[i]); 
		}
		printf("\n");
	}
	else {
		
		for(int i=1 ; i<=N ; i++) {
			if(visted[i] == 0) {
	        	visted[i] = 1;
            	Answer[depth] = i;
            	dfs(depth + 1);
            	visted[i] = 0;
            	Answer[depth] = 0;
			}
		}
	}
}

int main(int argc, char ** argv) {
	int ret=0,T=0,test_case=0;
	FILE * quot;
	
	quot = freopen("Q522_input.txt","r",stdin);
	if(quot==0) {
		puts("No file exitsted");
		return -1;
	}
	
	scanf("%d",&T);
	for(int test_case=1 ; test_case<=T ; test_case++ ) {
        scanf("%d", &N);
        if(DEBUG) {
        	printf("T:%d, N:%d, test_case:%d\n",T,N,test_case);
		}
		else{}
        for(int i=0 ; i<=N ; i++) {
            visted[i]=0;
        }
        printf("#%d\n", test_case);
        dfs(1);
    }    
	
	
	return fclose(quot);
}

