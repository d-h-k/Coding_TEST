#include<cstdio>
#include <cstring>

int is_Exist(char * buf) {
	int slen = strlen(buf);

	for(int i=0; i<slen ; i++){
		if(buf[i] == 'M') {
			return 1;
		}
	
	}
	return 0;
}

int main() {
	char buf[2000];	

	for(int i=0 ; i<3 ; i++) {

		fgets(buf,2000,stdin);

		if( is_Exist(buf)) {
			printf("M이 존재합니다");
			return 0;
		}
	}
	printf("M이 존재하지 않습니다");




	return 0;
}
