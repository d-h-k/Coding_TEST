#include <iostream>
#include <string>
#include <vector>

using namespace std;


int n2t[1001];
int x10007 = 0;
int answer = 0;

int solution(int n) {
    
 	
	for(int i=3 ; i<=n ; i++) {
		n2t[i] = n2t[i-1] + n2t[i-2]*2;
		if(n2t[i]>=10007) {
			n2t[i] = n2t[i]%10007;
		}
	}  	
	
	return n2t[n];
}


int main(void) {
	int n;
	scanf("%d",&n);
	n2t[0]=1;
 	n2t[1]=1;
 	n2t[2]=3;
 	
	printf("%d",solution(n));
	//printf("%d\n",adv(n));

    return 0;
}

