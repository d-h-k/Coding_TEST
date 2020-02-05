/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;
int prime[1000000];
int pn=0;
bool check[1000001]={0};//true=Not prime, false=prime;
const int DEBUG = 1;
int is_prime(int num);
int main(int argc, char** argv)
{
	int n=1000000,gcn;
	int a, b;
	for(int i=2 ; i<=n ; i++) {
		if(check[i] == false) {
			prime[pn++]=i;
			for(int j=i*2 ; j<=n ; j+=i) {
				check[j]=true;
			}
		}
	}

	/*
	if(DEBUG) {
		for(int i=0 ; i<pn ; i++) {
			printf("%d ",prime[i]);	
		}
	}*/

	scanf("%d",&gcn);
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
	

	

	return 0;//
}

int is_prime(int num) {
	return !check[num];
}