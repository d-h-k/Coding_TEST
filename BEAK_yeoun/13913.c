#include <stdio.h>
const int MAX = 200000;
int queue[300000];
int check[200001];
int dist[200001];
int from[200001];
int begin, end;
void push(int x) {
    queue[end++] = x;
}
int pop() {
    return queue[begin++];
}
void print(int n, int m) {
    if (n != m) {
        print(n, from[m]);
    }
    printf("%d ",m);
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    push(n);
    check[n] = 1;
    dist[n] = 0;
    while (begin < end) {
        int now = pop();
        int temp[3] = { now - 1, now + 1, now * 2 };
        for (int k = 0; k < 3; k++) {
            int next = temp[k];
            if (0 <= next && next <= MAX) {
                if (check[next]) continue;
                push(next);
                check[next] = 1;
                dist[next] = dist[now] + 1;
                from[next] = now;
            }
        }
    }
    printf("%d\n", dist[m]);
    print(n, m);
    printf("\n");
    return 0;
}