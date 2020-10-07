#include <iostream>
using namespace std;

void b33p(char start){
    for(int i=0 ; i<3; i++) {
        for(int j=0; j<3 ; j++) {
            cout<< start;
        }
        cout<<endl;
    }
       cout<<endl;
}

int main (){
    //cout << "Hello wolrd!!" << endl;
    char a;
    cin >> a;
    b33p(a);
    b33p(a+1);
    b33p(a+2);

    return 0;
}