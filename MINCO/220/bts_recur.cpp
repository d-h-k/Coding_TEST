#include <iostream>

char name[] = "BTS";
char path[10];

int bts(int level) {

    if(level == 3 ) {
        printf("%c%c%c\n",path[0],path[1],path[2]);

    }
    else {
        for(int i=0 ; i<3; i++) {

            path[level]= name[i];
            bts(level+1);
            path[level] = ' ';
        }
    }

    return 0;

}

int main() {

bts(0);
    return 0;
}