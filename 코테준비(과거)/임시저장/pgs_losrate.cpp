#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int const DEBUG = 0;

//vector<int> stgmap;
int man, nuz;
int stgmap[501];
int chall[501];
double lostrate[501];

bool comp(int a, int b) {
	if (lostrate[a] == lostrate[b]) {
		return a < b;
	}
	else {
		return (lostrate[a] > lostrate[b]);
	}

}

vector<int> solution(int N, vector<int> stages) {
	vector<int> answer;
	//stgmap.assign(N,0);
	man = stages.size();
	nuz = 0;
	for (int i = 0; i < man; i++) {
		stgmap[stages[i]] = stgmap[stages[i]] + 1;
	}
	for (int i = 0; i < man; i++) {
		//i번째 스테이지맵에서 도전인원을 구함
		chall[i] = man - nuz;
		nuz = nuz + stgmap[i];

		//i번쨰 스테이지의 실패율을 구함
		if (chall[i] == 0) {
			lostrate[i] = 0;
		}
		else {
			lostrate[i] = (double)stgmap[i] / (double)chall[i];
		}

	}
	if (DEBUG) {
		for (int i = 1; i <= N; i++) {
			printf("stg %d : %d,  chall:%d, lostrate:%lf\n", i, stgmap[i], chall[i], lostrate[i]);
		}
	}

	for (int i = 0; i < N; i++) {
		//정답 리턴 초기화(스테이지들)
		answer.push_back(i + 1);
	}

	sort(answer.begin(), answer.end(), comp);

	return answer;
}

int main(int argc, char ** argv) {
	//vector<int> solution(int N, vector<int> stages) {
	vector<int> ret;
	vector<int> input = {2, 1, 2, 6, 2, 4, 3, 3};
	ret = solution(5, input);
	int n = ret.size();
	for (int i = 0; i<n; i++) {
		printf("%d ", ret[i]);
	}

	return 0;
}