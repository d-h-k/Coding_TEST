#include <iostream>

using namespace std;


char arr[5];
char path[4];
int ans = 0;

int run(int level) {

    if(level == 4) {
        ans++;
        cout <<path[0]<<path[1]<<path[2]<<path[3] << endl;
        return 0;
    }
    else {
        
        for(int i=0 ; i<4 ; i++) {
            
            if( (level>=1) && (path[level-1]=='B') && (arr[level]=='K')) {
                continue;
            }
            else {
                path[i] = arr[i];
                run(level+1);
                path[i] = ' ';
            }
            
        }
        
    }

    return 0;

}

int main() {

    cin >> arr;
    
    run(0);
    cout << ans <<endl;
    return 0;
}