#include <iostream>
using namespace std;

int via[26];//a=[0],z=[26];
char path[7] = {0};
void run(int dep, int tar) {
    if(dep == tar) {
        for(int i=0 ; i<dep ; i++) {
            cout << path[i];
        }
        cout <<endl;
    }
    else {
        for(int i=0 ; i<4 ; i++) {
            if(via[i] ==0) {
                via[i]++;
                path[dep] = 'A'+(char)i;
                run(dep+1,tar);
                path[dep] = ' ';
                via[i]--;

            }
            
        }
    }
}

int main() {
    //cout << "hi"<<endl;
    int a;
    cin >> a;
    run(0,a);
    return 0;
}