///#include <iostream>
#include <cstdio>

//using namespace std;

int main (){
    //cout << "Hello wolrd!!" << endl;
    char was[4] = {'A','B','C','T'};
    char ins;
    scanf(" %c" ,&ins);
    for(int i=0 ; i<4 ; i++ ) {
        if(ins == was[i]) {
            puts("발견");
            return 0;
        }
        else {
            
        }
    }

    puts("미발견");

    return 0;
}