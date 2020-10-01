#include <cstdio>

int arr[] = {3,7,4,1,9,4,6,2};


int rec(int dep) {
	if(dep <= 0 ){
		printf("%d ",arr[dep]);
		return 0;
	}

	else {
		
		printf("%d ",arr[dep]);
		rec(dep-1);
		printf("%d ",arr[dep]);
	}
	return 0;
}




int main() {

	int idx;
	scanf("%d",&idx);
	
	rec(idx);
	return 0;
}

