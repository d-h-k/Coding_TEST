//https://www.acmicpc.net/problem/1152
//boj ´Ü¾îÀÇ °¹¼ö 


#include <iostream>
#include <string>
#include <vector>

#include <cstdio>
#include <cstring>

using namespace std;


char buf[100];

int main(int argc, char ** argv){
	const int DEBUG = 0;
	
	memset(buf, 0, sizeof(buf));
	//scanf("%s", ins);
	fgets(buf,sizeof(buf),stdin);
	//getline(stdin,buf);
	int len_buf = strlen(buf);

	int ans = 0;
	int head=0;
	int tail=0;
	
	
	
	/*
	//get headside whitespace
  for(int i=0 ; i<len_buf ; i++) {
    if(buf[i] != ' ') {
      head = i;
      //head++;
      break;
    }
  }

	//get tailside whitespace
  for(int i=(len_buf-2) ; i>0 ; i--) {
    if(buf[len_buf] != ' ') {
      tail = i;
      break;
    }
  }

	//      Teullinika Teullyeotzi     
	*/
	
	if(DEBUG) {
		printf("buf:%s,len_buf:%d , head:%d , tail:%d\n",buf,len_buf,head,tail);	
	}
	
	
	for(int i=head ; i<len_buf ; i++) {
	    //if(!( 'a' <= ins[i] <= 'z' || 'A' <= ins[i] <= 'Z'))
	    if(buf[i] == ' ') 
	    //if(!( 'a' <= buf[i] <= 'z' || 'A' <= buf[i] <= 'Z') )
	    {
	        ans++;
	        if(DEBUG) 
					{
						printf("find WS : %d\n",i);
	        
					}
	    }
	}
	
	
	if(buf[0] == ' ')
	{
		ans--;
	}
	if(buf[len_buf-2] == ' ')
	{
		ans--;
	}
	
	
	printf("%d\n",ans+1);

	return 0;
}

