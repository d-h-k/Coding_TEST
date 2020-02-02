#include <cstdio>

using namespace std;

int get_gcd(int a, int b);


int main(void) {
    int TC,num, map[1000001],gcd;
    scanf("%d",&TC);

    for(int i=0 ; i<TC ; i++) {
        gcd=1;
        scanf("%d",&num);
        //scanf("%d",&map[j]);
        for(int j=0 ; j<num ; j++) {
            scanf("%d",&map[j]);
            gcd = get_gcd(gcd,map[j]);
        }
        
        printf("%d\n",gcd);
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