#include <iostream>

using namespace std;

int bitree[] = {0,3,4,2,4,1,0,3};//7

void dfs(int now) {
    if(now >=8 || bitree[now] == 0) {
        return;
    }
    else {
        cout << bitree[now] << ' ';
        dfs(now*2);
        dfs(now*2+1);
    }
}

int main() {
    int a,b;
    cin >> a >> b;
    bitree[a] = b;
    dfs(1);
    return 0;
}