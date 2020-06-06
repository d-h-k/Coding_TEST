#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <queue>

using namespace std;

int map[101][101]={0};//a
int dist[101][101]={0};
bool check[101][101] = {false};

int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};

void dfs(int node) {
	return;	
}

void bfs(void) {
	/*
	queue<pair<int,int>> q;//making Queue
	q.push(make_pair(1,1));// push first q
	check[1][1] = true;//check arr makring
	dist[1][1] = 1;
	while( !q.empty() ) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		
		for(int k=0 ; k<4 ; k++) {
			int ny = y+dy[k];
			int nx = x+dx[k];
			if(ny>=0 && ny<m && nx>=0 && nx<n ) {
				if( (check[ny][nx] == false) && (map[ny][nx] == 1) ) {
					q.push(make_pair(nx,ny));//how (ny,nx)
					dist[nx][ny] = dist[x][y];
					check[nx][ny] = true;
					
				}
			}
		}
	}
	*/
}

int main(void) {
	const int DEBUG = 1;
	int n=0,m=0;
    
    scanf("%d %d",&n,&m);
    
	//memset(check, false, sizeof(check));
    //memset(map, 0, sizeof(map));
    
	for(int i=1 ; i<=n ; i++) {
    	for(int j=1 ; j<=m ; j++) {
    		scanf("%1d",&map[i][j]);
		}
		
	}
	
	if(DEBUG) {
		puts("DEBUG");
		printf("n:%d, m:%d",n,m);
		puts("echo");
		for(int i=1 ; i<=n ; i++) {
	    	for(int j=1 ; j<=m ; j++) {
	    		printf("%d ",map[i][j]);
			}
			puts("");
		}	
	}
	
	//bfs();
	
	queue<pair<int,int>> q;//making Queue
	q.push(make_pair(1,1));// push first q
	check[1][1] = true;//check arr makring
	dist[1][1] = 1;
	while( !q.empty() ) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		
		for(int k=0 ; k<4 ; k++) {
			int ny = y+dy[k];
			int nx = x+dx[k];
			if(ny>=0 && ny<=m && nx>=0 && nx<=n ) {
				if( (check[nx][ny] == false) && (map[nx][ny] == 1) ) {
					q.push(make_pair(nx,ny));//how (ny,nx)
					dist[nx][ny] = dist[x][y]+1;
					check[nx][ny] = true;
					
				}
			}
		}
		if(DEBUG){printf("x:%d,y:%d, dist:%d\n",x,y,dist[x][y]);}
	}
	
	printf("dist:%d\n",dist[n][m]);
	
	
	return 0;
}

