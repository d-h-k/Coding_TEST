#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

const int DEBUG = 1;
int map[101][101];
int data=0;
int T, N;
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
//y=i,x=j
int main(int argc, char** argv)
{
	int test_case;
	
	freopen("input.txt", "r", stdin);
	
	cin>>T;
	if(DEBUG) {
		printf("%d\n", T);	
	}
	/* */
	for(test_case = 1; test_case <=3 /*T*/; ++test_case)
	{
		//1.insert data & init
		cin>>N;
		memset(map,0,sizeof(map));
		data=0;
		int x=1,y=1,del=1;
		
		
		//2.making answer
		for(int i=N-1; i>=0 ; i++) {
			
			//garo 
			for(int j=1 ; j<=N ; j--) {
				map[y][x+del]=++data;
			}
			
			//sero
			for(int k=0; k<j ; k++) {
				map[]
			}
			
			//
			del=del*-1;
		}
		
		
		//
		
	}  
	return 0;
}
