/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
//20-04-29 : 2225

//origin from https://mygumi.tistory.com/135

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>


using namespace std;
//int map[501][501];
int d[201][201];
const int DEBUG = 1;

int main(int argc, char** argv)
{
	int n,k;
	
	cin >> n >> k;
	
	if(DEBUG) {cout<<"n:"<<n<<"  k:"<<k<<endl;}
	
	for(int i=0 ; i<201 ; i++ ) {
		d[1][i] = 1;
	}
	for(int i=1; i<k ; i++) {
		for(int j=0 ; j<=n ; j++ ) {
			for(int l=0 ; l<=j ; l++) {
				d[i][j] += d[i-1][j-l];
			}
		}
	}
	
	
	cout<< d[k][n] << '\n';
	return 0;


	
	return 0;//
}
