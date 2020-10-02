#include <cstdio>
#include <cstring>

int _strlen(char * s1) {

    unsigned int dist=0;
    while(s1[dist] != '\0') {
        dist++;
    }

    return dist;
}

int main() {


    char buf[200];

    fgets(buf,200,stdin);
    int slen = _strlen(buf);

    for(int i=1 ; i<=slen ; i++) {
        for(int j=0 ; j<i ; j++) {
            printf("%c",buf[j]);
        }
        puts("");
    }

    return 0;
}