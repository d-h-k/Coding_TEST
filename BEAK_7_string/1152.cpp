   //
 
#include<iostream>
#include <cstdio>
#include <cstring>

#define DEBUG 0

using namespace std;
char buf[1000001];
int main(int argc, char** argv)
{
	int M,N,T,rp,len,head,tail, ans=0;
	/////////////////////////////////////////////////////////////////////////////////////////////
	/* coding here!!*/
	//printf("info, len:%d,",len);
	
	/////////////////////////////////////////////////////////////////////////////////////////////
	memset(buf,0,sizeof(buf));
	fgets(buf,sizeof(buf),stdin);
	len = strlen(buf);
	
	
	
	//get haed!!
	char temp;
	for(int i=0 ; i<len ; i++) {
		if(buf[i] != ' ') {
			head = i;
			break;
		}
	}
	
	
	//get tail
	for(int j=len-1 ; j>0 ; j--) {
		
		if(
			(
				('a' <= buf[j] && buf[j] <= 'z') ||
				('A' <= buf[j] && buf[j] <= 'Z')		
			)	 == true
		) {
			//if alphbet	
			if(DEBUG) {
				puts("Fine len of tail");
				printf("number of space ; %d \n",len-j-2);
			}
			tail = len-j-2;
			//len-j-2;
			
			break;
		}
		else{
			if(DEBUG) {puts("NO alpth");}
		}
	}
	
	//get answer
	for(int i=head ; i<len-tail-1 ; i++) {
		if(buf[i] == ' ') {
			ans++;
		}
	}

	
	if(DEBUG) {
		printf("info:  len:%d,   head:%d,  tail:%d\n",len,head, tail);
	}
	printf("%d\n",ans+1);	
	return 0;//
}
