#include <iostream>

using namespace std;
int n;
int map[100][100];
int path[100];

void run(int dep,int lev,int brc){
    if(dep == lev) {
        for(int i=0 ; i<lev ; i++) {
            cout << path[i] << ' ';
        }
        cout << endl;
    }
    else {
        for(int i=0 ; i<brc ; i++) {
            path[dep] = i;
            run(dep+1,lev,brc);
            path[dep] = 0;
        }
    }
}

int main () {
    int branch;
    int level;

    cin >> level >> branch;

    run(0,level,branch);

}