#include <iostream>
using namespace std;

char *pt = new char[3];
int main() {

    char a,b,c;

    cin >> pt[0] >> pt[1] >> pt[2];
    
    for(int i=0 ; i<3 ; i++) {
        if(!('A' <= pt[i] && pt[i]<='Z' )) {
            puts("소문자있음");
            return 0;
        }

    }
    puts("모두대문자");
    
    return 0;
}