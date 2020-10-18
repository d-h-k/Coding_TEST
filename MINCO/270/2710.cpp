#include <iostream>

using namespace std;

int map[4][4] = {
    0,0,0,0,
    0,0,0,0,
    0,0,0,0,
    0,0,0,0,

};

int main() {

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> map[i][j];
        }
    }

    int maxi = -1, maxi_idx;
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
        cnt = 0;
        for (int j = 0; j < 4; j++) {
            cnt += map[i][j];
        }
        if (maxi < cnt) {
            maxi = cnt;
            maxi_idx = i;
        }
    }

    cout << (char)('A' + (char)maxi_idx) << endl;


}