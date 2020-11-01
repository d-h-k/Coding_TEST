#include <iostream>

using namespace std;
int path[10];
int bit[] = { 0,3,7,10,5,6,3,6 };

void dfs(int now, int dep) {

    if (now >= 8) {
        return;
    }
    else {
        if (bit[now] != 0 && (bit[now]) % 2 == 0) {
            for (int i = 0; i < dep; i++) {
                cout << path[i] << ' ';
            }
            cout << bit[now] << endl;
            return;
        }
        else {}

        path[dep] = bit[now];
        dfs(now * 2, dep + 1);
        dfs(now * 2 + 1, dep + 1);
        path[dep] = 0;
    }

}

int main() {
    //const bool autotest = true;
    const bool autotest = false;

    if (autotest) {

    }
    else {
        for (int i = 0; i < 8; i++) {
            cin >> bit[i];
        }
    }
    dfs(1, 0);

    return 0;
}