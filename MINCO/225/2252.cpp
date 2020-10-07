#include <iostream>
using namespace std;
bool ox[7];

int lev;
void req(int dep) {
    if(dep == lev) {
        for(int i=0 ; i<lev ; i++ ) {
            if(ox[i] == true) {
                cout << 'o' ;
            } 
            else {
                cout << 'x' ;
            }
            
        }
        puts("");
    }
    else {
        ox[dep] = false;
        req(dep+1);
        ox[dep] = true;
        req(dep+1);
    }
}

int main (){
    //cout << "Hello wolrd!!" << endl;
    cin >> lev;
    req(0);


    return 0;
}