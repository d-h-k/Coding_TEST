#include <cstdio>

int main() {
    char arr[30][40] = {
        {'A','T','K','B'},
        {'C','Z','F','D'},
        {'H','G','E','I'}
    };

    int x, y, ox, oy;
    char buf;

    scanf("%c %d %d", &buf, &y, &x);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] == buf) {
                oy = i;
                ox = j;
            }
        }
    }

    //printf("%c", arr[ox + x][oy + y]);

    printf("%c", arr[oy + y][ox + x]);

    return 0;
}