#include <iostream>
#include <queue>
using namespace std;

int map[4][4] = {
    0,0,0,0,
    0,0,0,0,
    0,0,0,0,
    0,0,0,0
};


struct a2
{
    int yi;
    int xj;
}typedef Node;

int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };
int nx, ny;

void run(Node start) {
    //int data = 1;
    queue<Node> q;
    q.push(start);
    Node curr, next;

    while (q.empty() == false) {
        curr = q.front();
        q.pop();
        //data++;
        for (int i = 0; i < 4; i++) {
            ny = curr.yi + dy[i];
            nx = curr.xj + dx[i];
            if (0 <= nx && nx <= 3 && 0 <= ny && ny <= 3) {
                if (map[ny][nx] == 0) {
                    next.xj = nx;
                    next.yi = ny;
                    q.push(next);
                    map[ny][nx] = map[curr.yi][curr.xj]+1;
                    //map[ny][nx] = data;
                    
                }
                
            }
        }
        
    }
}


int main() {
    Node tmp;
    cin >> tmp.yi >> tmp.xj;

    map[tmp.yi][tmp.xj] = 1;
    run(tmp);



    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << map[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}


