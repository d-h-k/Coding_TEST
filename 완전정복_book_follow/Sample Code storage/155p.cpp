#include <cstdio>
#include <algorithm>

using namespace std;
int arr[100];
int main(void) {
    arr[0] = 5;
    arr[1] = 3;
    arr[2] = 1;

    for(int i=0 ; i<3 ; i++) {
        printf("%d", arr[i]);
    }

    printf("%d\n");
    sort(arr+0, arr+2+1);
    for(int i=0 ; i<3 ; i++) {
        printf("%d", arr[i]);
    }
    printf("%d \n");

    for(int i=0 ; i<3 ; i++) {
        printf("%d ",arr[2-i]);
    }
    printf("%d \n");

    for(int i=2 ; i>=0 ; i--) {
        printf("%d ",arr[i]);
    }
    printf("\n");


    for(int i=0 ; i<3 ; i++) {

        arr[i] = arr[i] * (-1);
    }

    sort(arr+0, arr+2+1);

    for(int i=0 ; i<3 ; i++) {
        arr[i] = arr[i] * (-1);
    }

    for(int i=0 ; i<3 ; i++) {
        printf("%d",arr[i]);
    }





}