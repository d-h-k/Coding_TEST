#include <cstdio>
#include <cstring>
using namespace std;

int _strlen(char *s) {
    char *p = s;
    for(int i=0 ; i<20000 ; i++) {
        if(*p == '\0') {
            return i;
        }
    }
}

int main() {
    char buf[20]={'\0'};
    char dat[27]={0,};
    fgets(buf,20,stdin);
    int slen = _strlen(buf);

    for(int i=0 ; i<slen ; i++) {

        dat[buf[i]-'A']++;
    }
    
    for(int i=0 ; i<26 ; i++) {
        if(dat[i] >0 ) {
            printf("%c:%d\n",'A'+(char)i, dat[i]);
        }
            

    }
    
    return 0;
}