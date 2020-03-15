#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool a[2000][2000];
vector<int> g[2000];
vector<pair<int,int>> edges;

int n, m;

int main(void) {
    //printf("Hello world!");
	scanf("%d %d",&n,&m);
	
	for(int i=0; i<m ; i++) {
		int from, to;
		scanf("%d %d",&from,&to);
		edges.push_back({from,to});
		edges.push_back({to,from});
		a[from][to] = a[to][from] = true;
		g[from].push_back(to);
		g[to].push_back(from);
	}
	
	m*=2;
	for(int i=0 ; i<m ; i++) {
		for(int j = 0 ; j<m ; j++) {
			//A -> B
			int A = edges[i].first;
			int B = edges[i].second;
			
			//C -> D
			int C = edges[j].first;
			int D = edges[j].second;
			
			if(A==B || A==C || A==D || 
			B==C || B==D || C==D ) {
				continue;
			}
			
			if(!a[B][C]) {
				continue;
			}
			
			for(int E : g[D]){
                if (A == E || B == E ||
				 C == E || D == E) {
                    continue;
                }
                cout << 1 << '\n';
                return 0;
            }
        }
    }
    cout << 0 << '\n';
    return 0;
}
