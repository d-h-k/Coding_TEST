#include <cstdio>

int main() {
	int arr[7];
	
	for(int i=0; i<7 ; i++) {
		scanf("%d",&arr[i]);
	}

	for(int i=4  ; i<=7 ; i++) {
		for(int j=0 ; j<i ;j++) {
			printf("%d ",arr[j]);
		}
		puts("");
	}



	return 0;
}

