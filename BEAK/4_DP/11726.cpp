#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n);

int fibo[1001];
int x10007 = 0;
int answer = 0;

int main(void) {
	int n;
	scanf("%d",&n);
	printf("%d\n",solution(n));

    return 0;
}

int solution(int n) {
    
 	fibo[0]=1;
 	fibo[1]=1;
 	
	for(int i=2 ; i<=n ; i++) {
		fibo[i] = fibo[i-1] + fibo[i-2];
		if(fibo[i]>=10007) {
			fibo[i] = fibo[i]%10007;
			x10007++;
		}
		//printf("fibo[%d] : %lld\n",i,fibo[i]);
		
	}  	
	//printf("%lld * 123456789\n",x129);
	return fibo[n];
}
