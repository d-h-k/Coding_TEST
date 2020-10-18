#include <iostream>

using namespace std;

int main() {
    int arr[3][6];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
    }
    for (int k = 0; k < 6; k++) {
        arr[2][k] = arr[0][k] + arr[1][k];
    }


    for (int k = 1; k < 6; k++) {

        if (arr[2][k] >= 10) {
            arr[2][k] = arr[2][k] - 10;
            arr[2][k - 1]++;
        }
        else {}
    }
    for (int k = 0; k < 6; k++) {
        cout << arr[2][k]<< ' ' ;
    }
    return 0;
}