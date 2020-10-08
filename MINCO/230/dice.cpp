#include <iostream>

using namespace std;

int used[7];//주사위 눈금이 나온 횟수 확인
int path[9];//지금까지 만들어진 주사위 저장배열

void dice(int dep, int level) {
    if(dep == level) {
        for(int i=0 ; i<level ; i++) {
            cout << path[i] << ' ';
        }
        
        cout <<endl;
        return;

    }
    else {
        
        for(int j=1 ; j<=6; j++) {
            if(used[j] == 0) {
                path[dep] = j;
                used[j] = 1;
                dice(dep+1,level);
                used[j] = 0;
                path[dep] = 0;
            }
            else {

            }
            
        }

    }
    return;

}

int main() {
    int a;
    //cin >> a;
    a=4;//주사위 4개 예시입력

    dice(0,4);


    return 0;
}