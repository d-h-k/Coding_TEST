#include <iostream>

using namespace std;

char path[4];
char buf[] = "ABCDEFGHIJKLMNOPQ";
long long ans;

void run(int level) {
    if(level == 4){ 
        //cout << path << endl;
        ans++;
        return;
    }
    else {
        for(int i=0 ; i<16 ; i++ ) {
            path[level] = buf[i];
            run(level+1);
            path[level] = ' ';
        }
    }
}

int main() {
    
    run(0);
    cout<<ans<<endl;
    return 0;
}
