#include <iostream>

using namespace std;

int map[100][100];
int path[10];
int n;
void run(int level,int now) {
    bool is_leaf = true;
    for(int i=0 ; i<n ; i++) {
        if(map[now][i] == 1) {
            is_leaf= false;
            path[level+1] = i;
            run(level+1,i);
            path[level+1] = 0;
        }        
    }
    if(is_leaf) {
        for(int i=0 ; i<=level ; i++) {
            cout << path[i] << ' ';
        }
        cout << endl;
    }
    return;

}

int main() {
    
    cin >> n;

    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<n ; j++) {
            cin >> map[i][j];
        }
    }
    path[0] = 0;
    run(0,0);



}


/*

#include <iostream>

using namespace std;
int n;

int map[10][10];

int run(int now) {
    cout << now << ' ';
    for(int i=0 ; i<n ; i++) {
        if(map[now][i] == 1) {
            run(i);
        }
    }
}

int main() {
    cin >> n;
    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<n ; j++) {
            cin >> map[i][j];
        }
    }

    run(0);

    

}
*/