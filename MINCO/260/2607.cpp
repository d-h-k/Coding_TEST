#include <iostream>
#include <queue>
using namespace std;

struct NODE
{   
    int x;
    char y;
    /* data */
}typedef Node;

queue <Node> q;
//Node queue[10];


int main() {
    //cout << "hi"<<endl;
    int a=0;
    cin >> a;
    Node temp;
    for(int i=0 ; i<a ; i++ ) {
        cin >> temp.x >> temp.y ;
        q.push(temp);
    }

    for(int i=0 ; i<a ; i++) {
       temp = q.front();
       q.pop();
       cout << temp.x << ' ' << temp.y << endl;

    }

    return 0;
}