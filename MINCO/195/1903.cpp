#include <cstdio>
#include <cstring>

int main() {
    int arr[4];
    int map[4][4];

    //arr에 입력받아 
    //arr 입력받은 순서대로 1234 출력
    memset(map,0,sizeof(map));
    int num=1;
    for(int i=0 ; i<4 ; i++) {
        scanf(" %d",&arr[i]);
        int temp = arr[i]-1;
        map[temp/4][temp%4] = num;
        num++;
    }

    for(int i=0 ; i<4 ; i++) {
        for(int j=0 ; j<4 ; j++) {
            printf("%d ",map[i][j]);
        }
        puts("");
    }
    


    return 0;
}