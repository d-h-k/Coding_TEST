#include <cstdio>
char insert[288] = {0,};

int main() {
    char buf;
    for(int i=0 ; i<8 ; i++) {
        scanf("%c",&buf);
        insert[buf]++;
    }
    int maxi=0 ,maxi_idx;

    for(int i=0 ; i<255 ; i++) {
        if(maxi <insert[i] ) {
            maxi = insert[i];
            maxi_idx = i;
        }
    }

    printf("%c",maxi_idx);

    return 0;
}