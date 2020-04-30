#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    map<char, int> tree;
    //hash map 스킬순서 저장
    
    for(int i= 0 ; i<skill.length() ; i++) {
        tree[skill[i]] = i+1;
    }
    
    for(auto skt : skill_trees) {
        int count = 1;
        bool check = true;
        
        for(int i=0 ; i<skt.length() ; i++) {
            if(tree[skt[i]] > count) {
                check = false;
                break;
            }
            else if(tree[skt[i]] == count) {
                count ++;
            }
            
        }
        if(check) {
            answer++;
        }
        
    }
    return answer;
}

void print(string skill,vector<string> skill_trees, int answer) {
    int t =  solution(skill, skill_trees);
    if(answer == t)
        cout << "OK" << endl;
    else 
        cout << "NO" << endl;
}

int main() {
    print("CBD",{"BACDE", "CBADF", "AECB", "BDA"}, 2);
    return 0;
}
