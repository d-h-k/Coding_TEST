#include <cstdio>
#define DBG 0
int main() {
	int arr1[4];
	int arr2[4];
	int merge[8]= {-1,};
	for(int i=0 ; i<4 ; i++) {
		scanf(" %d",&arr1[i]);
		if(DBG) {printf("%d ",arr1[i]);}
	}

	for(int i=0 ; i<4 ; i++) {
		scanf(" %d",&arr2[i]);
		if(DBG) {printf("%d ",arr2[i]);}
	}

	int idx1=0,idx2=0;
	int midx=0;
	for(int i=0 ; i<7 ; i++ ) {
		if( arr1[idx1] > arr2[idx2] && (idx2 <= 3) ) {
			merge[i] = arr2[idx2];
			idx2++;
		}
		else {
			merge[i] = arr1[idx1];
			idx1++;
		}
	}
	
	if( arr1[idx1] > arr2[idx2] ) {
		merge[7] = arr1[3];
	}
	else{
		merge[7] = arr2[3];
	}

	for(int i=0; i<8 ; i++) {
		printf("%d ",merge[i]);
	}



	return 0;
}

