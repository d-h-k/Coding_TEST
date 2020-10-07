#include <iostream>

#define xlen  3
#define ylen  4

using namespace std;

int main() {

    //중력문제
    /*
    1.일단 입력을 받고
    2.기둥(col) 단위로 바닥으로 밀기

    */
   
    char map[ylen][xlen];
    int fill = 0;

    for(int i=0 ; i<ylen ; i++ ) {
        for(int j=0 ; j<xlen ; j++) {
            cin >> map[i][j];
        }
    }
    

    //2
    for(int i=0 ; i<xlen ; i++) {//[j][i]
        //각 콜롬별
        fill = 0;

        //filling strat
        for (int flen=0 ; flen<ylen; flen++) {
            if (map[ylen-(flen+1)][i] == '_') {
                fill = flen;
                break;
            }
        }


        //
        for(int j=ylen-1 ; j>0 ; j--) {
            if(map[j][i] == '_') {
                for(int k=0 ; k<ylen ; k++ ) {
                    if(( map[j-k][i] != '_') && ((j-k) >= 0) ){
                        map[ylen-(fill+1)][i] = map[j-k][i];
                        map[j-k][i] = '_';
                        fill++;
                        break;
                    }
                }
            }
            else {
                //pass, 
            }
            
        }
    }

    


    for(int i=0 ; i<ylen ; i++ ) {
        for(int j=0 ; j<xlen ; j++) {
            cout << map[i][j];
        }
        cout << "\n";
    }
    

    return 0;
}