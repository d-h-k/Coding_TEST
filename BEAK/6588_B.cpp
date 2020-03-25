#include <iostream>
#include <cstring>

using namespace std;

int prime[50001] = {0,};//prime svae arr
int pn=0; // number of prime

bool np_check[100001] = {false,};//false = YES prime ,  true = NO prime

const int DEBUG = 1;

int  is_prime(int num) {
	return !np_check[num];
}

int main(int argc, char** argv)
{
	int n=0,gcn;
	int a, b;
	int gol_num = 0;
	//init
	
	while(1) {
		//init
		pn=0;
		memset(np_check,false,sizeof(np_check));
		memset(prime,0,sizeof(prime));
		//
		scanf("%d",&gol_num);
		if(gol_num==0) {
			exit(1);
		}
		else {
			//1. get prime table
			for(int i=2 ; i*i<=gol_num ; i++) {
				if( np_check[i] == false ) {
					prime[pn]=i;
					pn++;
					
					for(int j=2 ; j*(i)<=gol_num ; j++) {
						np_check[i] = true;
						
					}
				}
				else {
				}		
			}
			
			//2. use pritbl, brute-Force search
			for(int i=0 ; i<pn ; i++) {
				int temp = gol_num - prime[i];
				
				if(temp == prime[i]) {
						printf("%d = %d + %d\n",gol_num,temp,prime[i]);
						break;
					}
					else if(temp < prime[i]) {
						printf("Goldbach's conjecture is wrong.");
						break;
					}
					else {
						
					}
				
			}
			
			/*
			if(DEBUG) {
				for(int i=0 ; i<pn ; i++) {
					printf("%d ",prime[i]);	
				}
			}*/
			
			
		}	
	}
	
	
	/*for(int i = 2 ; i*i <= n ; i++) {
		if(check[i] == false) {
			prime[pn++] = i;
			for(int j = i*2 ; j <= n ; j+=i) {
				check[j]=true;
			}
		}
	}
	*/

	
	
	
	/*
	///
	do{
		scanf("%d",&gcn);
		if(gcn==0) {
			break;
		}
		if(gcn%2!=0 || gcn==0 || gcn<1) {
	        puts("Goldbach's conjecture is wrong.");
	        return 0;
	    }
		for(int i=0 ; i<1000000 ; i++) {
			int temp=gcn-prime[i];
			if(temp>1) {
				if(is_prime(temp)) {
					a=prime[i],b=temp;
				}
			}
		} 
	
	
		if(a>b) {
			int temp = a;
			a=b;
			b=temp;
		}
		printf("%d %d",a,b);
			
	}while(1);
	*/
	
	
	return 0;//
}

