#include <cstdio>
#include <algorithm>

using namespace std;

int T;
int N, K, P;
int A[101];

int main() {
    scanf("%d", &T);
    for(int test_case =1 ; test_case <=T ; test_case++ ) {
        scanf("%d %d %d", &N, &K, &P);
    }

    int Answer = -1;
    int rem = 0;

    for(int i = 1 ; i<=N ; i++) {
        rem = rem+[i];
        int m = min(P,rme);
        K = K-m;
        rem = rem-m;
        if(K<=0) {
            Answer = i;
            break;
        }
    }
    printf("#%d %d\n", test_case, Answer);
  
}