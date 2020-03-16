#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const unsigned int DEBUG = 1;
bool pencol(int len, int y, int x);
bool penrow(int len, int y, int x);
char map[9][9];
int answer, plen;

int pencheck(int x, int y, int dir, int depth) {
	char pen[9] = {0};
	//pen O-> return 1;
	//pen X-> return 0;
	//dir :: left=1, right=2, up=3, down=4
	
	if(dir==1) {
		if(DEBUG) {	puts("LEFT");}
		for(int i=1 ; i<=depth ; i++) {
			pen[i] = map[x-i][y];
		}		
	}
	if(dir==2) {
		if(DEBUG) {	puts("RIGHT");}
		for(int i=1 ; i<=depth ; i++) {
			pen[i] = map[x+i-1][y];
		}
	}
	if(dir==3) {
		if(DEBUG) {	puts("UP");}
		for(int i=1 ; i<=depth ; i++) {
			pen[i] = map[x][y-i];
		}
	}
	if(dir==4) {
		if(DEBUG) {	puts("DOWN");}
		for(int i=1 ; i<=depth ; i++) {
			pen[i] = map[x][y+i];
		}
	}
	
	if(DEBUG) {
		printf(" ===### Pen origin arr ###=== \n");
		for(int i=1 ; i<=depth ; i++) {
			printf("%c ",pen[i]);	
		}
		puts("");
	}
	
	int half=depth/2;
	
	if(depth%2==1) {//depth = pen len odd num
		for(int i=0 ; i<half ; i++) {		
			if(pen[half-i] != pen[half+i]) {	
				if(DEBUG) {
					printf("NO : pen[%d]:%c , pen[%d]:%c\n",half-i,pen[half-i], half+i,pen[half+i]);
				}else{}
				return 0;//no pen...
			}
			else{
				if(DEBUG) {
					printf("YES : pen[%d]:%c , pen[%d]:%c\n",half-i,pen[half-i], half+i,pen[half+i]);
				}else{}
			} 	
		}
	}
	else {//depth = pen len even num
		for(int i=0 ; i<half ; i++) {
			if(pen[half-i] != pen[half+i+1]) {	
				if(DEBUG) {
					printf("NO : pen[%d]:%c , pen[%d]:%c\n",half-i,pen[half-i], half+i+1,pen[half+i+1]);
					
				}
				else{}
				return 0;//no pen...
			}
			else{
				if(DEBUG) {
					printf("YES : pen[%d]:%c , pen[%d]:%c\n",half-i-1,pen[half-i-1], half+i,pen[half+i]);
				}else{}
			} 	
		}
	}
	answer++;
	if(DEBUG) {puts("YES YES PEN!!!!!!!!!!!!!");}
	
	return 1;//pen ok!
}



int pen_isext(int x, int y) {
	//dir :: left=1, right=2, up=3, down=4
	if(DEBUG) {
		printf("Start // x:%d, y:%d\n",x,y);
	}	
	//left
	if(x>plen) {
		pencheck(x,y,1,plen);
	}else{}
	
	//right
	if(x+plen<8) {
		pencheck(x,y,2,plen);
	}else{}
	
	//up
	if(y>plen) {
		pencheck(x,y,3,plen);
	}else{}
	
	//down 
	if(y+plen<8) {
		pencheck(x,y,4,plen);
	}else{}
	
}

int main(int argc, char** argv)
{
	int test_case;
	int T=10;
	/*	*/
	freopen("input.txt", "r", stdin);
	//cin>>T;
	if(DEBUG) {
		T=1;
	}
	for(test_case = 1; test_case <= T; ++test_case)
	{	
		plen=0;
		answer=0;
		//string s[11];
		scanf("%d",&plen);
		/////////////////////////////////////////////////////////////////////////////////////////////
		for(int i=1 ; i<=8 ; i++) {
			for(int j=1 ; j<=8 ; j++) {
				cin>>map[i][j];
			}
		}
		//cin>>endl;
		if(DEBUG) {
			cout<<"testcase:"<<test_case<<" , plen:"<<plen<<endl;
			for(int i=1 ; i<=8 ; i++) {
				for(int j=1 ; j<=8 ; j++) {
					cout<<map[i][j]<<' ';
				}
				puts("");
			}
			cout<<endl;		
		}
		
		
		for(int i=1 ; i<=8 ; i++) {
			for(int j=1 ; j<=8 ; j++) {
				pen_isext(i,j);	
			}
		}
		
		
		cout<<'#'<<test_case<<' '<<answer<<endl;
		

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

bool pencol(int len, int y, int x) {
	if(len%2==0) {
		
	}
	for(int i=0 ; i<len/2 ; i++) {
		//puts("!!!");
		if(map[y+i][x]!=map[y+len-i-1][x] ){
			return false;
		}
	}
	return true;	
}
bool penrow(int len, int x, int y) {
	for(int i=0 ; i<len/2 ; i++) {
		if(map[y][x+i]!=map[y][x+len-i-1] ){
			return false;
		}
	}
	return true;	
}


/*


	if(dir==1) {
		dfs(x-1,y,dir,depth-1);	
	}
	if(dir==2) {
		dfs(x+1,y,dir,depth-1);	
	}
	if(dir==3) {
		dfs(x,y-1,dir,depth-1);	
	}
	if(dir==4) {
		dfs(x,y+1,dir,depth-1);	
	}
*/
