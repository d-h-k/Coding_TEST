#include <iostream>
//#include <cstring>

using namespace std;

int slen;
char bit[2222] = "#fBCd#ZqK\n┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈";

void dfs(int now) {


    if (now > slen || bit[now] == '#') {
        return;
    }
    else {
        if ('A'<= bit[now] && bit[now] <= 'Z') {
            cout << bit[now];
        }
       
        dfs(now * 2);
        dfs(now * 2 + 1);
    }

    return;

}

int _strlen(char* s1) {
    int len = 0;
    while (s1[len] != '\0') {
        if (s1[len] == '\r' || s1[len] == '┈') {
            break;
        }
        len++;
    }
    return len;
}

int main() {

    fgets(bit, 2222, stdin);
    slen = _strlen(bit);
    //cout << "slen  : " << slen << endl;
    dfs(1);
    return 0;
}