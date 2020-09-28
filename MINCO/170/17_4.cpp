#include <cstdio>

int arr[3][3] = {
    {3,5,9},
    {4,2,1},
    {5,1,5},
};

int tar[3];
char *seq[] = {"존재","미발견"};

int main() {
    bool is_find = false;

    for(int i=0 ; i<3 ; i++ ) {
        scanf("%d", &tar[i]);
    }

    for(int i=0 ; i< 3; i++) {
        //tar[i]
        is_find = false;

        for(int j=0 ; j< 3; j++) {
            for(int k=0 ; k<3 ; k++ ) {
                if(tar[i] == arr[j][k]) {
                    is_find = true;
                    break;
                }
            }
            if(is_find) {
                break;
            }
        }
        if(is_find == false) {
            printf("%d:%s\n",tar[i],seq[1]);
        }
        else {
            printf("%d:%s\n",tar[i],seq[0]);
        }
    }

    return 0;
}