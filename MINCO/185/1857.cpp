#include <cstdio>
#include <cstring>

using namespace std;

char vect[] = "MINCODING";
char dat[266] = {0,};

int main() {
    int a;
    char buf[333];

    scanf("%d",&a);
    for(int i=0 ; i<a ; i++) {
        scanf(" %c",&buf[i]);
    }
    
    int slen = strlen(vect);
    char * pstr = vect;
    for(int i=0 ; i<slen ; i++) {
        dat[*pstr]++; 
        pstr++;
    }
    
    
    for(int i=0 ; i<a ; i++) {
        if( dat[buf[i]]==0) {
            putc('X',stdout);
        }
        else {
            putc('O',stdout);
        }
    }

    return 0;
}