#include <cstring>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>

using namespace std;
vector<int> solution(int n) ;

int main() {
	int i=0,siz_v=0; 
	vector<int> v;
	//puts("111111111");
	v = solution(2);
	
	siz_v=v.size();
	printf("siz_v : %d\n",siz_v);
	for(int i=0 ; i<=siz_v ; i++ ) {
		printf("%d",v[i]);	
	}
	
	
	
	return 0;
}


vector<int> solution(int n) {
    vector<int> answer;
    stack<int> st;
    int temp=0;
    
    //answer.push_back(0);
    for(int i=1 ; i<=n ; i++) {
        for(int j=1; j<=answer.size() ; j++) {
            st.push(answer[j]);
        }
        
        temp = st.top();
        if(temp==0) {
            temp=1;
        }
        else {
            temp = 0;
        }
        answer.push_back(temp);
        st.pop();
        
    }
         
    return answer;
}
