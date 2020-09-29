#include <cstdio>

using namespace std;

int main() {
    int tooth[2][5];
    for(int i=0 ; i<2 ; i++) {
        for(int j=0 ; j<5 ; j++) {
            scanf(" %d",&tooth[i][j]);
        }
    }

    int num=0;
    for(int i=0 ; i<5 ; i++) {
        if(tooth[0][i] && tooth[1][i]) {
            num++;
        }
    }

    printf("%d개",num);


    return 0;
}