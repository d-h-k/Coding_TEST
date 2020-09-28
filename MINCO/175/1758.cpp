#include <cstdio>

int main() {
    char buf;
    char diff;
    scanf("%c",&buf);
    diff = buf-'M';
    printf("%d,%d",diff/5,diff%5);
    return 0;
}