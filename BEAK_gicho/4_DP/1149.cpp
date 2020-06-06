#include <iostream>
#include <string>
#include <vector>
/*
//
testcase input

3
26 40 83
49 60 57
13 89 99


//
testcase output

96
*/



using namespace std;
int a[1001][4];// non-R-G-B
int d[1001][4];
int answer=2100000000;
const int DEBUG  = 0;

//BF·Î Çª´Â °æ¿ì ºò¿À°¡ 2^n 
void solution(int num) {
  d[0][1] = a[0][1];
  d[0][2] = a[0][2];
  d[0][3] = a[0][3];
  
	for(int i=1 ; i<num ; i++ ) {
		d[i][1] = min(d[i-1][2], d[i-1][3]) + a[i][1];
		d[i][2] = min(d[i-1][1], d[i-1][3]) + a[i][2];
		d[i][3] = min(d[i-1][1], d[i-1][2]) + a[i][3];
	}
	
	for(int i=1 ; i<=3 ; i++ ) {
		if(DEBUG) { 
			printf("d[num-1][i]:%d\n",d[num-1][i]);
		}
		if(d[num-1][i] < answer) {
			answer = d[num-1][i];
		}
	}
}


int main(void) {
	int n;
	scanf("%d",&n);
	for(int i=0; i<n ; i++) {
		scanf("%d %d %d",&a[i][1],&a[i][2],&a[i][3]);
	}
	
	if(DEBUG) {
		printf("n:%d\n",n);
		for(int i=0; i<n ; i++) {
			printf("%d %d %d\n",a[i][1],a[i][2],a[i][3]);
		}
	}
	
	//solver
	solution(n);
	
	
	printf("%d\n",answer);
  return 0;
}

