#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> a[1001];
bool check[1001];

void dfs(int node);

int n,m;

int main(void) {
	
	int cpnt = 0;
	
	scanf("%d %d",&n,&m);
	for( int i=0 ; i<m ; i++) {
		int start,end;
		scanf("%d %d",&start,&end);
		a[start].push_back(end);
		a[end].push_back(start);	
		//
	}    
	
	for(int i=1 ; i<=n ; i++) {
		if(check[i] == false) {
			if(check[i]== false) {
				dfs(i);
				cpnt +=1;
			}
		}
	}
	printf("%d\n",cpnt);
	
	
    return 0;
}

void dfs(int node) {
	check[node] = true;
	for(int i= 0 ; i<a[node].size() ; i++) {
		int next = a[node][i];
		if(check[next] == false) {
			dfs(next);
		}
	}
}
