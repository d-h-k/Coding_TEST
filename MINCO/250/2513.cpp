#include <iostream>
using namespace std;
int num[6];
char buf[7];
int getmax();
int getmin();

int main() {
    for (int i = 0; i < 6; i++) {
        cin >> num[i];
    }
    //fgets(buf, 7, stdin);
    cin >> buf;


    for (int i = 0; i < 6; i++) {
        if (buf[i] == 'm') {
            cout << getmin();
        }
        else if (buf[i] == 'x') {
            cout << getmax();
        }
        else {
            puts("ERROR!!");
        }

    }

    return 0;
}


int getmax() {
    //return max + remove
    int max = -1, max_idx=0;
    for (int i = 0; i < 6; i++) {
        if (num[i] >= 0) {
            if (max < num[i]) {
                max = num[i];
                max_idx = i;
            }
        }
    }

    num[max_idx] = -1;
    return max;
}
int getmin() {
    //return max + remove
    int min = 99999, min_idx;
    for (int i = 0; i < 6; i++) {
        if (num[i] >= 0) {
            if (min > num[i]) {
                min = num[i];
                min_idx = i;
            }
        }
    }

    num[min_idx] = -1;
    return min;
}