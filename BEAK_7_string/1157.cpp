//1157 단어공부
 
#include<iostream>
#include <cstdio>
#include <cstring>

#define DEBUG 0
using namespace std;
int map[27];//a=1,z=26


int main(int argc, char** argv)
{
	int M,N,T,rp,len;
	
	int dif = 32;
	char cdif = 32;
	char buf[1000001];
	memset(map,0,sizeof(map));
	
	//fflush(stdin);
	fgets(buf,sizeof(buf),stdin);
	//scanf("%d",&T);
	len = strlen(buf);
	
	
	
	//number of alphabet counting! 
	for(int i=0 ; i<len ; i++) {
		
		char curalp = buf[i];
		if(DEBUG) {printf("BEFORE :: curalp: %d\n",curalp);}
		if('a' <= curalp && curalp <= 'z') {
			curalp -= ('a'-1);
		}
		else if('A' <= curalp && curalp <= 'Z'){
			curalp -= ('A'-1);
		}
		else if( curalp == ' ' || curalp == '\n' ) {
			curalp=0;
		}
		else {
			//puts("LOGICAL ERROR, think againg Buckuying DULL");
		}
		if(DEBUG) {printf("AFTER :: curalp: %d\n",curalp);}
		map[curalp]++;
		
	}
	
	/////////////////////////////////////////////////////////////////////////////////////////////
	/**/
	/////////////////////////////////////////////////////////////////////////////////////////////
	int max=0,midx=0;
	bool is_only= true;
	
	if(DEBUG) {puts("get MAX");}
	for(int i=1 ; i<27; i++) {
		if(max<map[i]) {
			max = map[i];
			midx=i;
			is_only= true;
		}
		else if(max == map[i]) {
			is_only= false;
		}
		else {
		}
	}


	if(is_only) {
		printf("%c\n",'A'+(char)midx-1);
	}
	else {
		puts("?");
	}
	
	if(DEBUG) {
		puts("alphabet frequnt");
		for(int i=1 ; i<=26 ; i++) {
			printf("%c: %d \n",'A'+i-1,map[i]);
		}
		printf("info ->>  len:%d,  dif:%d",len,dif);
	}
	
	return 0;//
}
