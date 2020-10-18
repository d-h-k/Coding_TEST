#include <iostream>

using namespace std;

void _swap(int *a, int *b) {
    int  ta;

    ta = *a;
    *a = *b;
    *b = ta;
    return;
}

int main() {
    
    //cout << "hi"<<endl;
    int in1,in2;
    cin >> in1 >> in2;
    _swap(&in1,&in2);
    cout << in1 << ' ' << in2<<endl;


    return 0;
}