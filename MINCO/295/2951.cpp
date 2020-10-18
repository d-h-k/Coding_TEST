#include <iostream>

using namespace std;
int stg[] = {-1,3,1,2,1,  3,2,1,2,1,-1};
//9개
// -1 포함 10개
int run(int i) {
    //int temp = stg[i];
    if(i+stg[i] == 10) {
        puts("DOCAHK!!");
        puts("도착");
    }
    else if(i+stg[i] < 10) {
        run(i+stg[i]);
    }
    else {
        puts("error");
    }
}

int main() {
    int n;
    cin >> n;
    run(n);
    //cout << "hi"<<endl;

    return 0;
}