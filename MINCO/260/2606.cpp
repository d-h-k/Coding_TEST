#include <iostream>
#include <cstring>
using namespace std;
char buf[2000];


int _atoi(char* buf) {
    int temp = 0;
    /*
    while (buf != '\0') {

    }
    */
    return 0;
}

int main() {
    //cout << "hi"<<endl;
    fgets(buf, 2000, stdin);
    char ans[200];
    int slen = strlen(buf);
    int numlen = 0, numbegin = -1;

    for (int i = 0; i < slen; i++) {
        if (buf[i] <= '9' && '0' <= buf[i]) {
            if (numbegin == -1) {
                numbegin = i;
            }
            else {}
            numlen++;
        }
    }
    int cnt = 0;
    for (int i = numbegin; i < numbegin + numlen; i++) {
        ans[cnt] = buf[i];
        cnt++;
    }
    ans[numlen] = '\0';
    int fans = atoi(ans);
    cout << fans+5;

    return 0;
}