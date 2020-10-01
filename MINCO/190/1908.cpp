#include <cstdio>
#include <cstring>

using namespace std;


int bomber(char map[][5], int y, int x) {
    int dx[] = {1,1,1,-1,-1,-1,0,0};
    int dy[] = {-1,0,1,-1,0,1,1,-1};
    int nx;
    int ny;

    for(int i=0 ; i<8 ; i++) {
        nx = x+dx[i];
        ny = y+dy[i];


        if(0<=nx && nx<5 && 0<=ny && ny<4 ) {
            map[ny][nx] = '#';
        }
    }

    return 0;
}

int main() {
    //시키는거 : 배열준비>채우고>좌표입력
    // 폭탄 투하 좌표 입력받아서 배열 내용을 바꾸는 함수
    // 출력하고 끝
    char map[4][5];
    memset(map,'_',sizeof(map)/sizeof(char));
    int y, x;
    for(int i=0 ; i<2 ; i++) {
        
        scanf("%d %d",&y,&x);
        bomber(map,y,x);
    }

    for(int i=0 ; i<4 ; i++) {
        for(int j=0 ; j<5 ; j++) {
            printf("%c ",map[i][j]);
        }
        puts("");
    }

    return 0;
}