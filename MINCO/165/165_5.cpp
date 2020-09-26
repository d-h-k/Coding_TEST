#include <cstdio>
#include <cstring>

int main() {


	char buf[1000];
	char a,b;
	int slen;
	fgets(buf,999,stdin);
	scanf(" %c",&a);
	scanf(" %c",&b);
	

	slen = strlen(buf);
	for(int i=0 ; i<slen ; i++) {
		if( buf[i] == a) {
			buf[i] = b;
		}

	}
	printf("%s", buf);


	return 0;
}

