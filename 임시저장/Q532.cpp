#include <cstdio>
#include <algorithm>

using namespace std;

int T, is_Answer;
int N, P;

struct st {
    int K, B, idx;
};

struct st M[1001];
bool comp(const struct st &a,const struct st &b ) {
    return a.K < b.K;
}


int main() {
    scanf("%d", &T);
    for(int test_case =1 ; test_case <=T ; test_case++ ) {
        scanf("%d %d ", &P, &N);
    }
}