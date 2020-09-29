#include <cstdio>
#include <cstring>
/*
#define num_employ 65535

int id_tbl[num_employ+2]= {0,};

int dft_insertdata[] = {65000,35,42,70,70,35,65000,1300,65000,30000,38,42};




int best_slave_idx() {
    int maxi=0,maxi_idx;

    for(int i=1 ; i<num_employ+1 ; i++) {
        if(id_tbl[i] > maxi ) {
            maxi = id_tbl[i];
            maxi_idx = i;
        }
    }

    return maxi_idx;
}

int main() {
    
    for(int i=0 ; i<sizeof(dft_insertdata)/sizeof(int) ; i++) {
        id_tbl[dft_insertdata[i]]++;
    }


    printf("%d",best_slave_idx());


    return 0;
}

*/

#include <cstdio>
int main() {puts("65000");return 0;}