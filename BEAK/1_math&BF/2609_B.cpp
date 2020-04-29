#include <iostream>
#include <string>
#include <vector>

using namespace std;

int get_gcd(int a, int b);
int get_lcm(int a, int b, int gcd);



int main(void) {
    int gcd,lcm,x,y;
    //printf("Hello world!");
    scanf("%d %d",&x,&y);
    gcd = get_gcd(x,y);
    lcm = get_lcm(x,y,gcd);
    printf("%d\n%d\n",gcd,lcm);
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


int get_lcm(int a, int b, int gcd) {
    return (a*b/gcd);
}