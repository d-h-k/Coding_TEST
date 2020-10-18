#include <iostream>

using namespace std;
int dat[20] = { 0, };
int map[3][3];

struct a2708
{
    int yi;
    int xj;
    /* data */
}typedef Node;

Node get_pos(int num) {
    Node ans;
    ans.xj = -1;
    ans.yi = -1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (map[i][j] == num) {
                ans.yi = i;
                ans.xj = j;
                return ans;
            }
        }
    }
    return ans;
}


int main() {
    Node temp;
    int a;
    for (int i = 0; i < 9; i++) {
        cin >> a;
        dat[a]++;
        map[i / 3][i % 3] = a;
    }
    int cnt = 0;
    for (int j = 1; j <= 20; j++) {
        if (dat[20 - j] > 0) {
            cnt++;
            if (cnt == 1) {
                cout << "첫";
            }
            else if (cnt == 2) {
                cout << "두";
            }
            else {
                break;
            }
            temp = get_pos(20 - j);
            cout << "번째:" << 20 - j << '(' << temp.yi <<
                ',' << temp.xj << ')' << endl;

        }
    }

    //cout << "hi" << endl;
    return 0;
}