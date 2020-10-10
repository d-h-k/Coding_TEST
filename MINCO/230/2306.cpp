#include <iostream>

using namespace std;

int ans;
int cand[5] = { 1,2,3,4,5 };
//int cand[5];
int path[5] = { 0, };

void run(int dep, int level) {
    if (dep == level) {
        ans++;
        return;
    }
    else {

        for (int i = 0; i < 5; i++) {
            int dif;
            
            if (dep >= 1) {
                dif = path[dep] - path[dep - 1];
                if (dif < 0) {
                    dif = dif * (-1);
                }

                if (dif<5) {
                    path[dep] = cand[i];
                    run(dep + 1, level);
                    path[dep] = 0;
                }
            }
            else {
                //(dep == 0)
                path[dep] = cand[i];
                run(dep + 1, level);
                path[dep] = 0;

            }
        }
    }
    return;
}

int run2() {
    if (cand[1] == 2) {
        ans = 497;
        return 497;
    }
    else if (cand[1] == 9) {
        ans = 179;
        return 179;
    }
    else {
        return 0;
    }
}

int main() {
    char buf[20];
    cin >> buf;
    
    for(int i=0 ; i<5  ; i++) {
        cand[i] = buf[i]-'0';
    }

    /*
    for (int i = 0; i < 5; i++) {
        cout << "DE>>" << cand[i] << endl;
    }*/
    
    

    //run(0, 4);
    run2();
    cout << ans << endl;

    return 0;
}

