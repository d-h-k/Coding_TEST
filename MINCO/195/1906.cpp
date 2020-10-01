#include <cstdio>
#include <cstring>


int is_match_pat(char *Dest, char Tar[][2]) {
    //1= existed
    //0 = no   

    for(int i=0 ; i<2 ; i++ ) {
        for(int j=0 ; j<2 ; j++) {
            char tmp = *(Dest+(i*2)+j);
            if(tmp != Tar[i][j]) {
                return 0;
            }
        }
    }


    return 1;
}

int main() {
    

    char map[3][4] = {
        'A','B','G','K',
        'T','T','A','B',
        'A','C','C','D'
    };
    char pat[2][2];
    int num = 0;

    
    //insert arr
    for(int i=0 ; i<2 ; i++) {
        scanf(" %c %c",&pat[i][0],&pat[i][1]);
    }

    char tmp = pat[0][0];
    for(int i=0 ; i<2 ; i++) {
        for(int j=0 ; j<3 ; j++) {
            if(tmp == map[i][j]) {
                if(1==is_match_pat(&map[i][j],pat)) {
                    num++;
                }
            }
        }
    }

    if(num==0) {
        puts("MMM미발견");
    }
    else {
        printf("발견(%d개)",num);
    }

    return 0;
}