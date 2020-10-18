#include <iostream>
#include <cstring>

using namespace std;


int map[6][6] = {
    0,1,0,0,0,0,
    0,0,0,1,0,1,
    0,0,0,0,1,0,
    0,0,0,0,0,0,
    0,0,0,4,0,0,
    1,0,1,0,0,0
};
int visited[6] = {0};
int _name[6] = {0};
char path[6] = {0};
char name[] = "ABCDEFG";

void run(int now, int dep) {
    cout << now << name[now] <<endl;

    for(int i=0 ; i<6 ; i++) {
        if(map[now][i] == 1 && visited[i]==0) {
            visited[i] = 1;
            path[dep+1] = name[i];
            run(i,dep+1);
            path[dep+1] = ' ';
        } 
    }
    return;
}

int main() {
    visited[0] = 1;
    path[0] = name[0];
    run(0,0);
    return 0;
}

