#include<iostream>

using namespace std;

const int DEBUG = 1;
int map[101][101];
int data=0;
int X=0;
int Y=0;
int dir = 0;// LEFT=0, DOWN=1, RIGHT=2, UP=3
int T,N;
int num,cnt,len;



void dir_Cal() {

	if(dir == 0) {
	
			X++;
		
	}
	else if(dir == 1) {
		
			Y++;

	}
	else if(dir == 2) {
		
			X--;
		
	}
	else if(dir == 3) {
		
			Y--;
		
	}
	else {
		puts("Error!");
	}
	return;
}


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
		puts("=====================================");
		/////////////////////////////////////////////////////////////////////////////////////////////
		/* */
		cin>>N;
		
		data=0;
		X=N-1;
		Y=0;
		dir = 0;// LEFT=0, DOWN=1, RIGHT=2, UP=3
		num=N;
		len=N;
		cnt=0;

		for(int i=0 ; i<N ; i++) {
			map[0][i]=i+1;
		}
		for(int i=0 ; i<(N*N)-N ; i++) {
			map[Y][X]=i+N;
			printf("Y:%d, X:%d, dir:%d, cnt:%d, num:%d\n",Y,X,dir,cnt,num);
			num++;
			
			if(len <= num+1) {
				cnt++;
				num=0;
				if(cnt>=3) { 
					cnt=0;
					num=0;
					dir=(dir+1)%4;
					puts("dir change");
					
				}
			}
			dir_Cal();
		}
		
		
		
		//answer print
		printf("#%d\n",test_case);
		for(int i=0 ; i <N ; i++) {
			for(int j= 0 ; j<N ; j++) {
				printf("%d ",map[i][j]);
			}
			puts("")	;
		}
		///////////////////////////////////////////////////////////////////////////////////////////
	}  
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
 
 
/*
/*
for(int i=0 ; i<N ; i++) {
	for(int j=0 ; j<N ; j++) {
		map[Y][X] = ++data;
		printf("Y:%d, X:%d, data:%d, dir:%d\n",Y,X,data,dir);
		//dir_Cal();
		
	}
}
*/

 
 
/*
void dir_Cal() {

	if(dir == 0) {
		if(X+1>=N) {
			dir++;
			Y++;
		}
		else {
			X++;
		}
	}
	else if(dir == 1) {
		if(Y+1>=N) {
			dir++;
			X--;
		}
		else {
			Y++;
		}
	}
	else if(dir == 2) {
		if(X-1<=0) {
			dir++;
			Y--;
		}
		else {
			X--;
		}
	}
	else if(dir == 3) {
		if(Y-1<=0) {
			dir=0;
			X++;
		}
		else {
			Y--;
		}
	}
	else {
		puts("Error!");
	}
	return;
}
*/
