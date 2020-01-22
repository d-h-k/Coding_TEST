queue <int> que;
int MAT[1004][1004];
int visited[1004];
int S,E,N;

void bfs() {
	que.push(S);
	visited[S] =1;
	while(!que.empty() {
		int now = que.front();
		que.pop();
		if(now == E) {
			break;
		}
		else {
			for(int i=1 ; i<=N ; i++) {
				int nxt = MAT[now][i];
				if(visited[nxt] == 0 && MAT[now][i]==1 ) {
					visited[nxt] = 1;
					que.push(nxt);
				}
			}
		}
	}
}
