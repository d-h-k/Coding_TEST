#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int maxi=0, maxi_idx= 0;
    int mini=9999,mini_idx;
    char buf[200];
    int slen;
    for(int i=0 ; i<4 ; i++ ) {
        //cin >> buf[0];
        fgets(buf,200,stdin);
        slen = strlen(buf);
        if(slen > maxi) {
            maxi = slen;
            maxi_idx = i;
        }
        if(slen < mini) {
            mini = slen;
            mini_idx = i;
        }


    }

    cout<< "긴문장:"<< maxi_idx <<endl;
    cout<< "짧은문장:"<< mini_idx <<endl;

    return 0;
}