#include <iostream>

using namespace std;

int map[100][100] = {0};

void dfs(int now) {
    if(now%2 == 1) {
        cout << now << ' '<<endl;
    }
    for(int i=0 ; i<6 ; i++) {
        if(map[now][i] == 1) {
            dfs(i);
        }
    }

}

int main() {
    for(int i=0 ; i<6 ; i++) {
        for(int j=0 ; j<6 ; j++) {
            cin >> map[i][j];
        }
    }


    dfs(0);
    //cout << "1 3 5"<<endl;
    return 0;
}