//가지치기1

/*
1)기본
ATKR에서 1등,2등,3등을 뽑는 경우의 수


2) T,K 금지
- run1


3) A 금지 가지치기
- run3


4) 업그레이드 -> 못들어가게 막는게 아니라 들어가따가 나오는거
- run4
*/

#include <iostream>

using namespace std;

char name[] = "ATKR";
char path[4];
int cnt;

void run(int dep, int lev) {

    if(dep == lev) {
        cout << path<<endl;
    }

    else {
        for(int i=0 ;i <4  ; i++) {
            path[dep] = name[i];
            run(dep+1,lev);
            path[dep] = ' ';
        }
    }

    return;
}

void run2(int dep, int level) {

    if(dep == level) {
        
    }
    else {
        for(int i=0 ; i<3 ; i++ ) {
            if(i==1 && (name[i]=='T' || name[i] == 'k')) {
                continue;
            }else {
                path[i] = name[i];
                run(dep+1,level);
                path[i] = ' ';  
            }

        }


    }

    return;
}

void run4(int dep, int level,char forbiden){

    if(path[dep] == forbiden ) {
        
    }
}


int main() {

    run(0,3);
    return 0;
}