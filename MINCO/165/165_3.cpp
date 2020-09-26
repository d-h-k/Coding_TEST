#include <cstdio>


struct _pos{
	int x;
	int y;
}typedef pos;

pos get_where_maxi(int dat[][],int y, int x) {
	pos ret;
	return ret;
}


pos get_where_mini(int dat[][], int y,int x) {
	pos ret;
	return ret;
}


int main() {
	pos cur;
	int a,b;
	int arr[2][3];
	for(int i=0 ; i<2 ; i++) {
		for(int j=0 ; j<3 ; j++) {
			scanf(" %d", &arr[i][j]);
		
		}
	}
			
	cur = get_where_maxi(arr,2,3);
	printf("%d %d\n",cur.x, cur.y);

	
	cur = get_where_mini(arr,2,3);
	printf("%d %d\n",cur.x, cur.y);

	



	return 0;
}

