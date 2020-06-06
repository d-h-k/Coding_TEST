//
 
#include<iostream>
#include <cstdio>
#include <cstring>

#define DEBUG 1

using namespace std;

const char* caa[8] = 	{
							"c="
							"c-",
							"dz=",
							"d-",
							"lj",
							"nj",
							"s=",
							"z="
							};
const int c2len[8] =  {
							2,
							2,
							3,
							2,
							2,
							2,
							2,
							2
							};
							

int main(int argc, char** argv)
{
	int M,N,T, ans=0, t_adj=0;
	/////////////////////////////////////////////////////////////////////////////////////////////
	/* coding here!!*/
	//printf("info, len:%d,",len);
	char buf[101];
	
	scanf("%s",&buf);
	int len = strlen(buf);
	if(DEBUG) {
		printf("info1 ->> len(buf):%d, t_adj:%d\n",len,t_adj);
	}
	for(int i=0 ; i<len ; i++	) {
		for(int j=0 ; j<7 ; i++) {
			if(0 == strncmp(&buf[i],caa[j],c2len[j]) ) {
				t_adj += c2len[i]-1;
				if(DEBUG) {puts("fined croa!!");}
			}
		}
	}
	
		
		
	/////////////////////////////////////////////////////////////////////////////////////////////

	
	if(DEBUG) {
		printf("info2 ->> len(buf):%d, t_adj:%d\n",len,t_adj);
	}
	printf("%d",len - t_adj);
	return 0;//
}
