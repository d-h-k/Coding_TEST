#include <iostream>
using namespace std;

int path[10];

int dice(int dep,int tar) {
    if(tar == dep) {
        for(int i=0 ; i<dep ; i++) {
            cout << path[i];
        }
        cout <<endl;
    }
    else {
        for(int i=1 ; i<=6 ; i++) {
            path[dep] = i;
            dice(dep+1,tar);
            path[dep] = 0;
        }
    }
}

int main() {

    //cout << "hi" << endl;
    int a;
    cin >>  a;
    dice(0,a);
    return 0;
}