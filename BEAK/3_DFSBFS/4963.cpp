#include <iostream>
#include <cstring>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <queue>

using namespace std;
int map[101][101] = {0};
int check[101][101] = {0};//0-none vis , 1->been visted
int dx[] = {0,0,-1,1,1,-1,1,-1};
int dy[] = {-1,1,0,0,1,-1,-1,1};
int cnt = 0;
int w=0, h=0;

void bfs(int x,int y,int cnt) {
	queue<pair<int,int>> q;
	q.push(make_pair(x,y));
	map[x][y] = cnt;
	while(!q.empty()) {
		x=q.front().first;
		y=q.front().second;
		q.pop();
		
		for(int k=0 ; k<8 ; k++) {
			int nx=x+dx[k];
			int ny=y+dx[k];
			if( (0<=nx) && (nx<h) && (0<=ny) && (ny<w) {
				if(map[nx][ny] ==1 && check[nx][ny] == 0) {
					q.push(make_pair(nx,ny));
					check[nx][ny] = cnt;
				}
			}
		}
	}
}

void dfs(int w,int h) {
    if( map[h][w] == 0 ) {
    	return;
	}
	else {
		check[h][w]=0;
		
		for(int i=0 ; i<4 ; i++) {
    		dfs(dx[h+i],dy[w+i]);
		}
	}
	
}

int main(void) {
    
    while(1) {
	 
		w=0, h=0, cnt=0;
		
	    scanf("%d %d",&w,&h);
	    if(w==0 && h==0) {
	    	break;
		}
		else {
			memset(map,sizeof(map),0);
			memset(check,sizeof(check),0);
		}
		
		
		//insert data of map
		for(int i=1 ; i<=h ; i++) {
			for(int j=1 ; j<=w ; j++) {
				int temp;
				scanf("%1d",&map[i][j]);
				check[i][j] = 0;
			}
		}
		
		
		//run dfs
		for(int i=1 ; i<=h ; i++) {
			for(int j=1 ; j<=w ; j++) {
				if(map[i][j]==1 && check[i][j]==0) {
					//cnt++;
					//dfs(i,j);
					bfs(i,j,cnt++);
				}
			}
		}
		
				
		
		printf("%d\n",cnt);
			    
	}
	return 0;
}

