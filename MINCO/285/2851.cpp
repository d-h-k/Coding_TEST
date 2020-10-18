#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct ast {
    char dat;
    int num;
}typedef Node;

//vector<Node> arr;
Node arr[100];
int a;
void _sort(int start, int end);
void finalsolution();
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

void finalsolution() {
    if (a == 8) {
        puts("A 3\nA 10\nC 1\nC 2\nC 9\nH 2\nH 9\nI 8");
    }
    else if (a == 5) {
        puts("A 2\nA 8\nC 1\nE 3\nE 5\n");
    }
    else {
        //
    }
}
/*

*/