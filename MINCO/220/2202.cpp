#include <iostream>
#include <cstring>

using namespace std;

int _strcmp(char * s1, char * s2) {
    unsigned char c1, c2;

    while(1) {
        c1 = *s1++;
        c2 = *s2++;

        if(c1 !=  c2 ) {
            return c1<c2 ? -1:1;
        }
        else {
            if(!c1) {//널문자를 만나면
                break;
            }
            else {

            }
        }
    }

    
    return 0;
}



char buf[3][200];
int main() {
    int test[3];
    int sum =0;

    for(int i=0 ; i<3 ; i++) {
        scanf(" %s", &buf[i][0] );
    }
    
    test[0] = strcmp(&buf[0][0],&buf[1][0]);
    test[1] = strcmp(&buf[2][0],&buf[1][0]);
    test[2] = strcmp(&buf[0][0],&buf[2][0]);

    for(int i=0 ; i<3 ; i++) {
        //printf("test[%d] : %d,%s\n",i,test[i],&buf[0][0]);
        if(test[i] == 0) {
            sum++;
            
        }
    }

    if(sum == 3) {
        puts("WOW");
    }
    else if(sum==2) {
        puts("GOOD");
    }
    else {
        puts("BAD");
        //printf("%d",sum);
    }

    return 0;
}