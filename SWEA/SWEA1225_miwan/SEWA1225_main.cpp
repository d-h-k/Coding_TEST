#include <queue>
#include <iostream>

using namespace std;
int num[8];
int main(int argc, char** argv) {
	int test_case;
	int T,tc;
	/**/
	freopen("input.txt", "r", stdin);
	//cin>>T;
	T=10;
	/**/
	for(test_case = 1; test_case <= T; ++test_case) {
		cin>>tc;
		/////////////////////////////////////////////////////////////////////////////////////////////
		/*	*/
		/////////////////////////////////////////////////////////////////////////////////////////////
		
		//1. pre-processing num[x]
		int mini=21212121, x15=0;
		for(int j=0 ; j<8 ; j++) {
			cin>>num[j];
			if(mini>num[j]) {
				mini = num[j];
			}	
		}
		x15=mini/15;
		for(int j=0 ; j<8 ; j++) {
			num[j] = num[j] - x15*15;//optimize
		}
		
		
		//2.solve with Q
		//2.1. fill Q
		queue<int> q;
		for(int j=0 ; j<8 ; j++) {
			q.push(num[j]);
		}
		//2.2. run Q
		int start=0,temp=0,delta=1,prc;
		temp = num[start];
		while(temp==0) {
			prc = q.front();
			prc = prc - delta;
			if(prc<=0) {
				//find code!!!
				break; 
			}
			else {
				q.pop();
				q.push(prc);
				
				//
				if(delta>5) {
					delta=1;
				}
				else {//do nothing 
				}
				
				//
				temp = num[start];	
			}
			
			
		}
		
		
		
		//answer print
		cout << "#"<<test_case<<" ";
		for(int j=0 ; j<8 ; j++) {
			cout <<num[j] << " ";	
		}
		cout<<endl;

	}
	return 0;//
}
