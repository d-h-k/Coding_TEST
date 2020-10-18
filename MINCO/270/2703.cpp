#include <iostream>

using namespace std;

const int dit[4] = { 35,17,7,1 };
int ans[4] = { 0, };

int main() {
    int total;
    cin >> total;
    int cur;

    for (int i = 0; i < 4; i++) {

        ans[i] = total / dit[i];
        total = total % dit[i];
        cout << dit[i] << ':' << ans[i] << "개" << endl;
    }

    return 0;
}