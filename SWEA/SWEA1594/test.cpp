//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PobmqAPoDFAUq&categoryId=AV5PobmqAPoDFAUq&categoryType=CODE
//SWEA 1594 dalpang sut ja
#include<iostream>

using namespace std;

int x,y=1;
int test_case;
int T,size;
int map[10][10]={0};
char dir = 'R';//Up,Down,Left,Right
int rulen=0;		
void supv();

int main(int argc, char** argv) {
	const int DEBUG = 1;
	freopen("input.txt", "r", stdin);
	//cin>>T;
	scanf("%d", &T);
	/*
	   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
	*/
	for(test_case = 1; test_case <= T; ++test_case)
	{
		
		/////////////////////////////////////////////////////////////////////////////////////////////
		/*
			 이 부분에 여러분의 알고리즘 구현이 들어갑니다.
		 */
		scanf("%d", &size);
		rulen = size;
		if(DEBUG)  {
			printf("size : %d",size);
		}
		
		for(int i=0 ; i<=size ; i++) {
			for(int j=0 ; j<=size ; j++) {
				map[x][y] = (i+j+1);
				supv();
			}
		}
		 
		 
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}


void supv() {
	if(dir == 'R') {
		if(x >= rulen) {
			dir = 'D';
			rulen--;
		}
		else {
			x++;
		}		
	}
	else if( dir == 'D') {
		if(y >= rulen) {
			dir = 'L';
			rulen--;
		}
		else {
			y++;
		}
	}
	else if( dir == 'L') {
		if((rulen-x) <= 1) {
			dir = 'U';
			rulen--;
		}
		else {
			x--;
		}
	}
	else if( dir = 'U') {
		if((rulen-y) <= 1 ) {
			dir = 'L';
			rulen--;
		}
		else {
			y++;
		}
	}
	else {
		puts("ERROR!!!!!");
	}

} 
