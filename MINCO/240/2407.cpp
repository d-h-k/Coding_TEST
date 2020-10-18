#include <iostream>
#include <cstring>
using namespace std;

struct POSI
{
    int yi;
    int xj;
    /* data */
}typedef pos;

pos arr[6];

int dat[7][7] = {0};

int main() {
    memset(dat,0,sizeof(dat));
    bool is_duple = false;
    for(int i=0 ; i<6 ; i++) {
        cin >> arr[i].yi >>arr[i].xj; 
        dat[arr[i].yi][arr[i].xj] ++;
        if(dat[arr[i].yi][arr[i].xj] >= 2){
            is_duple=true;
        }
    }

    if(is_duple) {
        cout <<"중복된좌표발견" <<endl;
    }
    else {
        cout <<"중복없음" << endl;
    }



    //cout << "hi"<<endl;

    return 0;
}