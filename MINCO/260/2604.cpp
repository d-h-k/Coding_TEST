#include <iostream>
using namespace std;

struct a2604
{
    char a;
    int b;
    a2604 * pn;
    /* data */
};
typedef a2604 Node;

Node * head;

int main() {
    //cout << "hi"<<endl;
    int a;
    cin >> a;
    for(int i=0 ; i<a ; i++) {
        cout << (char)('A'+(char)i) << ' ';
    }
    cout << endl;
    for(int i=0 ; i<a ; i++) {
        cout << i+1 << ' ';
    }
    return 0;
}