#include <cstdio>

int arr[3][5] = {
    1,3,3,5,1,
    3,6,2,4,2,
    1,9,2,6,5
};


int dat[10];

int main() {

    int n;
    int sizeof_arr = sizeof(arr)/sizeof(int);
    scanf("%d",&n);

    
    for(int i=0 ; i<sizeof_arr ; i++ ) {
        dat[arr[i/5][i%5]]++;

    }

    for(int i=0 ; i<10 ; i++ ) {
        if(dat[i] == n ) {
            printf("%d ",i);
        }
    }

    return 0;
}