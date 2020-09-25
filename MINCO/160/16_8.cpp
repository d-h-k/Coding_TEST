#include<cstdio>
#include <cstring>

int is_Exist(char * buf1, char * buf2) {
	char temp1 = *buf1;	
	char temp2 = *buf2;	
	char L1[4] = {'G','K','T'};
	char L2[4] = {'P','A','C'};
	bool upp = false;
	bool low = false;
	for(int i=0; i<3 ; i++) {
					
		if(temp1 == L1[i] ) {
			upp=true;	
		}


		if(temp1 == L2[i] ) {
			
			low=true;	
		}


		if(temp2 == L1[i] ) {
			
			upp=true;	
		}


		if(temp2 == L2[i] ) {
			
			low=true;	
		}

	}

	if(upp && low) {
		return 2;
	}
	else if(upp || low) {
		return 1;
	}
	else {
		return 0;
	}

	return 0;
}

int main() {

	char buf1,buf2;
	scanf("%c %c",&buf1, &buf2);


		if( 2 == is_Exist(&buf1, &buf2)) {
			printf("대발견");
			return 0;
		}
		else if(1 ==  is_Exist(&buf1, &buf2)) {
			printf("중발견");
			return 0;
		}
		else {
			printf("미발견");
			return 0;
		}

	return 0;
}
