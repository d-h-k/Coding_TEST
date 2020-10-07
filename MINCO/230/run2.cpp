#include <iostream>

/*
T,P,R,K,G 총 5장의 카드 중에서 
4장을 뽑는 경우의수를 모두 나열
마지막에는총 경우의 갯수, 중복을 허용 X
*/


using namespace std;

char arr[] = "TPRKG";
char path[4];
int use[5] = {0,0,0,0,0};
int ans=0;


// 레벨이 4까지고 브랜치가 5개까지, 
void run(int level) {
    if(level == 4) {
        cout << path << endl;
        ans++;
        return;
    }   
    else {
        for(int i=0 ; i<5 ; i++ ) {
            if(use[i] == 0 ) {
                path[level] =arr[i];
                use[i]++;
                run(level+1);
                path[level] = ' ';
                use[i]--; 
            }
        }
    }
}

int main() {
    

    run(0);
    cout<<ans<<endl;
    return 0;
    
}