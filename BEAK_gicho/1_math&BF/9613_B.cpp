#include <cstdio>
#include <iostream>

using namespace std;

int get_gcd(int a, int b);

int map[1000001];//if local var, stack overflow

int main(int argc, char** argv) {
    int T=0,num,gcd;
    FILE* fp;
    fp = freopen("testdata/9613_B.txt","r",stdin);
    printf("fp : %d",fp);
    scanf("%d ",&T);
    //puts("!!");
	cin>>T;
    for(int i=0 ; i<T ; i++) {
        gcd=1;
        scanf("%d",&num);
        //scanf("%d",&map[j]);
        for(int j=0 ; j<num ; j++) {
            scanf("%d ",&map[j]);
            //gcd = get_gcd(gcd,map[j]);
        }
        gcd = get_gcd(map[0],map[1]);
        
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
