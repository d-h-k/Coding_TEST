#include <cstdio>


int rock[4] = {3,7,4,9};
int inpt[4] = {0,};


int isSame(int *orien, int *tryal, int len) {
    int p1, p2;
    for(int i=0 ; i<len ; i++ ) {
        int p1 = *orien++;
        int p2 = *tryal++;
        //printf("DD >> %d, %d\n",p1,p2);
        if( p1 != p2) {
            
            
            return 0;
        }
    }
    return 1;
}

int main() {

    
    scanf("%d %d %d %d",&inpt[0],&inpt[1],&inpt[2],&inpt[3]);
    
    
    if(isSame(rock,inpt,4) == 1 ) {
        printf("pass\n");
    }
    else {
        printf("fail\n");

    }
    

    return 0;
}