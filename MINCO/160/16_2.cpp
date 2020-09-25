#include <stdio.h>

int main() {

	char arr[5][5] = {"ABKT","KFCF","BBQQ","TPZF"};
	
	int dirat[267]={0,};


	for(int i=0 ; i<4 ; i++) {
		for(int j=0 ; j<4 ; j++) {
					
						//printf("arr: %d \n",arr[i][j]);
						dirat[arr[i][j]]++;
		}
	}
	//for(int i=0 ; i<27 ; i++){
	//	printf("%d  ",dirat[i]);
	//}
	//
	char a,b;
	scanf("%c %c",&a, &b); 


	printf("%d\n",dirat[a]+dirat[b]);
	
	return 0;
}
