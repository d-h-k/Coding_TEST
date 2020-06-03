//10809
#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
char alp[26]={0,};
int main() {
	int n,temp,ans=0;
  char map[101];
  
	scanf("%s",&map);
	n=strlen(map);	
	memset(alp,-1,sizeof(alp));
	for(int len =0 ; len<n ; len++) {
		if(alp[map[len]-97] == -1) {
			alp[map[len]-97] = len;
		}
		else {}
	}
	
	for(int i=0; i<26 ; i++) {
		printf("%d ",alp[i]);
	}
	
	return 0;
	
	
}


