#include <cstdio>
#include <cstring>
using namespace std;
char tar[] = "GHOST";

int _strlen( char * s1) {
    unsigned int len=0;
    while(s1[len] == '\0') {
        len++;
    }
    return len;
}

int main() {
    
    char buf[200] ; 
    bool is_find = false;
    fgets(buf,200,stdin);
    int slen = strlen(buf);
    for(int i=0 ; i<slen ; i++ ) {
        
        if(buf[i] == 'G') {
            for(int j=0 ; j<5 ; j++) {
                //printf("\nD >> %c %c",buf[j+i],tar[j]);
                if( buf[j+i] == tar[j]) {
                
                    
                    if(j>=4) {
                        is_find = true;
                    }
                }
                else {
                    break;
                }
            }
        }
    }
    
    if(is_find ) {
        puts("존재");
    }
    else {
        puts("존재하지 않음");
    }

    return 0;
}



