// BF -> time over: fail
//mistake - delete please
#include <iostream>
#include <string>
#include <vector>

using namespace std;
void solution(int n,int dep);
int d[100002];
int answer=999999;

int main(void) {
	int n;
	scanf("%d",&n);
	solution(n,0);
	printf("%d\n",answer);
    return 0;
}

void solution(int n,int dep) {
    if(n==0) {
    	if(answer>dep) {
    		answer=dep;
		}
		return; 
	}
	else if(n<0){
		
		return;
		
	}
	else {
		solution(n-1,dep+1);
		solution(n-4,dep+1);
		solution(n-9,dep+1);
		
	}
	
}

