#include <iostream>
using namespace std;

int arr[7] = { 3,5,5,6,9,1,2 };
int ans[7] = { 3,5,5,6,9,1,2 };

int main() {
    int begin, end;
    cin >> begin >> end;
    int order = 0;
    for (int i = begin; i <= end; i++) {
        ans[i] = arr[end - order];
        order++;
    }

    for (int i = 0; i < 7; i++) {
        cout << ans[i] << ' ';
    }
}