#include <iostream>
using namespace std;

int main() {

    char buf[6];
    int arr[5];


    fgets(buf,6,stdin);

    for(int i=0 ; i<5 ; i++) {
        arr[i] = (int)(buf[i] - '0');
        arr[i]++;
    }

    for(int i=0 ; i<5 ; i++) {
        cout << arr[4-i];
    }
    

    return 0;
}