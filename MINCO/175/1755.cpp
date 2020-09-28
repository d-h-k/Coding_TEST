#include <cstdio>

int main() {
    
    int arr[6];
    int mini = 999;
    int mini_idx;
    for(int i=0 ; i<6 ; i++) {
        scanf(" %d",&arr[i]);
        if( i%2!=0 ) {
            arr[i] = 0;
        }
        else {
            if (mini > arr[i] ) {
                mini=arr[i];
                mini_idx = i;
            }
        }

    }

    printf("arr[%d]=%d",mini_idx,mini);


    return 0;
}