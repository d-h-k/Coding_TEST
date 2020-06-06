/// Brute Fore ->> time out, fail

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;
int answer=INT_MAX;
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

int om2(int n,int dep){
	if(n==1) {
		return 0;
	}
	else {
		//for
		//for loop soling is impossible
	}
}


int main() {
	int n=0; 
	scanf("%d",&n);
	
	om(n,0);
	printf("%d\n",answer);

    return 0;
}


