#include <iostream>

using namespace std;

int bitree[100];
int sum=0;
void dfs(int now,int dep) {
  
    if(now<=4 && now <=7) {
        sum += bitree[now];
        dfs(now*2,dep+1);
        dfs(now*2+1,dep+1);
    }

    else if(now>=8 ) {
        return;
    }
    else {
        dfs(now*2,dep+1);
        dfs(now*2+1,dep+1);
    }

    
}


int main() {
    for(int i=1 ; i<=7 ;i++) {
        cin >> bitree[i];
    }

    //dfs(1,0);
    sum=0;
    for(int i=4 ; i<=7 ; i++) {
        sum += bitree[i];
    }
    cout << sum;

    return 0;
}