#include <cstdio>

using namespace std;

int main() {
    char arr[] = "ATKPTCABC";
    int slen = 9;
    int front;
    char a,b;
    scanf(" %c %c",&a,&b);
    for(int i=0 ; i<slen ; i++) {
        if(a == arr[i]) {
            front = i;
            break;
        }

    }

    for(int j=slen-1 ; j>=0 ; j-- ) {
        if(b == arr[j]) {
            printf("%d",(j-front));
            return 0;
        }
    }

    return 0;
}