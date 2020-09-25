#include <cstdio>

int main() {

	int arr[6] = {0,};

	for(int i=0 ; i<6 ; i++){
		scanf("%d", &arr[i]);
	}

	printf("%d",arr[0]);
	for(int i=1 ; i<6 ; i++ ) {
		arr[i] = arr[i] + arr[i-1];
		printf(" %d",arr[i]);
	}
return 0;
}

	
