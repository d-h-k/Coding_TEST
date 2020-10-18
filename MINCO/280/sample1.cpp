#include <iostream>

using namespace std;
int map[5][5] = {
    0,1,1,0,0,
    0,0,0,1,1,
    0,0,0,0,0,
    0,0,0,0,0,
    0,0,0,0,0,
};
//1)인접행렬로 나타내기
//2)

int main() {
    int n;
    cin >> n;

    for(int x=0 ; x<5 ; x++) {
        if(map[n][x] == 1) {
            cout << x;
        }
    }

    return 0;
}