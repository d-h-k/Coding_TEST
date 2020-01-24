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
        for(int i=1 ; i<=N ; i++ ) {
            scanf("%d %d",&M[i].k, &M[i].B);
            M[i].idx = i;
        }
        
        sort(M+1 , M+N+1, comp);
        is_Answer=1;
        
        for(int i=0 ; i<=N ; i++ ) {
            if(M[i].K < P) {
                P = P + M[i].B;
            }
            else{
                is_Answer= -1;
                break;)
        }
    }
}
