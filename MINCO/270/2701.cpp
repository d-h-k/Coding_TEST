#include <iostream>
#include <vector>

using namespace std;

struct NODE{
    char cmd;
    int num;
}typedef Node;

vector<Node> myl;

int main() {
    Node temp;
    int a;

    cin >> a;

    for(int i=0 ; i<a ; i++) {
        cin >> temp.cmd >> temp.num;
        if(temp.cmd == 'E') {
            myl.push_back(temp);
            //cout << temp.num << ' ';
        }
        else if(temp.cmd == 'D') {
            cout << "Error" << endl;
            return 0;
        }
        else {
            //error
        }
        
    }

    for(int i=0 ; i<a ; i++) {

        if(temp.cmd == 'E') {
            temp  = myl.at(i);
            cout << temp.num << ' ';
        }
        else if(temp.cmd == 'D') {
            cout << "Error" << endl;
            return 0;
        }
        else {
            //error
        }
        
    }

    
    
}
