#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;
int a[30][30];
int group[30][30];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int n;
int ans[25*25];
void bfs(int x, int y, int cnt) {
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));
    group[x][y] = cnt;
    while (!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for (int k=0; k<4; k++) {
            int nx = x+dx[k];
            int ny = y+dy[k];
            if (0 <= nx && nx < n && 0 <= ny && ny < n) {
                if (a[nx][ny] == 1 && group[nx][ny] == 0) {
                    q.push(make_pair(nx,ny));
                    group[nx][ny] = cnt;
                }
            }
        }
    }
}
int main() {
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%1d",&a[i][j]);
        }
    }
    int cnt = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (a[i][j] == 1 && group[i][j] == 0) {
                bfs(i, j, ++cnt);
            }
        }
    }
    printf("%d\n",cnt);
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            ans[group[i][j]]+=1;
        }
    }
    sort(ans+1, ans+cnt+1);
    for (int i=1; i<=cnt; i++) {
        printf("%d\n",ans[i]);
    }
    return 0;
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
