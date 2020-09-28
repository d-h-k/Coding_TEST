#include <cstdio>

int main() {
    int arr[] = {3,5,4,2};
    int bitmap[4] = {0,};
    int sum = 0;
    for(int i=0 ; i<4; i++) { 
        scanf(" %d",&bitmap[i]);
    }
    for(int i=0 ; i<4 ; i++ ) {
        sum += arr[i]*bitmap[i];
    }
    printf("%d",sum);

    return 0;
}