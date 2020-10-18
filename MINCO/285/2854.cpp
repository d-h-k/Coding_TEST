#include <iostream>
using namespace std;

int main() {
    bool is_incre = true;
    int arr[5];
    for(int i=0 ; i<5 ; i++) {
        cin >> arr[i];
    }

    for(int i=1 ; i<5 ; i++) {
        if((arr[i] - arr[i-1]) <= 0) {
            is_incre = false;
        }
    }

    if(is_incre) {
        puts("증가됨");
    }
    else {
        puts("증가안됨");
    }
}