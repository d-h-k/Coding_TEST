#include <cstdio>

using namespace std;

char arr[2][3] = {
    'G','K','G',
    '0','0','0'
};

char dat[256] = {0,};

int main() {
    for(int i=0 ; i<3 ; i++) {
        scanf(" %c",&arr[1][i]);
    }
    char *pi = &arr[0][0];
    for(int i=0 ; i<6 ; i++) {
        dat[*pi]++;
        //printf("D >> %c\n",*pi);
        *pi++;
                
    }


    for(int i=0 ; i<256 ; i++) {
        if(dat[i] >= 3) {
            puts("있음");
            return 0;
        }
    }
    puts("없음");
    
    return 0;
}