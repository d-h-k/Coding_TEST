#include <cstdio>
#include <cstring>

using namespace std;
int map[5][5] = {
    3,3,4,3,1,
    2,2,4,2,6,
    4,9,2,3,4,
    1,1,1,1,1,
    3,3,5,9,2
};

int summ(int y, int x){
    int dy[] = {1,-1,-1,1};
    int dx[] = {1,-1,1,-1};
    int ny, nx;
    int hap=0;
    for(int i=0 ; i<4 ; i++) {
        ny = y+dy[i];
        nx = x+dx[i];

        if(0<=nx && nx<5 && 0<=ny && ny<=5 ) {
            hap += map[ny][nx];
        }
    }

    return hap;
}

int main() {
   
    int sum = 0;
    int maxi=0, maxi_idxx,maxi_idxy, temp;

    for(int i=0 ; i<5; i++ ) {
        for(int j=0 ; j<5 ; j++) {
            temp = summ(i,j);
            if(temp > maxi) {
                maxi=temp;
                maxi_idxx = j;
                maxi_idxy = i;
            }
        }
    }

    printf("%d %d",maxi_idxy,maxi_idxx);

    return 0;
}