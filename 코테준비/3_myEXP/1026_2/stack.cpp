#include <cstring>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

//
//testdata
int n = 3;
//
//


int main() {
	
//vector<int> solution(int n) {
    vector<int> answer;
    stack<int> st;
    int temp=0;
    int j=0;
    
    answer.push_back(0);
    answer.push_back(0);
    answer.push_back(1);
    for(int i=2 ; i<=n ; i++) {
        for(int j=1; j<=answer.size() ; j++) {
            st.push(answer[j]);
        }
        temp = st.top();
        temp = ~temp;
        answer.push_back(temp);
        st.pop();
    }
         
    //return answer;
    for(j=0 ; j<=answer.size() ; j++) {
		printf("%d ",answer.pop_back());
	}
    
}
