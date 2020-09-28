#include <cstdio>

int main() {
    int num=0;
    char town[3][3] = {

        'C','D','A',
        'B','M','Z',
        'Q','P','O'

    };

    char blist[4];
    for(int i=0 ; i<4 ; i++ ) {
        scanf("%1c",&blist[i]);
    }

    for(int i=0 ; i<9 ; i++ ) {
        for(int j=0 ; j<4 ; j++ ) {
            if(town[i/3][i%3] == blist[j]) {
                num++;
                break;
            }
        }
    }

    printf("%d명",num);


    return 0;
}