/// Brute Fore ->> time out, fail

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;
int answer=9999;
int d[1000000]={0};


int main() {
	int n=0; 
	scanf("%d",&n);
	d[1] = 0;// insert defalult valeue
	
	for(int i=2 ; i<=n ; i++) {
		//+1 case;
		d[i] = d[i-1] + 1;
		
		
		// x/2 case;
		if(i%2 == 0 && (d[i] > d[i/2]+1)) {
			d[i] = d[i/2] + 1;
		}
		
		// x/3 case;
		if(i%3 == 0 && d[i] > d[i/3] +1 ) {
			d[i] = d[i/3] + 1;
		}
	}
	
	
	
	printf("%d\n",d[n]);

    return 0;
}

/*
void om(int n,int dep){
	if(n==1) {
		if(answer > dep) {
			answer = dep;	
		}
		
		return;
	}
	else {
		om(n-1,dep+1);
		
		if(n%3==0) {
			om(n/3,dep+1);	
		}else {
		}
		
		if(n%2==0) {
			om(n/2,dep+1);	
		}else{
		}
		
	}
}



*/

