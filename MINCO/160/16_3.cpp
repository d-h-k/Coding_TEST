#include <cstdio>
#include <cstring>

int main() {
	int num=0,len=0;
	char buf[100];
	scanf(" %s",buf);
	scanf(" %d",&num);

	for(int i=0 ; i<num ; i++) {
		printf("%c",buf[i]);
	}
	printf("A");
	len = strlen(buf);
	for(int i=num; i<len ; i++) {
		printf("%c",buf[i]);
	}

	return 0;
}




