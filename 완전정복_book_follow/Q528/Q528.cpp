#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
#define DEBUG 1

using namespace std;

int T, N, M;
int Answer,grass;
int MAT[7][7];
int C_MAT[7][7];
int dr[] = {0,1,0,-1};
int dc[] = {1,0,-1,0};

vector <pair <int, int>>S;
queue <pair <int, int>>que;

void bfs() {
	while(!que.empty()) {
		que.pop();
	}
	for(int i=1 ; i<=N ; i++) {
		for(int j=1 ; j<N ; j++) {
			C_MAT[i][j] = MAT[i][j];
		}
	}
	int cand = 0;
	for(int i=0 ; i<S.size(); i++) {
		que.push(S[i]);
	}
	while(!que.empty()) {
		int now_row = que.front().first;
		int now_col = que.front().second;
		que.pop();
		for(int i=0 ; i<4 ; i++) {
			int nxt_row = now_row + dr[i];
			int nxt_col = now_col + dc[i];
			if(nxt_row >=1 && nxt_row <= N 
			&& nxt_col >=1 && nxt_col <=N) {
				if(C_MAT[nxt_row][nxt_col] == 0) {
					C_MAT[nxt_row][nxt_col] = -1;
					cand++;
					que.push(make_pair(nxt_row, nxt_col));
				}
			} 
		}
	}
	cand = grass - cand;
	if(Answer < cand) {
		Answer = cand;
	}
}

void dfs(int now, int cnt) {
	if(cnt == M) {
		bfs();
	}
	else {
		for(int i=now ; i<N*M ; i++) {
			int nxt_row = (i/N) + 1;
			int nxt_col = (i%N) + 1;
			if(MAT[nxt_row][nxt_col] == 0) {
				MAT[nxt_row][nxt_col] = 1;
				dfs(i+1, cnt+1);
				MAT[nxt_row][nxt_col]=0;
			}
		}
	}
}

int main() {
	FILE * fp;
	fp = freopen("Q528_input.txt","r",stdin);
	if(fp == 0) {
		if(DEBUG) {
			puts("No File existed");
		}
	}
	scanf("%d", &T);
	for(int test_case=1 ; test_case<=T ; test_case++) {
		scanf("%d %d", &N, &M);
		if(DEBUG) {
			printf("test_case:%d, N:%d, M:%d, T:%d\n",test_case, N, M, T);
		}
		for(int i=1 ; i<=N ; i++) {
			for(int j=1 ; j<=N ; j++) {
				MAT[i][j]=0;
			}
		}
		S.clear();
		Answer=0;
		grass=0;
		
		memset(MAT,0,sizeof(MAT));
		
		for(int i=1 ; i<=N ; i++) {
			for(int j=1 ; j<=N ; j++) {
				scanf("%d",&MAT[i][j]);
				if(MAT[i][j] == 2 ) {
					S.push_back(make_pair(i,j));
				} 
			}
		}
		
		if(DEBUG) {
			puts("===MAP===");
			for(int i=1 ; i<=N ; i++) {
				for(int j=1 ; j<=N ; j++) {
					printf("%d ",MAT[i][j]);
				} 
				puts("");
			}
		}
		grass = grass - M;
		dfs(0,0);
		printf("#%d %d\n",test_case,Answer);
	}
	
		
}


