#include <iostream>

using namespace std;

//1)인접행렬로 나타내기
//2)

int map[8][8] = {
  //0 1 2 3 4 5 6 7  
    0,1,1,1,0,0,0,0,// 0
    0,0,0,0,1,1,1,0,// 1
    0,0,0,0,0,0,0,0,// 2
    0,0,0,0,0,0,0,1,// 3
    0,0,0,0,0,0,0,0,// 4
    0,0,0,0,0,0,0,0,// 5
    0,0,0,0,0,0,0,0,// 6
    0,0,0,0,0,0,0,0 // 7
};
int dat[] = {3,4,2,3,4,2,5,9};

int main() {

    int n;
    int parent;
    cin >> n;
    int cnt=0;


    //1) print child
    cout << "child : ";
    for(int i=0 ; i<8 ; i++) {
        if(map[n][i] == 1) {
            cnt++;
            cout << dat[i] << ' ';
        }
    }
    cout << "\nconnected '"<<n<<"' : " <<cnt<<endl;
    


    //brothrer print
    //searching parent > print child without self
    for(int i=0 ; i<8 ; i++) {
        if(map[i][n] == 1) {
            parent = i;
            break;
        }
    }

    for(int i=0 ; i<8 ; i++) {
        if(map[parent][i] == i && i!=n ) {
            cout << dat[i] ;
        }
    }
    
    
    return 0;
}