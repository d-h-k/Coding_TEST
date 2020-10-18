#include <iostream>
using namespace std;

int main() {
    int nb=0;
    int nf=0;
    char buf[200];

    fgets(buf,200,stdin);

    for(int i=0 ; i<100 ; i++) {
        if(buf[i]=='\n' || buf[i]=='\r'  || buf[i]=='NULL' ) {
            break;
        }
        else if(buf[i] == 'B') {
            nb++;
        }
        else if(buf[i] == 'F') {
            nf++;
        }
    }

    if(buf[0] == 'F') {
        puts("짝이안맞음");
    }
    else {
        if(nb == nf) {
        puts("짝이맞음");
        }
        else {
            puts("짝이안맞음");
        }
    }
    

    
    return 0;
}