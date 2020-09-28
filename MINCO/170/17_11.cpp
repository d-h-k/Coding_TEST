#include <cstdio>

int isSame(char * p1, char * p2) {
    unsigned char c1, c2;
    for(int i=0 ; i<199 ; i++) {
        
        c1 =  *p1 +i;
        c2 =  *p2 +i;
        
        if( c1 != c2 ) {
            return 0;
        }
        else if( c1 == c2 && c2 == '\0') {
            break;
        }
        else {
            //good pass
        }
    }

    return 1;
    
}

int main() {
    char buf1[200];
    char buf2[200];

    fgets(buf1,199,stdin);
    fgets(buf2,199,stdin);
    
    if(1 == isSame(buf1,buf2)) {
        puts("동명");
    }
    else {
        puts("남남");
    }


    return 0;
}