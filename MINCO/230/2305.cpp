#include <iostream>

using namespace std;

char cand[6]= "EWABC";
char path[5];
bool used[5];

bool run(int dep, int level) {
    if(dep == level ) {
        cout << path <<endl;
    }
    else {
        for(int i=0 ; i<5; i++) {
            if(used[i] == false) {
                
                path[dep] = cand[i];
                used[i] = true;
                
                run(dep+1,level);
                
                path[dep] = ' ';
                used[i] = false;
                
            }
        }

    }
}

int main() {
    char a;
    cin >> a;
    for(int i=0 ; i<5 ; i++) {
        if(cand[i] == a) {
            used[i] = true;
        }
    }

    run(0,4);
    //cout << a << endl;

    return 0;
}