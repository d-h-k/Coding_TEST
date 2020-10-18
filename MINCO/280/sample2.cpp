#include <iostream>

using namespace std;

//1)인접행렬로 나타내기
//2)

int map[5][5] = {
    0,0,0,0,0,
    0,0,0,0,0,
    0,0,0,0,0,
    0,1,0,0,1,
    1,0,1,0,0
};
char name[] = {'C','K','B','A','T'};

int main() {

    int n;
    cin >> n;
    int cnt=0;
    for(int i=0 ; i<5 ; i++) {
        if(map[n][i] == 1) {
            cnt++;
        }
    }

    return 0;
}