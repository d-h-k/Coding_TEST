#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int a[100];

int n,n_pul,n_min,n_mul,n_div;
int mini=1111111111, maxi=-1111111111;

void solution(int idx,int cur,int pul,int min,int mul,int div) {
    printf("idx:%d, cur:%d, pul:%d, min:%d, mul:%d, div:%d\n",idx, cur, pul, min, mul, div);
	if(idx-1==n) {
		
    	maxi = max(maxi,cur);
    	if(maxi<cur) {
    		maxi=cur;
		}
    	//mini = mini>cur ? cur:mini;
    	if(mini>cur) {
    		mini=cur;
		}
		
		printf("return !!  mini:%d, maxi:%d\n",mini,maxi);
    	return;
	}
	else {
		if(pul<0 || min<0 || mul<0 || div<0 ) {
			return; 
		}
		solution(idx++,cur+a[idx],pul-1,min,mul,div);	
		solution(idx++,cur-a[idx],pul,min-1,mul,div);	
		solution(idx++,cur*a[idx],pul,min,mul-1,div);	
		solution(idx++,cur/a[idx],pul,min,mul,div-1);	
		
		/*
		if(pul<0) {
			solution(idx++,cur+a[idx],pul-1,min,mul,div);	
		}
		if(min<0) {
			solution(idx++,cur-a[idx],pul,min-1,mul,div);	
		}
		if(mul<0) {
			solution(idx++,cur*a[idx],pul,min,mul-1,div);	
		}
		if(div<0) {
			solution(idx++,cur/a[idx],pul,min,mul,div-1);	
		}
		*/
		puts("No hochll!! ");
	}
}

int main(void) {
    scanf("%d ",&n);
    for(int i=0 ; i<n ; i++) {
    	scanf("%d ",&a[i]);
	}
    scanf("%d %d %d %d",&n_pul,&n_min,&n_mul,&n_div);
    solution(1,a[0],n_pul,n_min,n_mul,n_div);

    printf("%d\n%d\n",maxi,mini);
	
	return 0;
}

