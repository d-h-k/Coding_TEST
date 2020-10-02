#include <cstdio>

int arr[4][5] = {

	3,5,4,2,5,
	3,3,3,2,1,
	3,2,6,7,8,
	9,1,1,3,2
};

int patcal(int y,int x,int a, int b) {
	int sum=0;
	for(int i=y ; i<a ; i++ ) {
		for(int j=x ; j<b; j++) {
			sum += arr[i][j];
		}
	}
	return sum;
}


int main() {

	int a,b,temp;

	scanf(" %d %d",&a,&b);

	int maxi=-1,idx_y,idx_x;



	for(int i=0; i<4-a; i++) {
		for(int j=0 ; j<5-b ; j++) {
			temp = patcal(i,j,a,b);
			if(temp > maxi) {
				maxi = temp;
				idx_x = j;
				idx_y = i;
			}
		}
	}

	printf("(%d,%d)",idx_y,idx_x);

	return 0;
}

