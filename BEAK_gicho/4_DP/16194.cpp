#include <iostream>
#include <string>
#include <vector>


using namespace std;
int solution(int n);
int d[10002]={0,};
int price[10001]={0,};

int main(void) {
	int num;
	scanf("%d",&num);
	for(int i=1 ; i<=num ; i++) {
		scanf("%d",&price[i]);
		//printf("%d\n",solution(n));
		d[i]=99999999;
	}
	
	
	printf("%d\n",solution(num));
    return 0;
}

int solution(int n) {
    //insert n : target
    //return ans : max amount of card price
    
    for(int i=1 ; i<=n ; i++) {
    	for(int j=1 ; j<=i ; j++) {
    		d[i] = min(d[i],d[i-j]+price[j]);
		}
	}
	
	return d[n];
}

