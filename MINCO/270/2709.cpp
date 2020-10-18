#include <iostream>

using namespace std;
char map[4][4] = { 
    '_' , '_' , '_' , '_' , 
    '_' , '_' , '_' , '_' , 
    '_' , '_' , '_' , '_' , 
    '_' , '_' , '_' , '_' };

void wallup(int yi, int xj) {
    int dx[8] = { 0,0, -1,-1,-1, 1,1,1 };
    int dy[8] = { 1,-1, 0,1,-1, 0,1,-1 };
    int ny, nx;

    for (int i = 0; i < 8; i++) {
        ny = yi + dy[i];
        nx = xj + dx[i];

        if (0 <= nx && nx < 4 && 0 <= ny && ny < 4) {
            if (map[ny][nx] == '_') {
                map[ny][nx] = '@';
            }
                
        }
    }

    return;
}

int main() {
    int y, x;
    for (int i = 0; i < 3; i++) {
        cin >> y >> x;
        map[y][x] = '#';
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (map[i][j] == '#') {
                wallup(i, j);
            }
        }
    }


    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << map[i][j];
        }
        cout << endl;
    }

}