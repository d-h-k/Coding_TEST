#include <iostream>


using namespace std;

struct a11 {
    int y;
    int x;
}typedef cod;

int main() {
    cod  loc_a, loc_b;

    char arr[4][3];
    int diff,dy;

    for(int i=0 ; i<4; i++) {
        for(int j=0 ; j<3 ; j++) {
            cin >> arr[i][j];
            //cout << arr[i][j];
            if(arr[i][j] == 'A' ) {
                loc_a.x = j;
                loc_a.y = i;
            }
            else if(arr[i][j] == 'B') {
                loc_b.x = j;
                loc_b.y = i;
            }
            else {

            }
        }
    }

    
    diff = loc_b.x - loc_a.x;
    if(diff < 0 ) { 
        diff = diff * -1;
    }
    dy = loc_b.y - loc_a.y; 
    if(dy < 0 ) {
        dy = dy * -1;
    }

    printf("%d",diff+dy);




    return 0;
}