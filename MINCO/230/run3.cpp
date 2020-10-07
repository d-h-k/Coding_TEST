#include <iostream>

/*
입력 n 받고,
n 개의 주사위의 모든 눈굼을 출력하는 프로그램
*/

using namespace std;

int ans=0;

int path[10];//n번 주사위가 출력한 값


void run(int dep, int level) {

    if(dep == level) {
        for(int i=0 ; i<level ; i++) {
            cout << path[i];
        }
        cout <<endl;
        ans++;
        
        return;
    }
    else {
        for(int i=1 ; i<=6 ; i++) {
            path[dep]=i;
            run(dep+1,level);
            path[dep]=0;
        }
    }
}


int main() {

    int a;
    cin >> a;
    run(0,a);
    cout <<ans<<endl;

    return 0;
}