#include <cstdio>
#include <cstring>

int main() {
	char buf[200];
	fgets(buf,200,stdin);

	int slen = strlen(buf);
	/* if(slen%2==0) {
		puts("다른문장");
		return 0;
	}else*/ {

		int half = slen/2;
		for(int i=0 ; i<half ; i++) {
			if(buf[i] != buf[i+half]) {
				puts("다른문장");
				return 0;
			}
			
		}
	}

	puts("동일한문장");
	return 0;
	
	return 0;
}

