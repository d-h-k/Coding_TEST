#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    int G;
    int *p;
    int *k;
    int **t,**Q;

    p = k = &G;
    t = &p;
    Q = &k;
    scanf("%d",&G);

    printf("%d %d",**t,*k);

    return 0;
}