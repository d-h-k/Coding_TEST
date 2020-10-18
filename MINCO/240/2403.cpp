#include <iostream>

using namespace std;

struct a42
{
    int a;
    int b;
    char t[100];
    /* data */
}typedef ROBOT;

ROBOT ro;
ROBOT* pro;
int main() {
    pro = &ro;
    cin >> ro.a >> ro.b >> ro.t ;
    cout << ro.a+ro.b<<' '<<ro.t<<endl;

    return 0;
}