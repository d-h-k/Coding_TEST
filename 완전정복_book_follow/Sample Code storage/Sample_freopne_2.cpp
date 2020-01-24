#include <cstdio>
#include <iostream>
#define  MAX_LEN  1000

using namespace std;


int main(int argc, char** argv) {
	FILE *quot;
	char str[MAX_LEN], *result, *temp;
	int  i=0, T;
	int test_case;
	
	quot = freopen("input.txt", "r", stdin) ;
	if(quot == 0) {
		puts("File no found...");
	}
	//printf("%d",quot);
	
	while(temp != NULL) {
		temp = fgets(str, 999, quot);
		printf("%s",str);
	}
	
	//cin>>T;
	
	
   	fclose(quot);
   	
}
