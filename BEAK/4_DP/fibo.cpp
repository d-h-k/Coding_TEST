#include <iostream>
#include <string>
#include <vector>

using namespace std;

void get_fibo(void);
unsigned long long fibo[1000000];
unsigned long long x129 = 0;
unsigned long long x0_10 = 0;

int mode = 1;//0 = x123456789 (x129), 1 = x10000000000 (x0_10)
int cnt = 10000;


int main(void) {
    printf("Hello world!\n");

	
	get_fibo();

    return 0;
}

void get_fibo(void) {
 	fibo[0]=0;
 	fibo[1]=1;
 	if( mode == 0 ) {
 		for(int i=2 ; i<cnt ; i++) {
			fibo[i] = fibo[i-1] + fibo[i-2];
			if(fibo[i]>=123456789) {
				fibo[i] = fibo[i]%123456789;
				puts("%123456789");
				x129++;
			}
			printf("fibo[%d] : %lld\n",i,fibo[i]);
			
		}  	
		printf("%lld * 123456789\n",x129);
	}
	else if( mode == 1 ){
		for(int i=2 ; i<cnt ; i++) {
			fibo[i] = fibo[i-1] + fibo[i-2];
			if(fibo[i]>=10000000000) {
				fibo[i] = fibo[i]%10000000000;
				puts("%10000000000");
				x0_10++;
			}
			printf("fibo[%d] : %lld\n",i,fibo[i]);
			
		}  
		printf("%lld * 10000000000\n",x0_10);	
	}
	
	return;
}
