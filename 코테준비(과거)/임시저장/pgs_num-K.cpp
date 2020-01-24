#include <string>
#include <vector>
#include <algorithm>
#define DEBUG 1
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
	vector<int> tempa;
	int t_idx = 0;
	//testcode
	/*
	for(int i=0 ; i<commands.size() ; i++) {
		printf(" comands.size() : %d, comands[i].size():%d\n" , commands.size(), commands[i].size() );
		for(int j=0 ; j<commands[i].size() ; j++) {
			printf("commands[%d][%d] : %d\n",i,j,commands[i][j]);
		}

	}*/
	for (int i = 0; i < commands.size(); i++) {
		if (DEBUG) { printf(" comands.size() : %d, comands[i].size():%d\n", commands.size(), commands[i].size()); }
		t_idx = 0;
		tempa.clear();
		//commands[i][0] //vector의 시작   //commands[i][1] //vector의 갯수
		for (int j = commands[i][1]; j < commands[i][1] + commands[i][0]; j++) {
			tempa[t_idx] = array[j];
			t_idx++;
			printf("tempa[%d]:%d", i, tempa[t_idx]);
		}

		sort(tempa.begin(), tempa.end());
		printf("commands[i][2]:%d\n", commands[i][2]);
		int turn = commands[i][2];
		int rr = tempa[turn];

		printf("rr:%d\n", rr);
		//
		return answer;
		answer.push_back(rr);
		return answer;

		//commands[i][2]//j번째 순서
		return answer;
	}

	return answer;
}