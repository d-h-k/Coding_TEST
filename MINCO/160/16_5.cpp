#include <cstdio>
#include <cstring>

int main() {
	char buf[2000];

	fgets(buf,200,stdin);
	//printf("%s",buf);
	
	int a,len;
	scanf("%d",&a);
	len = strlen(buf);

	for(int i=0; i<a ; i++) {
		printf("%c",buf[i]);
	}
	
	for(int i=a+1; i<len ; i++) {
		printf("%c",buf[i]);
	}
	
	return 0;
}
