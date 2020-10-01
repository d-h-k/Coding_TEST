#include <cstdio>
#include <cstring>

int arr[5][4];

int is_interi(int y, int x) {
    //1=exist in 8dir teritory
    //0= no exist

    int dy[] = { 1,1,1,-1,-1,-1,0,0 };
    int dx[] = { 1,0,-1,1,-1,0,-1,1 };
    int nx, ny;

    for (int i = 0; i < 8; i++) {
        nx = x + dx[i];
        ny = y + dy[i];

        if (0 <= nx && nx < 4 && 0 <= ny && ny < 5) {
            if (arr[ny][nx] == 1) {
                return 1;
            }
        }
    }
    return 0;

}


int main() {
    //printf("Hello world!");


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            scanf(" %d", &arr[i][j]);
        }
    }

    //안정
    //맵 전체를 bf
    //내 위치를 기준으로 8방향에 숫자가 있는지 없는지 검사
    // 숫자 있으면 무적권 불안정 출력하고 끝내기

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] == 1) {
                if (1 == is_interi(i, j)) {
                    puts("불안정한 상태");
                    return 0;
                }
            }
        }
    }
    puts("안정된 상태");


    return 0;
}