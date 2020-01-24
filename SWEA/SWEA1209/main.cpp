/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
#include <cstdio>
#include <iostream>

using namespace std;

const int DEBUG = 0;

int map[101][101];
int main(int argc, char** argv) {
	int test_case;
	int T,n=100,answer=0,curr=0;
	/*
	*/
	freopen("input.txt", "r", stdin);
	
	
	/*
	*/
	for(test_case = 1; test_case <=10; ++test_case) { 
    	scanf("%d",&T);
    	//printf("TESTCASE:%d\n",T);
		for(int i=1 ; i<=n ; i++) {
    		for(int j=1 ; j<=n ; j++) {
    			scanf("%d",&map[i][j]);
			}
		}
		
		if(DEBUG) {
			for(int i=1 ; i<=n ; i++) {
    			for(int j=1 ; j<=n ; j++) {
    				printf("%d,",map[i][j]);
				}
				puts("\n\n");
			}
		}
    	
		//return 0;
		answer=0;
		
		//row inspect
		curr=0;
		for(int i=1 ; i<=100 ; i++) {
    		for(int j=0 ; j<10 ; j++) {
    			curr += (map[i][1+(10*j)] + map[i][2+(10*j)]+
				map[i][3+(10*j)]+map[i][4+(10*j)]+map[i][5+(10*j)]+map[i][6+(10*j)]+
				map[i][7+(10*j)]+map[i][8+(10*j)]+map[i][9+(10*j)]+map[i][10+(10*j)]);	
			}
			
			if( answer < curr ) {
				answer=curr;
			}
			curr=0;
		}
		
		//col inspect
		for(int i=1 ; i<=100 ; i++) {
    		for(int j=0 ; j<10 ; j++) {
    			curr += (map[1+(10*j)][i] + map[2+(10*j)][i]+
				map[3+(10*j)][i]+map[4+(10*j)][i]+map[5+(10*j)][i]+map[6+(10*j)][i]+
				map[7+(10*j)][i]+map[8+(10*j)][i]+map[9+(10*j)][i]+map[10+(10*j)][i]);	
			}
			if( answer < curr ) {
				answer=curr;
			}
			curr=0;
		}
		
		//DEAGAK+
		for(int i=1 ; i<=n ; i++) {
			curr += map[i][i];
		}
		if( answer < curr ) {
			answer=curr;
		}
		curr=0;
		
		//DEAGAK-
		for(int i=1 ; i<=n ; i++) {
			curr += map[i][n-i];
		}
		if( answer < curr ) {
			answer=curr;
		}
		curr=0;
		
		printf("#%d %d\n",test_case,answer);
	}
	return 0;
}  

