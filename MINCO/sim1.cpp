#include <iostream>

using namespace std;

int main() {


    int a;
    cin >> a;
    int ans=1;
    for(int i=a; i>a-3 ; i--) {
        ans = ans*i;
        //puts(">>RUN");
    }
    cout << ans << endl;
}