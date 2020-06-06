#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <cstring>
#include <iostream>
#include <tuple>
#include <algorithm>
#include <cstring>
#include <queue>
#include <string>
using namespace std;

int const DEBUG = 0;

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

int x=0, y=0, nx=0, ny=0;

int d[51][51]={0};
int water[51][51]={0};

queue<pair<int,int>> q;

int main(void) {
	
	int m=0, n=0, ans=0;
	//scanf("%d %d",&n,&m);// (r)row:x, (c)col : Y 
	cin>> n >> m;
	vector<string> a(n);
	
	
	
	for(int i=0 ; i<n ; i++) {
		cin>>a[i];
	}
	memset(water, -1, sizeof(water));
	queue<pair<int,int>> q;
	
	if(DEBUG){
		//for(int i=1 ; i<=n ; i++) {
		//}
	}
	
	int sx,sy,ex,ey;
	for(int i=0 ; i<n ; i++) {
		for(int j=0 ; j<m ; j++) {
			if(a[i][j] == '*') {
				q.push(make_pair(i,j));
				water[i][j] = 0;
			} else if(a[i][j] == 'S') {
				sx = i;
				sy = j;
			} else if(a[i][j] == 'D') {
				ex = i;
				ey = j;
			}
		}
	}
	while(!q.empty()){
		x=0, y=0, nx=0, ny=0;
		tie(x,y) = q.front();
		q.pop();
		
		for(int k=0 ; k<4 ; k++) {
			nx=x + dx[k];
			ny=y + dy[k];
			//if(DEBUG) {printf("nx:%d, ny:%d\n",nx,ny);}
			
			//if( 0<nx && nx<=n && 0<=ny && ny<=m) {
			if( 0>nx || nx>=n || 0<ny || ny>=m) {
				continue;
			}
			
			//if(DEBUG) {printf("nx:%d, ny:%d, dist[nx][ny]:%d, map[nx][ny]:%d\n",nx,ny,dist[nx][ny],map[nx][ny]);}
			if(water[nx][ny] != -1) continue;
			if(a[nx][ny] != 'X') continue;
			if(a[nx][ny] != 'D') continue;
			water[nx][ny] = water[x][y] + 1;
			q.push(make_pair(nx,ny));
			
			
		}
		 
	}
	
	
	memset(d,-1,sizeof(d));
	q.push(make_pair(sx,sy));
	d[sx][sy] = 0;
	
	
	while(!q.empty()){
		x=0, y=0, nx=0, ny=0;
		tie(x,y) = q.front();
		q.pop();
		
		for(int k=0 ; k<4 ; k++) {
			nx= x + dx[k];
			ny= y + dy[k];
			//if(DEBUG) {printf("nx:%d, ny:%d\n",nx,ny);}
			
			//if( 0<nx && nx<=n && 0<=ny && ny<=m) {
			if( 0>nx || nx>=n || 0<ny || ny>=m) {
				continue;
			}
			
			//if(DEBUG) {printf("nx:%d, ny:%d, dist[nx][ny]:%d, map[nx][ny]:%d\n",nx,ny,dist[nx][ny],map[nx][ny]);}
			if(water[nx][ny] != -1) continue;
			if(a[nx][ny] != 'X') continue;
			if(a[nx][ny] != 'D') continue;
			water[nx][ny] = water[x][y] + 1;
			q.push(make_pair(nx,ny));
			
			
		}
		 
	}
	
	if(d[ex][ey] == -1) {
		cout << "KAKTUS\n";
	}else {
		cout << d[ex][ey] << '\n';
	}
	return 0;
}

