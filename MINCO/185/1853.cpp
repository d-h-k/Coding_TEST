#include <cstdio>
#include <cstring>
using namespace std;

char buf[12] = {0,};
int dat[266] = {0,};
int _strlen ( char * s1) {
    int len=0;
    while(*s1 == '\0') {
        len++;
    }
    printf("len:%d",len);
    return len;
}
int main() {
    fgets(buf,11,stdin);
    int slen = strlen(buf);
    
    for(int i=0 ; i<slen ; i++) {
        dat[buf[i]]++;
    
    }
    int maxi=0, maxi_idx;

    for(int i='A' ; i<='Z' ; i++) {
        if( dat[i] > maxi) {
            maxi = dat[i];
            maxi_idx = i;
        }
    }

    printf("%c ",(char)maxi_idx);

    return 0;
}