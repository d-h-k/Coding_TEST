#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> sinr;

bool scmp(string a, string b) {
    return a.length() > b.length() ? 1:-1;
}

int main (){
    //cout << "Hello wolrd!!" << endl;
    for(int i=0 ; i<4 ; i++) {
        cin >> sinr[i];    
    }

    sort(sinr[0],sinr[3],scmp);
    
    for(int i=0 ; i<4 ; i++) {
        cout << sinr[i]<<endl;    
    }
    



    return 0;
}