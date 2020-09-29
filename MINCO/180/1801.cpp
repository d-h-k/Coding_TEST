#include <cstdio>
#include <cstring>
#define DBG 0
int alpdat[269]= {0,};

int main() {
    
    char buf[200];
    fgets(buf,199,stdin);
    int slen = strlen(buf);

    for(int i=0 ; i<slen ; i++) {
        alpdat[buf[i]]++;
    }


    int cnt=0;
    for(int i=(int)'A' ; i<((int)'A'+26) ; i++) {
        if(DBG) { printf("aldat[%d]:%d\n",i,alpdat[i]);}
        if(alpdat[i] != 0) {
            cnt++;
        }
    }

    printf("%d개",cnt);


    return 0;
}