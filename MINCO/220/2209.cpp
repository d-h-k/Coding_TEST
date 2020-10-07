#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main() {
    const char * code[] = {
        "Jason",
        "Dr.tom",
        "EXEXI",
        "GK12P",
        "POW"
    };


    char buf[2000];
    //fgets(buf,2000,stdin);
    //gets(buf);
    cin >> buf;
    int slen = strlen(buf);
    //buf[slen-1] = '\0';

    for(int i=0 ; i<5 ; i++) {
        if(0 == strcmp(buf,code[i])) {
            cout << "암호해제" << endl;
            return 0;
        }
    }
    cout << "암호틀림" << endl;
    

    return 0;
}
