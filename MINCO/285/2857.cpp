#include <iostream>
#include <cstring>
using namespace std;
int db[12] = {3,5,1,3,1,2,3,4,6,5,4,6};
int main() {

    char buf[600];
    int dat[355] = {0};


    
    for(int i=0 ; i<12 ; i++) {
        dat[db[i]]++;
    }

    for(int i=1 ; i<=6 ; i++) {
        cout << i<<' ';
        for(int j=0 ; j<dat[i] ; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    

    return 0;
}
