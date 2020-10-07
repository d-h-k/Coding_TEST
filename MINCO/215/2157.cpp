#include <iostream>

using namespace std;

//white = 1
//black = 2;
//0=blank

int map[7][7] = {
    0,0,0,0,0,0,0,
    0,0,1,0,1,0,0,
    0,1,2,0,2,1,0,
    0,0,1,2,1,0,0,
    0,0,2,1,0,1,0,
    0,1,1,0,0,0,0,
    0,0,0,0,0,0,0

};


int is_surouded(int y, int x) {
    int dx[] = { 0,0,1,-1 };
    int dy[] = { 1,-1,0,0 };
    int nx, ny;
    bool is_surbywhilte;

    is_surbywhilte = true;
    for (int i = 0; i < 4; i++) {
        ny = y + dy[i];
        nx = x + dx[i];

        if ( (0<=ny && ny<7) && 
            (0<=nx && nx<7) ) {

            if (map[ny][nx] != 1) {
                //puts("NO!!!");
                is_surbywhilte = false;
                return 0;
                break;
            }
        }
    }

    if (is_surbywhilte) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int a, b;
    int ans = 0;
    cin >> a >> b;
    map[a][b] = 1;



    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (map[i][j] == 2) {
                if (1 == is_surouded(i, j)) {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}