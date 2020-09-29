#include <cstdio>

//숫자 6개를 입력받고, 2*3 배열에 순서대로 채워넣어라

//max 좌표를 구하는 함수

//min 좌표를 구하는 함수 

//min과 max 좌표를 출력하세요

struct _pos {
	int x;
	int y;
}typedef pos;

pos get_where_maxi(int dat[][3], int y, int x) {
	pos ret = { -1,-1 };
	int maxi = 0;

	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			if (maxi < dat[i][j]) {
				maxi = dat[i][j];
				ret.x = j;
				ret.y = i;
			}
		}
	}
	return ret;
}


pos get_where_mini(int dat[][3], int y, int x) {
	pos ret = { -1,-1 };
	int mini = 9999;

	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			if (mini > dat[i][j]) {
				mini = dat[i][j];
				ret.x = j;
				ret.y = i;
			}
		}
	}
	return ret;
}


int main() {
	pos cur,tst;
	int a, b;
	int arr[2][3];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			scanf(" %d", &arr[i][j]);

		}
	}

	cur = get_where_maxi(arr, 2, 3);
	printf("(%d,%d)\n",  cur.y,cur.x);


	tst = get_where_mini(arr, 2, 3);
	printf("(%d,%d)\n", tst.y, tst.x);





	return 0;
}

