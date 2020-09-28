#include <cstdio>

int main() {

    int vect[7] = {3,5,4,2,6,6,5};
    int bit[7];
    int temp;
    
    for(int i=0 ; i<7 ; i++) {
        scanf("%d",&temp);
        if(temp == 1) {
            printf("7");
        }
        else {
            printf("0");
        }
    }

    return 0;
}