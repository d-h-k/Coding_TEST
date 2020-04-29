#include <iostream>
#include <string>
#include <vector>

using namespace std;
int solution(int n);

long long d[1000001][4];
const long long mod = 1000000009LL;
const unsigned int DEBUG = 1;

int main(void) {
	int n,T;
	scanf("%d",&T);//T: num of test-case
	for(int i=0 ; i<T ; i++) {
		scanf("%d",&n);
		printf("%d\n",solution(n));
	}
	
    return 0;
}

int solution(int n) {//if n==4 : 1-2-1, 1-3, 3-1 :: return 3 
  // relation(관계식) -> math modeling : DP 점화 
  
  // d[i][1] = d[i-1][2] + d[i-1][3]
  // d[i][2] = d[i-1][1] + d[i-1][3]
  // d[i][3] = d[i-1][1] + d[i-1][2]
  
  
  // exception : from 백준센 
	/*
	- 123더하기에서 한 것 처럼 d[0] = 1로 초기화하면 중복이 발생한다.
	- d[0][1] = 1, d[0][2] = 1, d[0][3] = 1 로 초기화 했다면
	- d[1][1] = d[0][2] + d[0][3] = 2 :: 중복이 발생하게 된다
	- 따라서, 이 문제는 예외 처리를 해야 한다.  
	*/ 
	d[0][3] = d[0][2] = d[0][1] = 0;
  d[1][3] = d[1][2] = d[0][1] = 0;
  d[2][3] = d[2][2] = d[2][1] = 0;
  
	d[1][1] = d[2][2] = d[3][3] = d[3][1]= d[3][2] = 1;
	
	for(int i=4 ; i<=n ; i++) {
		//d[i] = d[i-1] + d[i-2] + d[i-3];
		d[i][1] = (d[i-1][2] + d[i-1][3])%mod;
		d[i][2]	= (d[i-2][1] + d[i-2][3])%mod;
		d[i][3] = (d[i-3][1] + d[i-3][2])%mod;
			
		//printf("%d,",d[i]);
		  	
		
	}
	
	int temp = (d[n][1] + d[n][2] + d[n][3])%mod;
	if(DEBUG) { 
		printf("d[%d][1]:%d  ,d[%d][2]:%d  ,d[%d][3]:%d ,temp:%d\n",n,d[n][1],n, d[n][2],n, d[n][3],temp);
	} 
	return temp;
}

