#include <iostream>
using namespace std;

struct node
{
    char data;
    node * left;
    node * right;
    /* data */
}typedef _Node;

_Node arr[4];

int main() {
    
    //0
    arr[0].data = 'A';
    arr[0].left = &arr[1];
    arr[0].right = &arr[2];

    //1
    arr[1].data = 'B';
    arr[1].left = &arr['D'-'A'];
    arr[1].right = &arr['E'-'A'];

    //2
    arr[2].data = 'C';
    arr[2].left = NULL;
    arr[2].right = NULL;

    //D
    arr[3].data = 'D';
    arr[3].left = NULL;
    arr[3].right =  NULL;

    //E
    arr[4].data = 'E';
    arr[4].left = NULL;
    arr[4].right = NULL;

    
    //cout << "hi" << endl;

    


    return 0;
}