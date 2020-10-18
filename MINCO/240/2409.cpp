#include <iostream>

using namespace std;

int path[3];

const char *prt[8] = {
    "3승(승승승)",
    "2승1패(승승패)",
    "2승1패(승패승)",
    "1승2패(승패패)",
    "2승1패(패승승)",
    "1승2패(패승패)",
    "1승2패(패패승)",
    "3패(패패패)"
    };

int cnt=0;
void run(int dep) {
    if(dep == 3) {
        cout << prt[cnt]<<endl;
        cnt++;
        return;
    }
    else {
        path[dep] = 1;
        run(dep+1);
        path[dep] = 0;
        run(dep+1);
    }
}

int main() {
    for(int i=0 ; i<8 ; i++) {
        puts(prt[i]);// << endl;
    }
    //run(0);
    //cout << "hi"<<endl;

    return 0;
}