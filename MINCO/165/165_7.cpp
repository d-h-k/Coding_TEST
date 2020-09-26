#include <cstdio>
#include <cstring>

#define DEBUG 1
int main() {
	
	int arr[7][4];

	for(int i=0 ; i<=6 ; i++) {
		for(int j=0 ; j<4 ; j++) {
			arr[i][j] = j+1+(4*i);	
			if(DEBUG) {printf("%d ",arr[i][j]);}
		}
		if(DEBUG) { puts("");}
	}

	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	for(int k=0 ; k<4 ; k++) {
		arr[a][k] =0;
		arr[b][k] =0;
		arr[c][k] =0;
	}


	// print ans=======================================
	for(int i=0 ; i<=6 ; i++) {
		for(int j=0 ; j<4 ; j++) {
			printf("%d ",arr[i][j]);
		}
		puts("");
	}




	return 0;
}

