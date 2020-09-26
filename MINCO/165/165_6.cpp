#include <cstdio>
#include <cstring>

#define DEBUG 0

int main() {
	char buf[1000];
	char front = 'Z' , back = 'A';
	int f_idx=0, b_idx=0;
	int slen;
	slen = strlen(buf);
	int adrt[27]={0,};


	fgets(buf,999,stdin);
	for(int i=0 ; i<slen ; i++) {
		adrt[int(buf[i]-'A')]++;
		if((buf[i]) > front) {
			front = buf[i];
			f_idx = i;
		}

		if((buf[i]) > back) {
			back = buf[i];
			b_idx = i;
		}
	}

	if(DEBUG) {
		for(int i=0 ; i<26 ;i++) {
			printf("%c : %d\n",('A'+char(i)),adrt[i]);}

	}


	//for(int i=0 ; i<26 ;i++) {
		printf("%d\n",f_idx);
		printf("%d\n",b_idx);
	//}


	


	return 0;
}

