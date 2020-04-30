/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
//가장 긴 증가하는 부분수열4 모르겠다 
// 동빈나 강좌 : https://www.youtube.com/watch?v=OxsZKLfaWX0
//  Dynamic Programming - Maximum Subsequence Sum
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

const int DEBUG = 1;
int a[1000];
int d[1000];
int v[1000];

void go(int p) {
	// ? -> ? -> ....a[v[p]] -> a[p]
	// -----------------------------
	// go(v[p])
	if(p== -1) {
		return;
	}
	go(v[p]);
	
	cout<< a[p] << ' ';
}


int main(int argc, char** argv)
{
	int n;
	
	cin >> n;
	
	//vector<int> a(n);
	//vector<int> d(n);
	
	for(int i=0 ; i<n ; i++ ) {
		cin >> a[i];
	}
	
	for(int i=0 ; i<n ; i++ ) {
		d[i] = 1;
		for(int j=0 ; j<i ; j++ ) {
			if(a[j] < a[i] && d[j]+1 > d[i]) {
				d[i] = d[j]+1;
				v[i] = j;
			}
		}
	}
	int ans = d[0];
	int p = 0;
	
	
	//cout<< *max_element(d.begin(), d.end() ) << '\n';
	for(int i=0 ; i<n ; i++ ) {
		//cout<< d[i] << ' ';
		if(ans < d[i]) {
			ans = d[i];
			p= i;
		}
		
	}
	
	
	cout<<ans<<'\n';
	go(p);
	cout<<'\n';
	
	return 0;//
}
