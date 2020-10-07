#include <iostream>
using namespace std;


char price[] = {'T','P','G','K','C'};

int map[3][6] = {
    3,5,4,2,2,3,
    1,3,3,3,4,2,
    5,4,4,2,3,5
};

int main (){
    //cout << "Hello wolrd!!" << endl;

    char yy;
    int y;
    int x;
    cin >> yy >> x;
    x--;
    y = (int)yy-'A';


    cout << price[map[y][x]-1];

    return 0;
}