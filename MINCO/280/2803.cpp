#include <iostream>

using namespace std;
int n;

int map[10][10];

int run(int now) {
    cout << now << ' ';
    for(int i=0 ; i<n ; i++) {
        if(map[now][i] == 1) {
            run(i);
        }
    }
}

int main() {
    cin >> n;
    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<n ; j++) {
            cin >> map[i][j];
        }
    }

    run(0);

    

}