#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <cstdio>
#include <queue>

using namespace std;

struct Edge{
	int from, to;
};
Edge edge[20001];
int cnt[1001];
bool check[1001];
bool cmp(const Edge &u, const Edge &v) {
	if(u.from == v.from) {
		return u.to < v.to;
	} else {
		return u.from < v.from;
	}
	
}

int main(void) {
    printf("Hello world!");

    return 0;
}

int solution(int n) {
    int answer = 0;
    return answer;
}
