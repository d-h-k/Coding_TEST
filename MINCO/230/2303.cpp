#include <iostream>

using namespace std;

char path[10];
int ans = 0;
int DEBUG = 0;
void run(int dep, int level) {
    if (dep == level) {
        ans++;
        if (DEBUG) {
            cout << path << endl;
        }
        return;
    }
    else {
        for (int i = 0; i < 3; i++) {
            char nowturn = (char)i + 'A';

            if ((dep >= 2) && (path[dep - 1] == path[dep - 2]) &&
                (path[dep - 2] == nowturn)) {
                continue;
            }
            else {
                path[dep] = nowturn;
                run(dep + 1, level);
                path[dep] = (char)0;
            }


        }
    }
}

int main() {

    int a;
    cin >> a;
    run(0, a);
    cout << ans;
    return 0;
}