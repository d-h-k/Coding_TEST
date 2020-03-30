#define _CRT_SECURE_NO_WARNINGS

#include <string>
#include <vector>
#include <cstdio>
#include <cstring>

using namespace std;

const int DEBUG = 1;

int solution(vector<vector<int>> board, vector<int> moves) {
	int answer = 0;
	int y = board[1].size();
	int x = board.size();

	vector<int> bket;

	if (DEBUG) {//board[y][x]//board[i][j]
		puts("before move");
		for (int i = 0; i < y; i++) {
			for (int j = 0; j < x; j++) {
				printf("%d ", board[i][j]);
			}
			puts("");
		}
	}
	

	int n = moves.size();
	for (int i = 0; i < n; i++) {
		//�Ǿ� ���� �ӽ����� �� ����
		int temp = moves[i];
		//@@ moves.erase(moves.begin());
		temp -= 1;

		//temp �� ���ڰ� x=temp �� �ٿ� ��������
		bool is_ok = false;
		for (int j = 0; j < y; j++) {
			is_ok = false;
			if (board[j][temp] != 0) {
				bket.push_back(board[j][temp]);
				board[j][temp] = 0;
				is_ok = true;
				break;
			}
		}
		if (is_ok == false) {
			if (DEBUG) puts("board underflow!!");
		}
	}

	if (DEBUG) {
		printf("bket.size():%d\n", bket.size());
		puts("after move");
		for (int i = 0; i < y; i++) {
			for (int j = 0; j < x; j++) {
				printf("%d ", board[i][j]);
			}
			puts("");
		}
	}
	

	//���� �� ��������Ƿ� �ϳ��� �ߺ��� ����
	int m = bket.size();
	if (DEBUG) {
		puts("before delete");
		for (int i = 0; i < m; i++) {
			//printf("bket[%d]:%d,  bket[%d]:%d \n",i,bket[i],i+1,bket[i+1]);
			printf("bket[%d]:%d \n", i, bket[i]);
		}
		puts("\n");
	}
	
	
	//�ߺ�Ž�� �� ����
	int after;
	int del;
	bool is_find = false;
	do {

		del = 0;
		//int m = bket.size();
		m = bket.size();
		is_find = false;
		for (int i = 0; i < m-1; i++) {
			if (bket[i] == bket[i + 1]) {
				del = i;
				is_find = true;
				break;
			}
		}
		if (del != 0) {
			answer = answer + 2;
			//bket.erase(bket.begin() + del, bket.begin() + del + 1);
			bket.erase(bket.begin() + del);
			bket.erase(bket.begin() + del);

			after = bket.size();

		}
		
	}while (del !=0 );
	//����� �ߺ� ����
	


	//�ߺ� ���� �� 
	if (DEBUG) {
		int m = bket.size();
		if (DEBUG) { puts("after delete"); }
		for (int i = 0; i < m; i++) {
			printf("bket[%d]:%d\n", i, bket[i]);

		}
	}

	return answer;
}



int main(int argc, char** argv)
{
	vector<vector<int>> tc_board = { {0, 0, 0, 0, 0},{0, 0, 1, 0, 3},{0, 2, 5, 0, 1},{4, 2, 4, 4, 2},{3, 5, 1, 3, 1} };
	vector<int> tc_moves = { 1, 5, 3, 5, 1, 2, 1, 4 };
	
	int answer = solution(tc_board, tc_moves);
	printf("answer : %d\n", answer);

}