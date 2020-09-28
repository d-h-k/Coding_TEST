#include <cstdio>
int map[3][3] = {
3,1,9,
7,2,1,
1,0,8
};
int msk[3][3] = {0,};


int main() {
    bool is_find = false;
    for(int i=0 ; i<3 ; i++) {
        for(int j=0 ; j<3; j++) {
            scanf(" %d" ,&msk[i][j]);
            map[i][j] = map[i][j] * msk[i][j];
            if( 3 <= map[i][j]  && map[i][j] <= 5 ) {
                is_find = true;
            }  
        }
    }
    if(is_find) {
        printf("발견");
    }
    else{ 
        printf("미발견");
    }




    return 0;
}