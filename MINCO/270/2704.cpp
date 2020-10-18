#include <iostream>

using namespace std;
int alpdat[276] = {0};

int main() {
    char buf[200] = {0};
    fgets(buf,200,stdin);

    for(int i=0 ; i<200 ; i++) {
        alpdat[buf[i]]++;
    }
    int ans=0;
    for(int j = (int)'A' ; j <= (int)'Z' ; j++) {
        if(alpdat[j] > 0) {
            ans++;
        }
        //cout << "AS222";
    }

    cout << ans<<"종류" << endl;
}