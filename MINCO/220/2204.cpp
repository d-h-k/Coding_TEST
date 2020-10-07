#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const char* cmdlist[] = {
        "up",
        "down"
    };

    char buf[200];
    int floor = 1;
    for (int i = 0; i < 5; i++) {
        //cin >> buf;
        fgets(buf, 200, stdin);
        int slen = strlen(buf);
        buf[slen - 1] = '\0';
        buf[slen] = '\0';
        //printf("DBG>>%s",buf);
        if (0 == strcmp(cmdlist[0], buf)) {
            //up
            floor++;
        }
        else if (0 == strcmp(cmdlist[1], buf)) {
            floor--;
        }
        else {
            cout << "nuknown string::" << buf << endl;
        }
    }
    if (floor <= 0) {
        cout << 'B' << (-1 * (floor - 1));
    }
    else {
        cout << floor << endl;
    }

    return 0;
}