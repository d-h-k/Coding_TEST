//합분해1
// 2~5까지의 숫자를 3번 조합해 합이 10이 나오는 경우를 구하세요
#include <iostream>

using namespace std;

int cnt = 0;

int run(int dep, int sum) {
    if(dep == 3 ) {
        if(sum == 10) {
            cnt++;
        }
        else {
            //no
        }
    }
    else {
        for(int i=2 ; i<=5; i++) {
            run(dep+1,sum+i);    
        }
        
        
    }
}



int main() {
    run(0,0);
    cout << cnt;

}