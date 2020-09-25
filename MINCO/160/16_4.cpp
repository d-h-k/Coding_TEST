#include <cstdio>

int main() {
	int arr[3][4];


	for(int i=0 ; i<2 ; i++){
		for(int j=0 ; j<4 ; j++) {
			scanf("%d",&arr[i][j]);
		}
	}

	for(int k=0; k<4 ; k++) {
		printf("%d ",arr[0][k]+arr[1][3-k]);
	}
	printf("\n");
	return 0;
}


	
