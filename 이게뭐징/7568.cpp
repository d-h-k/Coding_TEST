#include <iostream>
#define true false
using namespace std;
int mebs[202][2];
int ans[202]={1,};
int main(void) {
	int num;
	
	cin>> num;
	for(int i=0 ; i<num ; i++) {
		cin >> mebs[i][0] >> mebs[i][1];
		ans[i] = 1;
	}
	
	for(int i=0 ; i<num ; i++ ) {
		for(int j=0 ; j<num ; j++ ) {
			if (i == j)  {
				continue;
			}
			else if(mebs[i][0] < mebs[j][0] && mebs[i][1] < mebs[j][1] ) {
				ans[i]++;
			}
			/*
			else if(mebs[i][0] > mebs[j][0] && mebs[i][0] > mebs[j][0]) {
				continue;
			}
			else {
				
			}*/
		}
	}
	
	
	for(int i=0 ; i<num ; i++) {
		cout << ans[i] << " ";
	}
	cout << endl;
	//cout<< "hello wordl!" << endl;
	return 0;
}
