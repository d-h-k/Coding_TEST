#include <iostream>
#include <windows.h>

using namespace std;


int map[9][9] = {
    0, 0, 0, 0, 1, 0, 1, 1, 1,
    1, 1, 1, 0, 1, 0, 0, 0, 1,
    0, 0, 0, 0, 1, 0, 1, 0, 0,
    1, 1, 0, 1, 1, 0, 1, 0, 1,
    0, 0, 0, 0, 0, 0, 1, 0, 0,
    1, 1, 1, 1, 1, 1, 1, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 1, 1, 0, 1, 1, 1, 1, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 0
};


int visited[9][9] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0
};

int dirx[4] = {0,0,1,-1};
int diry[4] = {1,-1,0,0};


//target = 8,8(9,9)
void run(int nowY, int nowX){
    if(nowY==8 && nowY ==9 ) {
        cout << "Success!!";
        return;
    }

    for(int i=0 ; i<4 ; i++) {
        int ny= nowY + diry[i];
        int nx= nowX + dirx[i];
        if( (ny<=0 && ny<4) || (nx<=0 && nx<4) ) {
            if(map[ny][nx] == 1 ) {
                continue;
            }else {}
            if(visited[ny][nx] == 1) {
                continue;
            }else {}

            visited[ny][nx] = 1;
            run(ny,nx);
            visited[ny][nx] = 0;
        }
        else {}
    }
}

void print_maze(int dy,int dx) {
    system("cls");
    for(int y=0; y<9 ; y++) {
        for(int x=0; x<9 ; x++) {
            if(y ==dy && x==dx) {
                cout << '◇';
            }
            else if(map[y][x] == 1) {
                cout << '■';
            }
            else if(map[y][x] == 0 ) {
                cout << ' ';
            }
            else {
                cout << '?';
            }
        }
    }
}

int main() {

    run(0,0);
}