#include <cstdio>

int main() {
	int arr[10];


	scanf("%d %d",&arr[0],&arr[1]);
	//arr[2] = arr[0]*arr[1];
	for(int i=2 ; i<=6 ; i++) {
		arr[i] = arr[i-1] * arr[i-2];
	}
	printf("%d\n", arr[5]);
	return 0;
}

