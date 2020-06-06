#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#include <cstudio>
#include <tuple>

using namespace std;

int const DEBUG = 0;
queue<pair<int,int>> q;

int distp[1001][1001];

int main(void) {
	int n=0,s=0,c=0;
	int nc=0, ns=0;
	
	memset(dist, -1, sizeof(dist));
	q.push(make_pair(1,0));
	dist[1][0] = 0;
	scanf("%d",&n);
	
	
	while(!q.empty()) {
		tie(s,c) = q.front();
		q.pop();
		
		//c=q.front().first;
		//s=q.front().second;
		
		if(2<=s && s<=1000 && 2<=c && c<=1000 ) {
			//1 copy to clipboard
			q.p
						
			//2 pasete from clipboard
			
			
			//3 screen -1
		}
		
	}
	
	printf("%d",ans);
    return 0;
}

