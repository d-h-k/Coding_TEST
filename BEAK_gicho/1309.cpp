/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
//20-04-29 : 2225

//origin from 

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>


using namespace std;
int d[100001][3];
const int mod = 9901;
const int DEBUG = 0;

int main(int argc, char** argv)
{
	int n;
	
	cin >> n ;
	n--;
	if(DEBUG) {cout<<"n:"<<n<<endl;}
	/* 
	relatrions
	d[i][0] = d[i-1][1] + d[i-1][2]
	d[i][1] = d[i-1][0] + d[i-1][1] + d[i-1][2]
	d[i][2] = d[i-1][0] + d[i-1][1]
	*/
	
	
	d[0][0] = d[0][1] = d[0][2] = 1;
	
	
	for(int i=1; i<=n ; i++) {
		d[i][0] = d[i-1][1] + d[i-1][2];
		d[i][1] = d[i-1][0] + d[i-1][1] + d[i-1][2];
		d[i][2] = d[i-1][0] + d[i-1][1];
		for(int j=0 ; j<3 ; j++ ) {
			d[i][j] = d[i][j]%mod;
		}	
	}
	
	
	cout<< (d[n][0]+d[n][1]+d[n][2])%mod << '\n';
	return 0;


	
	return 0;//
}
