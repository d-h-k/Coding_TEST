#include <iostream>
using namespace std;

int main() {
    char buf[20];
    fgets(buf,20,stdin);

    for(int i=0; i<15 ; i++) {
        if(i%5==0 && i!=0) {
            cout << '\n';
        }
        cout<< buf[i];
    }

    return 0;
}