#include <iostream>
using namespace std;

struct LL
{
    char alp;
    int data;
    LL * pnext;
    /* data */
};

typedef LL Node;

Node arr[27];
Node * head;
Node * tmp;

int main() {
    for(int i=0 ; i<26 ; i++) {
        arr[i].alp = 'A'+(char)i;
        arr[i].data = 11+i;
        arr[i].pnext = &arr[i+1];
    }

    int a;
    cin >> a;
    head = &arr[0];
    
    while (head->data != a)
    {
        head = head->pnext;
        /* code */
        //cout << head->alp;
    }
    
    

    for(int i=0 ; i<4 ; i++) {
        cout << head->alp;
        head = head->pnext;
    }
    

    return 0;
}