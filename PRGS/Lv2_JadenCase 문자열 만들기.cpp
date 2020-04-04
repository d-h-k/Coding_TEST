#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    answer=s;
    int len = answer.size();
    
    for(int i=0 ; i<len  ; i++) {
        answer[i] = tolower(answer[i]);
    }
    answer[0] = toupper(answer[0]);
    for(int i=0 ; i<len  ; i++) {
        if(answer[i] == ' ') {
            answer[i+1] = toupper(answer[i+1]);
        }
    }
    return answer;
}
