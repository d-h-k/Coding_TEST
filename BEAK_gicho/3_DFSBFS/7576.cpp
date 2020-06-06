#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int const DEBUG = 0;

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

int x=0, y=0, nx=0, ny=0;
int m=0, n=0, ans=0;
int map[1001][1001]={0};
int dist[1001][1001]={-1};
queue<pair<int,int>> q;

int main(void) {
	scanf("%d %d",&m,&n);
	
	
	for(int i=1 ; i<=n ; i++) {
		for(int j=1 ; j<=m ; j++) {
			scanf("%d",&map[i][j]);
			dist[i][j] = -1;
			//if(DEBUG) { printf("%d ",map[i][j]);}
			if(map[i][j]==1) {
				q.push(make_pair(i,j));
				dist[i][j]=0;
			} 
			
		}
		
	}
	
	if(DEBUG){
	for(int i=1 ; i<=n ; i++) {
		for(int j=1 ; j<=m ; j++) {
			printf("%d ",map[i][j]);
		}
		if(DEBUG) {puts("");}
	}
	}
	
//int bfs(int x,int y) {
		
	
	while(!q.empty()){
		x=0, y=0, nx=0, ny=0;
		
		x = q.front().first;
		y = q.front().second;
		q.pop();
		
		for(int k=0 ; k<4 ; k++) {
			nx=x + dx[k];
			ny=y + dy[k];
			if(DEBUG) {printf("nx:%d, ny:%d\n",nx,ny);}
			if( 0<=nx && nx<=n && 0<=ny && ny<=m) {
				
				if(DEBUG) {printf("nx:%d, ny:%d, dist[nx][ny]:%d, map[nx][ny]:%d\n",nx,ny,dist[nx][ny],map[nx][ny]);}
				if(dist[nx][ny]==-1 && map[nx][ny]==0 ) {
					//if(DEBUG) {printf("nx:%d, ny:%d, dist[nx][ny]:%d, map[nx][ny]:%d\n",nx,ny,dist[nx][ny],map[nx][ny]);}
					dist[nx][ny] = dist[x][y]+1;
					q.push(make_pair(nx,ny));
				}
			}
		}
		 
	}
    
//}
	ans=0;
	for(int i=1 ; i<=n ; i++) {
		for(int j=1 ; j<=m ; j++) {
			if(DEBUG) {printf("ans:%d, dist[%d][%d]:%d\n",ans,i,j,dist[i][j]);}
			if(ans < dist[i][j]) {
				ans = dist[i][j];
				
			}
		}
	}
	
	for(int i=1 ; i<=n ; i++) {
		for(int j=1 ; j<=m ; j++) {
			if(map[i][j]==0 && dist[i][j]==-1) {
				ans=-1;
			}
		}
	}
	printf("%d",ans);
    return 0;
}

