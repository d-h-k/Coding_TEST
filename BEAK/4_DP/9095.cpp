#include <iostream>
#include <string>
#include <vector>

using namespace std;
int solution(int n);
long long d[1000002][4];
const long long mod = 1000000009LL;
const int limit = 100000;

int main(void) {
	int n,T;
	scanf("%d",&T);
	for(int i=0 ; i<T ; i++) {
		scanf("%d",&n);
		printf("%d\n",solution(n));
	}
	
    return 0;
}

int solution(int n) {
    //
    d[0]=1;
    d[1]=1;
    d[2]=2;
    d[3]=4;
    d[4]=7;
    if(n<=4) {
    	return d[n];
	} 
	else {
		for(int i=5 ; i<=n ; i++) {
			d[i] = d[i-1] + d[i-2] + d[i-3];
			
			if(d[i]>=1000000009) {
				d[i] = d[i]%1000000009;	
			}
		//printf("%d,",d[i]);
		}  	
		
	}
	
	return d[n];
}

