#include <iostream>

using namespace std;
int data[] = {0,3,5,4,0,0,9,3};
char _data[] = "_354__93";
int siz_T;

void DFS(int now) { 
    if(now >= 8 || data[now] == 0) {
        return;
    }
    else {
        DFS(now*2);
        DFS(now*2+1);
        cout << "now : "<<now<<" i:"<<data[i]<<endl;
    }
}

int main() {

    siz_T = 8;
    DFS(1);
    return 0;
}