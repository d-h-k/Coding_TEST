//#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

struct a2108
{
    int y;
    int x;
    /* data */
}typedef cordination;
cordination mouse;

const char * binlsit[5] = {
    "up",// : y축으로 한칸 -1
    "down",// : y축으로 한칸 +1
    "left",// : x축으로 한칸 -1
    "right",// : x축으로 한칸 +1
    "click"// : 현재 좌표 출력
};

void executor(int cmd) {
    if (cmd == 0) {
        //up
        //mouse.x
        mouse.y--;

    }
    else if (cmd == 1) {
        //down
        //mouse.x
        mouse.y++;


    }
    else if (cmd == 2) {
        //left

        mouse.x--;
        //mouse.y

    }
    else if (cmd == 3) {
        //right

        mouse.x++;
        //mouse.y

    }
    else if (cmd == 4) {
        //click
        printf("%d,%d\n", mouse.y, mouse.x);
    }


    return;
}


int main() {

    mouse.x = 5;
    mouse.y = 5;

    char buf[2000];
    int num = 0;
    fflush(stdin);
    scanf(" %d", &num);

    for (int i = 0; i < num; i++) {
        
        
        memset(buf, 'X', sizeof(buf));
        //fgets(buf, 200, stdin);
        scanf(" %s", buf);
        int slen = strlen(buf);
        //buf[slen - 1] = '\0';

        for (int j = 0; j < 5; j++) {
            char* loc = strstr( buf, binlsit[j]);
            if (loc != NULL) {
                executor(j);
                break;
            }
            else {

            }
        }


    }



    return 0;
}