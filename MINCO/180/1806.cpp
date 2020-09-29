#include <cstdio>
#include <cstring>

char * origin = "ABCAGHHIJKABABC";
int dat_alp[266];//A=0, Z=25


int main() {
    int slen = strlen(origin);
    char * pstr = origin;

    for(int i=0 ; i<slen ; i++ ) {
        
        dat_alp[*pstr]++;
        pstr++;
    }


    for(int i=(int)'A' ; i<(int)'Z' ; i++) {
        for(int j=0 ; j< dat_alp[i] ; j++) {
            printf("%c",i);
        }
    }

    return 0;
}