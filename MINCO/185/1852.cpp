#include <cstdio>

using namespace std;


int main() {

    int arr[6] ;
    for(int i=0 ; i<6 ; i++) {
        scanf(" %d",&arr[i]);
    }


    for(int i=0 ; i<6 ; i++) {
        for(int j=0 ; j<6 ; j++) {
            if( i != j ) {
                if( arr[i] == arr[j] ){
                    puts("도플갱어 발견");
                    return 0;
                }
            }
        }
    }

    printf("미발견");

    return 0;
}