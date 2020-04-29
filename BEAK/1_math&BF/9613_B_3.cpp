#include <cstdio>
#include <iostream>

using namespace std;

int get_gcd(int a, int b);
int map[101];//if local var, stack overflow
int gcd[10201];
long long sum=0;
const int DEBUG=0, AUTO=1;

int main(int argc, char** argv) {
    int T=0,num,gcdidx=0;
	/*
    if(AUTO) {
		FILE* fp;
    	fp = freopen("testdata/9613_B.txt","r",stdin);
		if(DEBUG && AUTO && (fp==0)) {
			puts("NO File Existed!");
			exit(1);		
		}
	}
	*/
	
	scanf("%d",&T);
	for(int test_case=1 ; test_case<=T ; test_case++) {
        sum=0,gcdidx=0;
		scanf("%d",&num);
        //scanf("%d",&map[j]);
        
		for(int j=0 ; j<num ; j++) {
            scanf("%d ",&map[j]);
        }
        
        //gcd = get_gcd(map[0],map[1]);
		for(int i=0 ; i<num ; i++) {
			for(int j=i+1 ; j<(num) ; j++ ) {
				gcd[gcdidx] = get_gcd(map[i],map[j]);
				gcdidx++;
			}
				
		}
		
		for(int i=0 ; i<gcdidx ; i++) {
			sum += (long long)gcd[i];
		}
        /*
        if(DEBUG) {
        	puts("\n\n\nDEBUG======================================");
        	for(int j=0 ; j<num ; j++) {
	            printf("map[%d]:%d\n",j,map[j]);
	        }
	        
	        //gcd = get_gcd(map[0],map[1]);
			for(int i=0 ; i<num ; i++) {
				printf("gcd[%d]:%d\n",i,gcd[i]);	
			}
			
			for(int i=0 ; i<num ; i++) {
				printf("sum:%d, gcd[%d]:%d\n",sum,i,gcd[i]);
			}
	        puts("======================================\n\n\n");	
		}
        */
        printf("%lld\n",sum);
    }
   

    return 0;
}


int get_gcd(int a, int b) {
    int temp = 0;
    if(a<b) {
        temp=a;
        a=b;
        b=temp;
    }

    while(b!=0) {
        temp = a%b;
        a=b;
        b=temp;
    }


    return a;
}
