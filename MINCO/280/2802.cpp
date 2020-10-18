#include <iostream>

using namespace std;
int n = 8;
int map[8][8] = {
    0,1,1,1,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,1,1,1,0,
    0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0
};
char name[] = { 'A','B','H','C','D','G','E','F', };
//char path[];

int main() {
    char a;
    int ord;
    bool is_find = false;
    cin >> a;
    for (int i = 0; i < 8; i++) {
        if (name[i] == a) {
            ord = i;
        }
    }

    for (int k = 0; k < 8; k++) {
        if (map[k][ord] == 1) {
            
            //print parent
            //cout << name[k] << ' ';

            for (int m = 0; m < 8; m++) {
                if (map[k][m] == 1 && m!=ord) {
                    cout << name[m] << ' ';
                    is_find = true;
                }
            }
            break;
        }
    }

    if (is_find == false) {
        cout << "없음";
    }
    return 0;
}