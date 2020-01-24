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

		// up : 몇 칸 올라갔는가 && down : 몇 칸 내려갔는가
		// maxUp, maxDown : 가장 심한 높이 변화
		int up, down, maxUp = 0, maxDown = 0;
		for (int i = 1; i < blockCount; i++) {
			// UP
			if (blocks[i] > blocks[i - 1]) {
				up = blocks[i] - blocks[i - 1];
				// maxUp 업데이트
				if (up > maxUp)
					maxUp = up;
			}
			// DOWN
			else {
				down = blocks[i - 1] - blocks[i];
				// maxDown 업데이트
				if (down > maxDown)
					maxDown = down;
			}
		}
		printf("#%d %d %d",t, maxUp, maxDown);
	}
	return 0;

}

//cout << "#" << t + 1 << " " << maxUp << " " << maxDown << endl;