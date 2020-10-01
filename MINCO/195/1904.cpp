#include <cstdio>
#include <cstring>


int coloring(int Dest[][4], char cmd, int lin) {
    if(cmd=='S' ) {
        for(int i=0 ; i<4 ; i++) {
            Dest[i][lin] = 1;
        }
    }
    else if(cmd == 'G') {
        for(int i=0 ; i<4 ; i++) {
            Dest[lin][i] = 1;
        }
    }
    else
    {
        puts("ERROR CMD, G?S");
        /* code */
    }
    
}

int main() {

    int arr[4][4];
    char cmd;
    int line;
    memset(arr,0,sizeof(arr));

    for(int i=0 ; i<3 ; i++ ) {
        scanf(" %c %d",&cmd,&line);
        coloring(arr,cmd,line);
        
    }

    for(int i=0 ; i<4 ; i++) {
        for(int j=0 ; j<4 ; j++) {
            printf("%d ",arr[i][j]);
        }        
        puts("");
    }




    return 0;
}