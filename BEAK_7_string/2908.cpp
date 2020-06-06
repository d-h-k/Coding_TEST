//
 
#include<iostream>
#include <cstdio>
#include <cstring>

#define DEBUG 0

using namespace std;

int main(int argc, char** argv)
{
	int M,N,T,rp = -1,len,rim=10;
	/////////////////////////////////////////////////////////////////////////////////////////////
	/* coding here!!*/
	//printf("info, len:%d,",len);
	
	cin >> M >> N;
	for(int i=0; i<3 ; i++) {
		if(M % rim == N % rim) {
			rim = rim*10;
			continue;
		}
		else if(M % rim < N % rim){
			rp = N;
			break;
		}
		else if(M % rim > N % rim){
			rp = M;
			break;
		}
		else {
			puts("Logical ERROR");
		}
	}
		if(rp == -1) {
			printf("same");
		}
		else {
			int temp=rp;
			rim=10;
			for(int i=0; i<3 ; i++) {
				
				printf("%d",temp%rim);
				temp=temp/10;
			}
			
			
		}
	
	
	/////////////////////////////////////////////////////////////////////////////////////////////
	
	
	
	if(DEBUG) {
		//printf("info, len:%d,",len);
	}
	
	return 0;//
}
