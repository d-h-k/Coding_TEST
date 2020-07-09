//BF 전략으로 해결
// if 길이가 1이라면, 2라면---> 30이라 면 
/////////////////////////////////////////////////////////////////////////////////////////////
#define DEBUG 0

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	freopen("input.txt", "r", stdin);
	cin>>T;
	/*

	*/
	if(DEBUG) {
		//T=1;
	}
	for(test_case = 1; test_case <= T; ++test_case)
	{

		string mystr;
		cin>> mystr;
		
		bool is_find = true;
		for(int i=1 ; i<=30 ; i++) {//i=반복길이 
			string sub = mystr.substr(0,i);
			
			is_find = true;
			
			for(int j=i ; j<30 ; j=j+i) {
				string next = mystr.substr( j, i );
				if(DEBUG) {
					puts("");
					cout<< "sub:"<<sub <<"    "<<"next:"<<next;
					puts("");
				}
				if( 0 !=  sub.compare(next)) {
					if(next.length() == i) {
						if(DEBUG) {puts("worng!!");}
						//no
						is_find= false;
						break;		
					}
					
				}
			}
			
			
				
			
			
			if(is_find == true) {
				printf("#%d %d\n",test_case, i);
				break;
			}
		}
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}



/*
		string ins;
		int ans = 0;
		int temp = 0;
		
		cin>>ins;// 원본문자열 입력받음 
		
		for(int i=1; i<=30 ; i++) {//완전탐색 답이 1이라면~30  
			bool is_find = false;
			
			char match = ins[i-1];
			for(int j=i ; j<=30 ; j=j+i) {
				if(DEBUG) {
					//printf("sd");
				}
				is_find = true;
				if(ins[j] != match) {
				
					is_find = false;
					break;// 틀림 이게 아냐! 
					
				}
				else {
					// 같음 
					
				}
				
				
			}
			if(is_find) {
				printf("#%d %d\n",test_case, i);
				break;
			}
			
			
		}
		



*/
