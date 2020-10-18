#include <iostream>

using namespace std;

int main() {
    
    char buf[200];
    fgets(buf,200,stdin);
    
    int temp;
    for(int i=0 ; i<4 ; i++){
        cin >> temp;
        cout << buf[temp];
    }
    

    //cout << "hi"<<endl;

    return 0;
}