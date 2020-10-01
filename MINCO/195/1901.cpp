#include <cstdio>
#include <cstring>

int arr[5];

void bbq_maxmini(int *a, int*b) {
    int maxi=0, mini=14000000;
    
    for(int i= 0 ; i<5 ; i++) {
        if( maxi < arr[i] ) {
            maxi = arr[i];
        }

        if( mini> arr[i] ) {
            mini = arr[i];
        }
    }

    *a = maxi;
    *b = mini;
}


int main() {
    //printf("Hello world!");
    int a,b;
    for(int i=0 ; i<5 ; i++) {
        scanf(" %d",&arr[i]);
    }
    bbq_maxmini(&a,&b);
    printf("a=%d\nb=%d",a,b);

    return 0;
}