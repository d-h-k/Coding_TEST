#include <iostream>
using namespace std;

int map[4][4] = {
    3,5,1,4,
    2,2,1,1,
    0,1,2,3,
    3,1,3,1
};

int main() {
    //cout << "hi"<<endl;
    char a;
    cin >> a;

    if('0'<=a && a<='3') {
        for(int i=0 ; i<4 ; i++) {
            cout << map[(int)(a-'0')][i];
        }
    }
    else if('A'<=a && a<='D') {
        for(int i=0 ; i<4 ; i++) {
            cout << map[i][a-'A'];
        }
    }
    else {
        puts("eRROR");
    }


    return 0;
}