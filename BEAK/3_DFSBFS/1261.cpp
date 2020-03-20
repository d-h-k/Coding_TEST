#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int d[555][555];
int a[555][555];

int n,m;
int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};

int main(void) {
	scanf("%d %d", &m, &n);
	for(int i=0 ; i<n ; i++) {
		for(int j=0 ; j<m ; j++) {
			scanf("%1d",&a[i][j]);
			d[i][j] = -1;
		}
	}
	queue<pair<int,int>> q;
	queue<pair<int,int>> nx_q;
	
	q.push(make_pair(0,0));
	d[0][0]=0;
	
	while(!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		
		q.pop();
		for(int k=0 ; k<4 ; k++) {
			int nx = x+dx[k];
			int ny = y+dy[k];
			
			if(0<=nx && nx<n && 0<=ny && ny<m ) {
				if(d[nx][ny] == -1 ) {
					if(a[nx][ny] == 0) {
						d[nx][ny] = d[x][y];
						q.push(make_pair(nx,ny));
					}
					else {
						d[nx][ny] = d[x][y]+1;
						nx_q.push(make_pair(nx,ny));
					}
				}
 			}
		}
		if(q.empty()) {
			q = nx_q;
			nx_q = queue<pair<int,int>>();
		}
	}
	
	printf("%d\n",d[n-1][m-1]);
	
	
    return 0;
}

