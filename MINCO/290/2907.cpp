#include <iostream>

using namespace std;
int map[5][5] = {
    0,1,1,0,0,
    0,0,0,1,1,
    0,0,0,0,0,
    0,0,0,0,0,
    0,0,0,0,0,
    /*
    A :  BC
    B :    DE
    C : 
    D : 
    E : 
    */  
};
char name[100];

int dfs(int now) {
    cout << name[now];
    for(int i=0 ; i<5 ; i++) {
        if(map[now][i] == 1) {
            dfs(i);
        }
    }
}   

int main() {
    fgets(name,100,stdin);
    dfs(0);
    return 0;
}