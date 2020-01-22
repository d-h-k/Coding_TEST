#include <cstdio>
#include <vector>
#define DEBUG 1

using namespace std;

vector<pair<int,int>>S;

int MAP[101][101];
int dr[] = {0,1,0,-1}; 
int dc[] = {1,0,-1,0};

int T=0, N=0, Answer=0;
void dfs(int now_row, int now_col);

int main() {
	
	FILE * fp;
	fp = freopen("Q525_input.txt","r",stdin);
	if( DEBUG && fp != 0) {
		puts("No file existed");
	}
	
	scanf("%d", &T);
	for(int test_case=1; test_case<=T ; test_case++) {
		
		// intsert map info
		scanf("%d", &N);
		for(int i = 1; i<=N ; i++) {
			for(int j = 1; j<=N ; j++) {
				scanf("%d",&temp);
				MAP[][] = temp;
			}
		}
		
		
		//
		
		
	}
	
	return fclose(fp);
}


void dfs(int now_row, int now_col){ 
	
}
