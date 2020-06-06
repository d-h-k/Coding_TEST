#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;
vector<int> a[20001];
int color[20001];
bool dfs(int node, int c) {
    color[node] = c;
    for(int i= 0 ; i<a[node].size() ; i++) {
    	int next = a[node][i];
    	if(color[next] == 0 ) {
    		if(dfs(next,3-c) == false) {
    			return false;
			}
			else{
			}
		}
		else if(color[next] == color[node]) {
			return false;
		}
	}
    return true;
}
int main() {
    int T;
    const int DEBUG=1;
    scanf("%d\n",&T);
    for(int test_case=1 ; test_case<=T ; test_case++) {
		if(DEBUG) {
			//printf("test_case:%d, T:%d\n",test_case,T);
		}
		int V, E;
        scanf("%d %d",&V,&E);
        
        for (int i=1; i<=V; i++) {
            a[i].clear();//:??????
            color[i] = 0;//:??????  
        }
        for (int i=0; i<E; i++) {
            int  start,end;
            scanf("%d %d",&start ,&end);
            a[start].push_back(end);
            a[end].push_back(start);
        }
        
        bool ok = true;
        for (int i=1; i<=V; i++) {
        	// ??
            if(color[i] == 0 ) {
            	if(dfs(i,1) == false ) {
            		ok = false;
				}
			}
			//??
            
        }
        printf("%s\n",ok ? "YES" : "NO");//gammer C
    }
    return 0;
}



/*
//python
import sys
sys.setrecursionlimit(1000000)
t = int(sys.stdin.readline())
for _ in range(t):
    n,m = map(int,sys.stdin.readline().split())
    a = [[] for _ in range(n)]
    color = [0] * n
    for _ in range(m):
        u,v = map(int,sys.stdin.readline().split())
        a[u-1].append(v-1)
        a[v-1].append(u-1)

    def dfs(x, c):
        color[x] = c
        for y in a[x]:
            if color[y] == 0:
                if not dfs(y, 3-c):
                    return False
            elif color[y] == color[x]:
                return False
        return True

    ans = True
    for i in range(n):
        if color[i] == 0:
            if not dfs(i, 1):
                ans = False
    print('YES' if ans else 'NO')



*/
