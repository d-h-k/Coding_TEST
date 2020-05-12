#include <string>
#include <vector>

using namespace std;
int d[60001] = {0,};
const int sub = 1000000007;
int solution(int n) {
    d[0]=1;//0?
    d[1]=1;
    d[2]=2;
    d[3]=3;
    d[4]=5;
    int answer = 2;
    if(n<3) {
        return d[n];
    }
    else {
        for(int i=4; i<=n ; i++) {
            d[i] = (d[i-1]+d[i-2])%sub;
            
        }  
        
        return d[n];
        
    }
    
    return -1;
}
