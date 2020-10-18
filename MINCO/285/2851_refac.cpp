#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct _Node {
    char dat;
    int num;
}typedef Node;

vector<Node> arr[20];
//Node arr[100];
int a;


void _sort(int start, int end);

bool comp(Node a, Node b) {
    return (a.dat > b.dat);
}

int main() {
    
    cin >> a;
    Node temp;
    for (int i = 0; i < a; i++) {
        cin >> temp.dat;
        cin >> temp.num;
        //arr.push_back(temp);
        arr[i].dat = temp.dat;
        arr[i].num = temp.num;
    }

    //sort(arr[0], arr[a], comp);
    _sort(0, a);
    
    finalsolution();
    /*
    for (int i = 0; i < a; i++) {
        cout << arr[i].dat << arr[i].num << endl;
    }*/


    return 0;
}


void _sort(int start, int end) {

}
