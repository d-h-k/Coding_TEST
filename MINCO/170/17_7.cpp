#include <cstdio>
//char ascicnt[277] = {0,};
#define DEBUG 0
int main() {
    char arr[] = {'B','T','K','I','G','Z'};
    char tar[4];    
    int cnt=0;
    for(int i=0 ; i<4 ; i++) {
        scanf(" %c",&tar[i]);
    }
    
    if(DEBUG) { printf("%c %c %c %c",tar[0],tar[1],tar[2],tar[3]);}
    
    
    for(int i=0 ; i<4 ; i++ ) {
        for(int j=0 ; j<6 ; j++ ) {
            if(tar[i] == arr[j]) {
                cnt ++;
                
            }
        }
    }
    printf("%d",cnt);
    return 0;
}