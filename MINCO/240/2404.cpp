#include <iostream>

using namespace std;

struct a2404
{
    int data;
    a2404 *pnext;
    /* data */
}typedef nodee;

nodee a,b,c;

int main() {
    

    a.data=3;
    a.pnext = &b;

    b.data = 5;
    b.pnext = &c;

    c.data = 4;
    c.pnext = &a;


    //cout << "hi"<<endl;

    return 0;
}