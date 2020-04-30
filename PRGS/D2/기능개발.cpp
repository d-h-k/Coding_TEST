#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> dday;//완료일
    vector<int> upday;
    int max = 0, updatenum=0;
    int tcase = speeds.size();
    int qu,rem=0;

    //완료일 구하기
    for(int i = 0 ; i<tcase ; i++) {
        qu = (100-progresses[i])/speeds[i];
        rem = (100-progresses[i])%speeds[i];
        if(rem!=0) {
            qu++;
        }
        //qu는 완료일임.
        dday.push_back(qu);
        
        if(max<qu) {
            answer.push_back(1);
            max=qu;
        }
        else {
            int temp=answer.back();
            answer.pop_back();
            answer.push_back(temp+1);
        }
    }
   
    
    return answer;
}
