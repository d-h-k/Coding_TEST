/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include <algorithm>
using namespace std;

const int DEBUG = 1;
const int AUTO = 0;

int main(int argc, char** argv)
{
	register int len=7;
	register int snum[100]={0};
	
	if(!AUTO) {
		printf("Insert 1 ~ N for permutation, N:");
		scanf("%d",&len);
	}
	
	for(int i=0 ; i<len ; i++) {
		
		snum[i]=i+1;
	}
	
	
	static int k;
	do{
		k++;
		for(int i=0 ; i<len ; i++) {
			printf("%d ",snum[i]);
		}
		puts("");
		
	}while(next_permutation(&snum[0],&snum[len]) );
	
	
	
	if(DEBUG) {
		printf("k:%d =>> Factorial %d",k,len);
	}
	
	
	

	

	return 0;//
}

