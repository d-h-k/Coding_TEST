#include <string>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <iostream>

#define DEBUG 1

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands);

int main() {
	vector<int> arr{ 1, 5, 2, 6, 3, 7, 4 };
	vector<vector<int>> com{ {2, 5, 3},{4, 4, 1},{1, 7, 3}};

	solution(arr, com);

	return 0;
}


vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
	vector<int> temp;
	int len = 0;
	for (int test_case = 0; test_case < commands.size(); test_case++) {


		if (DEBUG) { //print commands
			printf("commands[%d]:%d,%d,%d\n", test_case, commands[test_case][0],
				commands[test_case][1], commands[test_case][2]);
			len = commands[test_case][1] - commands[test_case][0];
			//���������� �������� �迭 ���� �߶󳻱�
			//arrary()
			for (int i = 0; i < len; i++) {
				temp.push_back(array[i + test_case, commands[test_case][0]]);
			}



			//�迭 �����ϱ�
			sort(temp.begin(), temp.end());


			//�迭�� n��° ���� vector�� ����ֱ�
			answer.push_back(temp[commands[test_case][2]]);
			temp.clear();
		}
	}
	//printf("commands:%d,%d,%d",commands[0][0],commands[0][1],commands[0][2]);

	//������, ����, ������ n ��° ����




	return answer;
}