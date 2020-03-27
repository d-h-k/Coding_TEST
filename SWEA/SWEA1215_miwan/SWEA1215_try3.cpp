#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const unsigned int DEBUG = 0;
bool pencol(int len, int y, int x);
bool penrow(int len, int y, int x);
char map[9][9];
int answer, plen;

int main(int argc, char** argv)
{
	int test_case;
	int T=10;
	/*	*/
	freopen("input.txt", "r", stdin);
	//cin>>T;
	if(DEBUG) {
		//T=T;
		T=1;
	}
	for(test_case = 1; test_case <= T; ++test_case)
	{	
		plen=0;
		answer=0;
		//string s[11];
		scanf("%d",&plen);
		int pen = plen;
		/////////////////////////////////////////////////////////////////////////////////////////////
		for(int i=1 ; i<=8 ; i++) {
			for(int j=1 ; j<=8 ; j++) {
				cin>>map[i][j];
			}
		}

		//
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
				//i=y, j=x
				bool ok_row = true;
				for(int k=0 ; (k+k) <=plen ; k++) {
					if(0<=j && j+plen <=9) {
						if( map[i][j+k] != map[i][j+plen-k-1]) {
							ok_row = false;
							break;
						}		
					}
					else {
						ok_row = false;
					}
				}
				if(ok_row) {
					answer++;
				}
					
				bool ok_col = true;
				for(int k=0 ; (k+k) <= plen ; k++) {
					if(0<=i && i+plen<=9) {
						if( map[i+k][j] != map[i+plen-k-1][j]) {
							ok_col = false;
							break;
						}		
					}
					else {
						ok_col = false;
					}
				}
				if(ok_col) {
					answer++;
				}
					
					
			}
		}
		
		
		cout<<'#'<<test_case<<' '<<answer<<endl;
		

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}


