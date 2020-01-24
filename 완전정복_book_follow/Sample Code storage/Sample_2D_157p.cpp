#include <stdio.h>
#include <algorithm>

using namespace std;
struct st{
    int t1, t2;
};

bool comp1(const struct st &a, const struct st &b) {
    if(a.t1 == b.t1) return a.t2 > b.t2;
    else return a.t1 < b.t2;
}

bool comp2(const struct st &a, const struct st &b) {
    if(a.t1 == b.t1) return a.t2 < b.t2;
    else return a.t1 > b.t2;
}

int main() {
    st arr2[10];
    for(int i=0 ; i<10 ; i++) {
        scnaf("%d %d",arr2[i].t1, &arr2[i].t2);
    }

    sort(arr2, arr2+10 , comp1);
    for(int i=0 ; i<10 ; i++) {
        printf("arr2[%d] : %d %d\n",i , arr2[i].t1, arr2[i].t2);
    }

    sort(arr2, arr2+10 , comp2);
    for(int i=0 ; i<10 ; i++) {
        printf("arr2[%d] : %d %d\n",i , arr2[i].t1, arr2[i].t2);
    }

}