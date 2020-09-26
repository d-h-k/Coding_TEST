//https://www.acmicpc.net/problem/1152
//boj ´Ü¾îÀÇ °¹¼ö 


#include <iostream>
#include <string>
#include <vector>

#include <cstdio>
#include <cstring>

using namespace std;
vector <string> ans;

int main(int argc, char ** argv){
	const int DEBUG = 1;
	char buf[100];
	memset(buf, 0, sizeof(buf));
	//scanf("%s", ins);
	fgets(buf,sizeof(buf),stdin);
	//getline(stdin,buf);
	int len_buf = strlen(buf);

	int ans = 0;
	
	
	
	
	
	if(DEBUG) {
		printf("len_buf:%d , head:%d , tail:%d\n",len_buf,head,tail);	
	}
	

	
	for(int i=head ; i<tail ; i++) {
	    //if(!( 'a' <= ins[i] <= 'z' || 'A' <= ins[i] <= 'Z')){
	    if(buf[i] == ' ') {
	        ans++;
	        if(DEBUG) 
					{
						printf("find WS : %d\n",i);
	        
					}
	    }
	}
	

	
	printf("%d\n",ans);

	return 0;
}

