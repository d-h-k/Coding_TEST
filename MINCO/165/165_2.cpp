#include <cstdio>
#define DEBUG 0
int main() {
	char alp[6][6];
	char temp = 'A';
	
	int a,b;
	scanf(" %d %d",&a,&b);

	for(int x=2 ; x>=0 ; x--){
		for(int y=5 ; y>=0 ; y--){
			alp[y][x] = temp;
			temp++;
		}
	}


	if(DEBUG) {
	puts("==========================================");
	for(int i=0 ; i<6 ; i++){
		for(int j=0 ; j<6 ; j++){
			printf("%c ", alp[i][j]);
		}
		puts("");
	}
	puts("==========================================");
	}
	
	printf("%c",alp[a][b]);
	return 0;
}

