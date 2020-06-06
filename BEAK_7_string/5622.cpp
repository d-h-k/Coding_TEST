//
 
#include<iostream>
#include <cstdio>
#include <cstring>

#define DEBUG 0

using namespace std;
int a2n[26] = {2,2,2//ABC
							,3,3,3//DEF
							,4,4,4//GHI
							,5,5,5//JKL
							,6,6,6//MNO
							,7,7,7,7//PQRS
							,8,8,8//TUV
							,9,9,9,9//WXYZ
							};//A=0, B=1, C=2 ..... Z=25
int main(int argc, char** argv)
{
	int M,N,T, ans=0;
	/////////////////////////////////////////////////////////////////////////////////////////////
	/* coding here!!*/
	//printf("info, len:%d,",len);
	char buf[16];
	scanf("%s",&buf);
	int len = strlen(buf);
	
	for(int i=0; i<len ; i++) {
		ans += a2n[(int)(buf[i]-'A')];		
	}
	
		
		
		
		
	/////////////////////////////////////////////////////////////////////////////////////////////

	
	if(DEBUG) {
		//printf("info, len:%d,",len);
	}
	printf("%d",ans+len);
	return 0;//
}
