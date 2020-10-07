#include <iostream>
using namespace std;

char exam[] = "BGTK";

int deep;

char path [9];
int recal(int dep){

    if(dep == deep) {
        for(int i=0 ; i<dep ; i++) {
            printf("%c",path[i]);
        }
        puts("");
        
    }
    else {
        for(int i=0 ; i<4 ; i++) {
            path[dep] = exam[i];
            recal(dep+1);
            path[dep] = ' ';
        }
    }


}


int main() {

    cin >> deep;
    recal(0);

    return 0;
}