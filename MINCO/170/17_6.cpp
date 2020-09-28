#include <cstdio>

int msk[2][5] =  {
    {0,0,1,0,0},
    {0,0,1,1,1}  
};

int arr[2][5] =  {
    {3,5,4,1,1},
    {3,5,2,5,6}  
};


int main() {
    int a;
    scanf("%d",&a);
    

    for(int i=0 ; i<2 ; i++) {
        for(int j=0 ; j<5 ; j++ ) {
            if(msk[i][j] == 1) {
                if(arr[i][j] == a) {
                    printf("%d 존재",a);
                    return 0;
                }
                
            }
        }
    }

    printf("%d 없음",a);

    return 0;
}