//2306_ans
#include <iostream>
using namespace std;

char name[10];
char path[10];
int cnt;

int abs(int x);
void run(int level);

int main() {


    cin >> name;
    run(0);
    cout << cnt;
    return 0;
}



int abs(int x) {
    if(x<0) {
        return -x;
    }
    else {
        return x;
    }
}

void run(int level) {
    if(level == 4 ) {
        cnt++;
        return;
    }
    else {
    }

    for(int i = 0 ; i<5 ; i++) {
        if(!(level>0 && abs(path[level-1] - name[i]) > 3)) {
            path[level] = name[i];
            run(level+1);
            path[level] = 0;
        }
    }
}

