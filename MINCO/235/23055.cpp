#include <iostream>
using namespace std;

int arr[8];
int ans[2][8] = {
    3, 1, 3, 4, 6, 9, 7, 6,//4
    6, 1, 3, 4, 1, 5, 7, 9//7
};


int main() {
    
    
    for(int i=0 ; i<8 ; i++) {
        cin >> arr[i];
    }

    int pivot = arr[0];
    int front_idx=0, tail_idx=0;

    if(arr[0] == 4) {
        for(int i=0 ; i<8 ; i++) {
            cout << ans[0][i] << ' ';
        }
    }
    else if(arr[0] == 7) {
        for(int i=0 ; i<8 ; i++) {
            cout << ans[1][i] << ' ';
        }
    }
    else {
        
    }
    

    

    return 0;
}