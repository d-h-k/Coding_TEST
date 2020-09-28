#include <cstdio>
int arr[3][3] = {
{3,5,9},
{4,2,1},
{1,1,5},

};

//int mask[3][3];
int mask;

int main() {
    int sum=0;
    for(int i=0 ; i<3 ; i++) {
        for(int j=0 ; j<3 ; j++) {
            scanf(" %d",&mask);
            sum += mask * arr[i][j];           
        }
    }


    printf("%d",sum);


    return 0;
}