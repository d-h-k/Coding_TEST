//23055_refac.cpp

#include <iostream>
using namespace std;

int vect[8];


int main() {
    
    for(int i=0 ; i<8 ; i++) {
        cin >> vect[i];
    }

    int pivot = vect[0];// pivot 설정
    int a= 1;// 와이???
    int b= 7;


    while (1) {
        for(a;a<8 ; a++) {
            if(vect[a] > pivot) break;
        }
        
        for(b ; b>=1 ; b--) {
            if(vect[b] < pivot) break;
        }

        if(a>b) break;

        swap(vect[a],vect[b]);
        

    }

    swap(vect[0],vect[b]);
    
    for(int i=0 ; i<8 ; i++) {
        cout << vect[i] << " ";
    }

    return 0;
}
