#include <cstdio>

using namespace std;

int get_gcd(int a, int b);


int main(void) {
    int TC, a,b,gcd;
    scanf("%d",&TC);

    for(int i=0 ; i<TC ; i++) {
        scanf("%d %d",&a,&b);
        gcd = get_gcd(a,b);
        printf("%d",a*b/gcd);
    }
   

    return 0;
}


int get_gcd(int a, int b) {
    int temp = 0;
    if(a<b) {
        temp=a;
        a=b;
        b=temp;
    }

    while(b!=0) {
        temp = a%b;
        a=b;
        b=temp;
    }


    return a;
}