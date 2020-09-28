#include <cstdio>

int arr[] = {5,9,4,6,1,5,8,9};

int main() {
    int piv, tar;

    scanf(" %d %d",&piv,&tar);
    for(int i=piv ; i< (8) ; i++) {
        if(arr[i] == tar) {
            printf("%d", i-piv);
            return 0;
        }
    }
    return -1;
}