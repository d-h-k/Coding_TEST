#include<cstdio>
#include <cstring>

int is_Exist(char * buf) {
	char temp = *buf;	
	char rainbow[4] = {'M','T','K','C'};
	
	for(int i=0; i<4 ; i++) {
		
		if(temp == rainbow[i] ) {
			return 1;
		}

	}
	return 0;
}

int main() {

	char buf;
	scanf("%c",&buf);


		if( is_Exist(&buf)) {
			printf("발견");
			return 0;
		}
	printf("미발견");
	return 0;
}
