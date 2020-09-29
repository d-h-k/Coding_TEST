#include <cstdio>

int win[2][3] = {
        3,5,1,4,2,6
    };
int ple[4];

using namespace std;
bool is_win(int num) {  
    int * pi = &win[0][0];
    for(int i=0 ; i<6 ; i++ ) {
        if(*pi == num) {
            return true;
        }
        pi++;
    }
    return false;
}


int main() {
    
    for(int i=0 ; i<4 ; i++) {
        scanf(" %d",&ple[i]);
    }

    for(int i=0 ; i<4 ; i++) {
        
        
        printf("%d번 ", ple[i]);
        if( is_win(ple[i]) == true ) {
            puts("합격");
        }
        else{
            puts("불합격");
        }
    }
    
    

    return 0;
}