#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    
    char buf[12] = {'\0',};
    int dat[6]={0,};

    
    fgets(buf,12,stdin);
    int slen = strlen(buf);
    for(int i=0 ; i<slen ; i++) {
        dat[buf[i]-'A']++;
    }

    for(int i=0 ; i<6 ; i++) {
        if(dat[i] > 0 ) {
            printf("%c",'A'+i);
        }
    }

    
    return 0;
}