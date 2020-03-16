#include<iostream>

using namespace std;
bool pencol(int len, int y, int x);
bool penrow(int len, int y, int x);
char map[9][9];
int main(int argc, char** argv)
{
	int test_case;
	int T=10,DEBUG=1;
	/*	*/
	freopen("input.txt", "r", stdin);
	//cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{	
		int plen=0,answer=0;
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
	
		for(int i=1 ; i<=8-plen ; i++) {
			for(int j=1 ; j<=8 ; j++) {
				if(pencol(plen,j,i)) {
					answer++;
				}	
			}
		}
		
		for(int i=1 ; i<=8 ; i++) {
			for(int j=1 ; j<=8-plen ; j++) {
				if(penrow(plen,j,i)) {
					answer++;
				}	
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

