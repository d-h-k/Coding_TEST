#include <cstdio>
#include <queue>
#include <cstring>
#define DEBUG 1

using namespace std;

queue <pair <pair <int, int >,int >> que;
int MAT[1001][1001];
int dr[] = {};
int dc[] = {};

int T=0, N=0, M=0, Answer=0;
int S_r=0, S_c=0, E_r=0, E_c=0;

int main() {
	
	FILE * fp;
	fp = freopen("Q526_input.txt","r",stdin);
	if(DEBUG && fp == 0) {
		puts("No File Existed");
	}
	
	scanf("%d", &T);
	for(int test_case=1 ; test_case<=T ; test_case++ ) {
		memset(MAT,0,sizeof(MAT));
		while(!que.empty()) {
			que.pop();
		}
		scanf("%d %d", &N, &M);
		scanf("%d %d %d %d",&S_r,&S_c,&E_r,&E_c);
		
		//시작점 S_r, S_c, 이동횟수 0 삽입
		que.push(make_pair(make_pair(S_r,S_c),0));
		MAT[S_r][S_c] = 1;
		for(int i=1 ; i<=N ; i++) {
			for(int j=1 ; j<=M ; j++) {
				scanf("%d", &MAT[i][j]);
			}
		} 
		Answer = -1;
		while(!que.empty()) {
			int now_row = que.front().first.first;
			int now_col = que.front().first.second;
			int now_cost = que.front().second;
			que.pop();
			if(now_row == E_r && now_col == E_c) {
				Answer = now_cost;
				break;
			}
			else {
				for(int i=0 ; i<4 ; i++) {
					int nxt_row = now_row + dr[i];
					int nxt_col = now_col + dc[i];
					int nxt_cost = now_cost + 1;
					//이동지점이 격자 안에 있는 경우
					if(nxt_row >= 1 && nxt_row <= N
						&& nxt_col>= 1 && nxt_col<=M) {
							if(MAT[nxt_row][nxt_col] == 0) {
								MAT[nxt_row][nxt_col] = 1;
								que.push(make_pair(make_pair(nxt_row,nxt_col), nxt_cost));
							}
						} 
				}
			}
		}
		//print answer
		printf("#%d %d\n",test_case, Answer);
	}
	
	
	return 0;
}
