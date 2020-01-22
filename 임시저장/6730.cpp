#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argv, char ** argc) {
	FILE * fp;
	int T;
	fp = freopen("6730_input.txt", "r", stdin);
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		int blockCount; 
		scanf("%d", &blockCount);
		

		int *blocks = new int[blockCount];

		for (int b = 0; b < blockCount; b++)
			scanf("%d", &blocks[b]);

		// up : �� ĭ �ö󰬴°� && down : �� ĭ �������°�
		// maxUp, maxDown : ���� ���� ���� ��ȭ
		int up, down, maxUp = 0, maxDown = 0;
		for (int i = 1; i < blockCount; i++) {
			// UP
			if (blocks[i] > blocks[i - 1]) {
				up = blocks[i] - blocks[i - 1];
				// maxUp ������Ʈ
				if (up > maxUp)
					maxUp = up;
			}
			// DOWN
			else {
				down = blocks[i - 1] - blocks[i];
				// maxDown ������Ʈ
				if (down > maxDown)
					maxDown = down;
			}
		}
		printf("#%d %d %d",t, maxUp, maxDown);
	}
	return 0;

}

//cout << "#" << t + 1 << " " << maxUp << " " << maxDown << endl;