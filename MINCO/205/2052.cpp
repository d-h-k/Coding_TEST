#include <cstdio>
#include <cstring>	

int main() {
	char buf[200];

	fgets(buf, 200, stdin);

	int slen = strlen(buf);

	for (int i = slen-2; i > -1; i--) {
		//buf[i]
		for (int j = i; j < slen; j++) {
			putc(buf[j], stdout);
		}
		//puts("");
	}


	return 0;
}

