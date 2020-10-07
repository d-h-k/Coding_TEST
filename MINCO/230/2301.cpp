#include <iostream>

using namespace std;
char name[5] = {};
char path[10];
int via[10];


void run(int level) {
    if(level == 3 ) {
        cout << path << endl;
        return ;
    }
    else {

        for(int i=0 ; i<4 ; i++) {
            if(via[i] == 0 ) {
                via[i]++;
                path[level] = name[i];
                run(level+1);
                via[i]--;
            }
        }



    }
}

int main() {


    scanf("%s",&name[0]);
    run(0);

    return 0;
}