#include <cstdio>

int main() {
	int a1[4][4];
	int a2[4][4];

	for(int i=0 ; i<4 ; i++ ) {
		for(int j=0 ; j<4 ; j++) {
			scanf("%d ",&a1[i][j]);
		}
	}


	for(int i=0 ; i<4 ; i++ ) {
		for(int j=0 ; j<4 ; j++) {
			scanf("%d ",&a2[i][j]);
		}
	}




	for(int i=0 ; i<4 ; i++ ) {
		for(int j=0 ; j<4 ; j++) {
			if(true == (a1[i][j] && a2[i][j])) {
				puts("걸리다");
				return 0;
			}
		}
	}


	puts("걸리지않는다");

	return 0;
}

