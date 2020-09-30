#include <cstdio>
#include <cstring>

using namespace std;

int arr[3][3] = {
    3,5,4,
    1,1,2,
    1,3,9
};

struct a1906
{
    int x;
    int y;
    /* data */
}typedef cod;

int main() {

    cod input;
    scanf(" %d %d", &input.y, &input.x);

    int dx[] = { 1,-1,0,0 };
    int dy[] = { 0,0,-1,1 };

    int sum = 0;
    for (int i = 0; i < 4; i++) {
        int ny = input.y + dy[i];
        int nx = input.x + dx[i];

        if ((0 <= ny) && (ny < 3) && (0 <= nx) && (nx < 3)) {
            sum += arr[ny][nx];
        }

    }
    printf("%d", sum);
    return 0;
}