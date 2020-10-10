#include <iostream>

using namespace std;

const char candi[] = "BTSKR";
bool used[5] = {false,false,false,false,false};
char path[5];
int ans=0;


int run(int dep, int level) {
    if(dep == level ) {
        if(used[2] == true) {
            ans++;
        }
        
    }
    else {
        for(int i=0 ; i<5 ; i++) {
            if(used[i] == false) {
                used[i] = true;
                path[dep] = candi[i];
                run(dep+1, level);
                path[dep] = '_';
                used[i] = false;
            }
            
        }
    }

    return 0;
}


int main() {
    int a;
    cin >> a;
    
    run(0,a);
    cout <<ans << endl;




    return 0;
}