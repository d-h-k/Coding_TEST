#define _CRT_SECURE_NO_WARNINGS
/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int DEBUG = 1;
vector<int> lotto;

void solve(vector <int> &a, int index, int cnt) {

	if (cnt == 6) {
		for (int num : lotto) {
			printf("%d", num);
		}
		puts("");
		return;
	}

	int n = a.size();
	if (n == index) return;
	lotto.push_back(a[index]);
	solve(a, index + 1, cnt + 1);
	lotto.pop_back();
	solve(a, index + 1, cnt);
	return;
}

int main(int argc, char** argv)
{
	while (true) {
		int len, temp;
		scanf("%d", &len);
		vector <int> a(len);
		for (int i = 0; i < len; i++) {
			scanf("%d", &temp);
			a[i] = (temp);
		}
		solve(a, 0, 0);
		cout << '\n';

	}
	return 0;

	/*
	if(DEBUG) {
		printf("len:%d =>> ",len);
		for(int i=0 ; i<len ; i++) {
			printf("%d ",snum[i]);
		}
	}*/

	return 0;//
}

