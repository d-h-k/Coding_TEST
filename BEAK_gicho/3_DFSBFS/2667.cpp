#include <cstdio>
#include <algorithm>
#include <queue>

using namespace std;

int map[30][30]={0};
int visited[30][30]={0};
int dep[30][30]={0};

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

int n;

int ans[25*25];

void dfs(int x, int y, int cnt);
void bfs(int x, int y, int cnt);

int main() {
    int cnt = 0;
    
	scanf("%d",&n);
	
	//intsert data
	for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%1d",&map[i][j]);
        }
    }
    
    //do it all aera
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (map[i][j] == 1 && visited[i][j] == 0) {
                bfs(i, j, ++cnt);// num of dan ji
            }
        }
    }
    
    printf("%d\n",cnt);// total num of dan ji
    
	for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            ans[visited[i][j]]+=1;
        }
    }
    
	sort(ans+1, ans+cnt+1);
    for (int i=1; i<=cnt; i++) {
        printf("%d\n",ans[i]);//or-rum cha-soon print!
    }
    return 0;
}

void dfs(int x, int y, int cnt) {
    dep[x][y] = cnt;
    for (int k=0; k<4; k++) {
        int nx = x+dx[k];
        int ny = y+dy[k];
        if (0 <= nx && nx < n && 0 <= ny && ny < n) {
            if (map[nx][ny] == 1 && dep[nx][ny] == 0) {
                dfs(nx, ny, cnt);
            }
        }
    }
}


void bfs(int x, int y, int cnt) {
    
	queue<pair<int,int>> q;//queue every 2param
    
	q.push(make_pair(x,y));
	
	visited[x][y] = cnt;
    while (!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        
        for (int k=0; k<4; k++) {
            int nx = x+dx[k];
            int ny = y+dy[k];
            if (0 <= nx && nx < n && 0 <= ny && ny < n) {
                if (map[nx][ny] == 1 && visited[nx][ny] == 0) {
                    q.push(make_pair(nx,ny));
                    visited[nx][ny] = cnt;
                }
            }
        }
    }
}


/*
python3

from collections import deque, Counter
from functools import reduce
dx = [0,0,1,-1]
dy = [1,-1,0,0]
def bfs(x, y, cnt):
    q = deque()
    q.append((x,y))
    group[x][y] = cnt
    while q:
        x, y = q.popleft()
        for k in range(4):
            nx, ny = x+dx[k], y+dy[k]
            if 0 <= nx < n and 0 <= ny < n:
                if a[nx][ny] == 1 and group[nx][ny] == 0:
                    q.append((nx,ny))
                    group[nx][ny] = cnt
n = int(input())
a = [list(map(int,list(input()))) for _ in range(n)]
group = [[0]*n for _ in range(n)]
cnt = 0
for i in range(n):
    for j in range(n):
        if a[i][j] == 1 and group[i][j] == 0:
            cnt += 1
            bfs(i, j, cnt)

ans = reduce(lambda x,y : x+y, group)
ans = [x for x in ans if x > 0]
ans = sorted(list(Counter(ans).values()))
print(cnt)
print('\n'.join(map(str,ans)))





*/
