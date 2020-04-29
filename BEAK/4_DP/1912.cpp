/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
//20-04-29 : 2225

//origin from https://sihyungyou.github.io/baekjoon-1912/
//https://debuglog.tistory.com/79

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>


using namespace std;
const int DEBUG = 0;

int main(int argc, char** argv)
{
	int n;
	cin >> n;
	vector<int> d(n);
	vector<int> a(n);
	for(int i=0 ; i<n ; i++ ) {
		cin >> a[i];
	}
	
	if(DEBUG) {
		cout<<"n:"<<n<<"\n";
		for(int i=0 ; i<n ; i++){
			cout<< "a["<<i<<"] : "<<a[i]<<endl;
		}
	}
	
	for(int i=0 ; i<n ; i++) {
		d[i] = a[i];
		if(i==0) continue;
		if(DEBUG) { cout<<"d[i]:"<<d[i]<<", d[i-1]:"<<d[i-1]<<", a[i]:"<<a[i];}
		if(d[i] < d[i-1] + a[i]) {
			d[i] = d[i-1] + a[i];
			if(DEBUG) { cout<<"\nCHANGE: d[i] : "<<d[i];}
		}
		if(DEBUG){puts("");}
	}
	
	int ans = d[0];
	for(int i=1; i<n; i++) {
		if(ans <d[i]) {
			ans = d[i];
		}
	}
	cout<<ans<<'\n';

	return 0;


	
	return 0;//
}
