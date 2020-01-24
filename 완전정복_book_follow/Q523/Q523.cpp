#include <stdio.h>
//#incldue <iostream>
#define DEBUG 1

int T=0, N=0, M=0;
int P[3001];
int Answer;

void dfs(int idx, int sum) {
	//puts("ch");
	if(idx == M) {
		if(sum>Answer) {
			Answer = sum;
			
		}
	}
	
	//searching condition
	else {
		
		if(P[idx] <= M) {
			dfs(P[idx], sum+1);
			
		}
		else {
			//puts("InfLoop Here");
		}	
	
	}
	
}


int main() {
	FILE * quot;
	quot = freopen("Q523_input.txt", "r", stdin);
	
	if(quot == 0) {
		puts("No File exited");
	}
	
	scanf("%d", &T);
	printf("T:%d\n",T);
	for(int test_case=1 ; test_case<=T ; test_case++ ) {
		scanf("%d %d", &N, &M);
		printf("N:%d ,M:%d\n",N,M);
		for(int i=1 ; i<=(N-1) ; i++) {
			scanf("%d", &P[i]);
			printf("P[%d]:%d  ",i,P[i]);
		}
		puts("");
		Answer = -1; // cannot find any wayout
		
		for(int i=1 ; i<M ; i++) {
			dfs(i,0);
		}
		printf("\n[OUTPUT] : #%d %d\n",test_case, Answer);
	}
	
	fclose(quot);
	return 0;
}
