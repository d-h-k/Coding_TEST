#include <cstdio>
#include <cstring>

using namespace std;

struct a1905
{   
    int y=0;
    int x=0;
    /* data */
}typedef ipt;

int map[4][3] = {0,};
int main() {
    ipt arr[4];

    for(int i=0 ; i<4 ; i++ ) {
        scanf("%d %d",&arr[i].y,&arr[i].x);
        map[arr[i].y][arr[i].x] = 5;
    }

    for(int i=0; i<4 ; i++) {
        for(int j=0 ; j<3 ; j++) {
            printf("%d ",map[i][j]);

        } 
        puts("");
    }



    return 0;
}