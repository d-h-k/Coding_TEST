#include <iostream>
using namespace std;

int map[5];
int all;
int clean(int dep) {

    if(dep == 4) {
        for(int i=0 ; i<dep ; i++) {
            printf("%d",map[i]);
        }
        puts("");
        
    }
    else { 
        for(int i=1 ; i<=all ; i++) {
            map[dep] = i;
            clean(dep+1);
            map[dep] = i;
        }
    }

}
int main() {
    cin >> all;
    clean(0);

    return 0;
}