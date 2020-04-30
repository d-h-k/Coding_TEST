// BF -> time over: fail
//mistake - delete please
#include <iostream>
#include <string>
#include <vector>


//notion ->> https://www.acmicpc.net/problem/1699
/*
자연수 N 을 주고 --- 제곱수들의 합으로 표현할 때 항의 최소갯수
예시 11 = 3*3 + 1 + 1
11 = 1+1+1+1+..(11번)할수도 있는데 최소항으로
11 = 2*2 + 2*2 + 2*2 + 1+1...으로 만들수 있지만 최소항이 아 님 

BF로 풀면 시간초과 빅오가 n^3 
*/

// testcase :: in:7, out:4
using namespace std;
int d[100002];
int answer=999999;
const int DEBUG = 0;

void solution(int n) {
  for(int i=1; i<=n ; i++ ) {
  	d[i] = i;
  	for(int j=1 ; j*j <= i ; j++ ) {
  		if(DEBUG) { 
  			printf("d[%d]:%d , d[%d-%d*%d]+1:%d\n",i,d[i],i,j,j,d[i-j*j]+1);
			}
			if(d[i] > d[i-j*j]+1) {
  			d[i] = d[i-j*j]+1;
  			if(DEBUG) printf("d[%d]:%d\n",i,d[i]);
  		}
  	}
  }
  
  if(DEBUG) {
  	puts("DEBUG : dp map view");
  	for(int i=0 ; i<=n ; i++ ) {
  		printf("d[%d]:%d ",i,d[i]);
  	}
  	puts("");
  }
}

int main(void) {
	int n;
	scanf("%d",&n);
	solution(n);
	printf("%d\n",d[n]);
    return 0;
}


