#include <iostream>
#include <vector>

using namespace std;
vector<char> v;
int main() {

    int a;
    char buf[2000];


    cin >> a;
    for(int i=0 ; i<a ; i++) {
        cin >>  buf[i];
        v.push_back(buf[i]);
    }

    for(int i=0 ; i<a ; i++) {
        cout << v[i] << ' ';
        //v.pop_back();
    }


    return 0;
}