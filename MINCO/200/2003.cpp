#include <cstdio>
#include <cstring>

int arr[6];

int mcj(int dep) {
	if(dep==5) {
		printf("%d ",arr[dep]);
		return 0;
	}
	else {
		printf("%d ",arr[dep]);
		mcj(dep+1);
		printf("%d ",arr[dep]);
	}

	return 0;	
}

int main() {

	

	for(int i=0 ; i<6 ; i++){
		scanf(" %d",&arr[i]);
	}
	
	mcj(0);
	 



	return 0;
}
