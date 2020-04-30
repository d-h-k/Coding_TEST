#include <string>
#include <vector>

using namespace std;
bool exist = false;
vector<int> solution(vector<int> heights) {
    vector<int> answer;
    
    int len = heights.size();
    for(int i=0 ; i<len ; i++) {
        exist = false;
        int tow = heights[i];
        int j=i;
        for(j=i ; j>=0 ; j--) {
            if(tow < heights[j]) {
                answer.push_back(j+1);
                exist = true;
                break;
            }
            
        }
        if(exist==false) {
            answer.push_back(0);
        }
    }
    
    return answer;
}
