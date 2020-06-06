/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
//20-04-29
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>


using namespace std;
//int map[501][501];
int main(int argc, char** argv)
{
	int n;
	
	cin >> n;
	vector<int> a(n);
	for(int i=0 ; i<n ; i++ ) {
		cin >> a[i];
	}
	
	vector<int> d(n);
	for(int i=0 ; i<n ; i++ ) {
		d[i] = 1;
		for(int j=0 ; j<i ; j++ ) {
			if(a[j] < a[i] && d[j]+1 > d[i]) {//ÀÌÇØ ¾È°¨.. ¹¹Â¡
				d[i] = d[j]+1;
			}
		}
	}
	
	cout<< *max_element(d.begin(), d.end() ) << '\n';
	return 0;
	
	//freopen(".\testdata\14500_B.txt", "r", stdin);
	//scanf("")
	
	/////////////////////////////////////////////////////////////////////////////////////////////
	/**/
	/////////////////////////////////////////////////////////////////////////////////////////////


	
	return 0;//
}
