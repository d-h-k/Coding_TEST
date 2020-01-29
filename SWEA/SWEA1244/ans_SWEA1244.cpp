//from : https://swjeong.tistory.com/133
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;
int n, result;
string num;



void dfs(int cur, int cnt) {
    if(cnt==n) {
    	result = max(result,stoi(num));
    	return;
    }
    for(int i=cur ; i<num.size() ; i++) {
    	for(int j=i+1 ; j<num.size() ; j++ ) {
    		if(num[i] <= num[j] ) {
    			swap(num[i], num[j]);
    			dfs(i,cnt+1);
    			swap(num[i],num[j]);
			}
		}
	}
    
    
    return;
}
int main() {
	freopen("input.txt","r",stdin);
	    
    int T;
    cin>>T;
    for(int test_case=1 ; test_case<=T ; test_case++) {
    	cin>>num>>n;
    	result=0;
    	dfs(0,0);
    	printf("#%d %d\n",test_case,result);
	}
    return 0;
}

