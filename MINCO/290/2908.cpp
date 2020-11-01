#include <iostream>

using namespace std;

int bitree[100];

void dfs(int now) {
    if(now > 8 || bitree[now] == 0) {
        return;
    }
    else {
        cout << bitree[now]<<' ';
        dfs(now*2);
        dfs(now*2+1);
    }
    
}

int main() {
    for(int i=0 ; i<8 ; i++) {
        cin >> bitree[i];
    }

    dfs(1);

    return 0;
}