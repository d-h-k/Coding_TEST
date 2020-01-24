#include <cstdio>
#include <queue>
#include <cstring>
#define DEBUG 1

using namespace std;
queue <pair<int, int>>que;
int T=0, S=0, E=0, Answer=0;
int visited[50001];


int main() {
	
	FILE * fp;
	fp = freopen("Q527_input.txt","r",stdin);
	if(DEBUG && fp == 0) {
		puts("No File Existed");
	}
	
	scanf("%d", &T);
	for(int test_case=1 ; test_case<=T ; test_case++ ) {
		scanf("%d %d",&S, &E);
		Answer=0;
		memset(visited,0,sizeof(visited));
	
		//queue 이용해서 넣다가 최소값 구해지면 최소값+한칸이동 해서 출력 
	
		//print answer
		printf("#%d %d\n",test_case, Answer);
	}
	
	
	return 0;
}
