#include <cstdio>
#include <cstring>
//DFSAQP >>2,3
#define DEBUG 0

int _strlen(char* s1) {
	int len = 0;
	while (s1[len] != '\0' )
	{
		len++;
	}
	return len;
}

int main() {
	char buf[1000];
	char front = 'Z', back = 'A';
	int f_idx = 0, b_idx = 0;
	int slen;
	int adrt[27] = { 0, };
	memset(buf, '\0', sizeof(buf) / sizeof(char));
	fgets(buf, 999, stdin);
	slen = _strlen(buf);
	for (int i = 0; i < slen; i++) {
		adrt[int(buf[i] - 'A')]++;
		if ((buf[i]) < front) {
			front = buf[i];
			f_idx = i;
		}

		if ((buf[i]) > back) {
			back = buf[i];
			b_idx = i;
		}
	}

	if (DEBUG) {
		for (int i = 0; i < 26; i++) {
			printf("%c : %d\n", ('A' + char(i)), adrt[i]);
		}

	}


	//for(int i=0 ; i<26 ;i++) {
	printf("%d\n", b_idx);
	printf("%d\n", f_idx);
	
	//}





	return 0;
}
//DFSAQP >> 2,3
