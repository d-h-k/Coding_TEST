#include <cstdio>

int arr[] = {3,7,4,1,2,6};
int insert[2][2];

void fdbg() {
    for(int i=0 ; i< 2 ; i++) {
        for(int j=0 ; j<2 ; j++ ) {
            printf("insert[%d][%d]: %d \t",i,j,insert[i][j]);
        }
        puts("");
    }
}

bool isExist(int num) {
    bool is_find = false;
    
    for(int k=0 ; k<6 ; k++ ) {
        if( num == arr[k] ) {
            //puts("OK");
            is_find = true;
            return true;
        }
        else {

        }

    }


    return false;
}

int main() {
    //bool is_find;
    for(int i=0 ; i<2 ; i++ ) {
        scanf(" %d %d", &insert[i][0], &insert[i][1]);
    }

    for(int i=0 ; i<2 ; i++) {
        for(int j=0 ; j<2 ; j++ ) {
            if(isExist(insert[i][j])) {
                //is_find =true;
                printf("OK ");
            }
            else {
                printf("NO ");
            }

        }
        puts("");
    }
    
    //fdbg();
    return 0;
}