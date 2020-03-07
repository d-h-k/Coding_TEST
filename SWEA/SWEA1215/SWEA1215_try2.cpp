#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const unsigned int DEBUG = 0;
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
		if(DEBUG) {	puts("\nLEFT");}
		for(int i=0 ; i<depth ; i++) {
			pen[i] = map[x-i][y];
		}		
	}
	if(dir==2) {
		if(DEBUG) {	puts("\nRIGHT");}
		for(int i=0 ; i<depth ; i++) {
			pen[i] = map[x+i][y];
		}
	}
	if(dir==3) {
		if(DEBUG) {	puts("\nUP");}
		for(int i=0 ; i<depth ; i++) {
			pen[i] = map[x][y-i];
		}
	}
	if(dir==4) {
		if(DEBUG) {	puts("\nDOWN");}
		for(int i=0 ; i<depth ; i++) {
			pen[i] = map[x][y+i];
		}
	}
	
	int half=depth/2;
	
	if(depth%2==1) {
		for(int i=1 ; i<=half ; i++) {		
			if(pen[half-i] != pen[half+i]) {	
				return 0;//no pen...
				if(DEBUG) {
				printf("pen[%d]:%c , pen[%d]:%c\n",half-i,pen[half-i], half+i,pen[half+i]);
				puts("NO PEN");
				}else{}
			}
			else{
			} 	
		}
	}
	else {
		for(int i=1 ; i<=half ; i++) {
			if(pen[half-i-1] != pen[half+i]) {	
				if(DEBUG) {
					printf("pen[%d]:%c , pen[%d]:%c\n",half-i-1,pen[half-i-1], half+i,pen[half+i]);
					puts("NO PEN");
				}
				else{}
				return 0;//no pen...
			}
			else{
			} 	
		}
	}
	answer++;
	if(DEBUG) {puts("YES YES PEN!!!!!!!!!!!!!");}
	
	return 1;//pen ok!
}



int pen_isext(int x, int y) {
	//dir :: left=1, right=2, up=3, down=4
	
	//left
	if(x>5) {
		pencheck(x,y,1,plen);
	}else{}
	
	//right
	if(x<5) {
		pencheck(x,y,2,plen);
	}else{}
	
	//up
	if(y>5) {
		pencheck(x,y,3,plen);
	}else{}
	
	//down 
	if(y<5) {
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
			for(int j=1 ; j<=8-plen ; j++) {
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
