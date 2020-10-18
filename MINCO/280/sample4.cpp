#include <iostream>

using namespace std;

int map[5][5] = {
  //A B C Q T  
    0,1,1,0,0,//A
    0,0,0,0,0,//B
    0,0,0,1,1,//C
    0,0,0,0,0,//Q
    0,0,0,0,0 //T
};
char name[5] = {'A','B','C','Q','T'};
char path[5];
void run(int level, int now) {
    for(int i=0 ; i<5 ; i++) {
        if(map[now][i]== 1 ) {
            path[level+1] = name[i];
            run(level+1,i);
            path[level+1] = name[i];
        }
    }
    
    
    if(map) {
        for(int i=0 ; i<level ; i++) {
            cout << path[i] << ' ';
        }
    }
}

int main() {

    path[0] = name[0];
    run(0,0);
}