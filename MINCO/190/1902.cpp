#include <cstdio>
#include <cstring>

using namespace std;

struct a1902
{
    int x=0;
    int y=0;
    int z=0;
    /* data */
}typedef Data;


int main() {
    Data a;
    Data b;
    int * p1 = &a.x;
    int * p2 = &b.x;
    

    for(int i=0 ; i<3 ; i++) {
        scanf(" %d",p1);
        p1++;
    }
    for(int i=0 ; i<3 ; i++) {
        scanf(" %d",p2);
        p2++;
    }
    
    p1 = &a.x;
    p2 = &b.x;
    for(int i=0 ; i<3 ; i++) {
        printf("%d\n",*p1+(*p2) );
        p1++;
        p2++;
    }

    return 0;
}