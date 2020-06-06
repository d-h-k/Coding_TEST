#include <iostream> 
#include <string>
#include <vector>
#pragma warning(disable : 4996)
 
using namespace std;
 
vector<string> str_vec = { "c=", "c-","dz=","d-","lj","nj","s=","z=" };
 
int main() {
    string _string;
    cin >> _string;
    int tot_num = 0;
 
    // vec 안의 string 이 존재하는지 find 함수로 하나하나씩 찾아본다. 
    for (int tot_idx = 0; tot_idx < str_vec.size(); tot_idx++) {
        int each_char_num = 0;
 
        // 글자가 찾아지면 찾은 글자의 인덱스 올리고 다음부터 찾기  
        int sub_index = _string.find(str_vec.at(tot_idx), 0);
        while ( sub_index  != -1 ) {
            // 글자 찾으면 |로 치환 
            _string.replace(sub_index, str_vec.at(tot_idx).size() , "|");
            sub_index = _string.find(str_vec.at(tot_idx), sub_index + 1);
            tot_num++;
        } 
    }
 
    // - 가 아닌 모든 글자를 카운트 한다. 
    for (int str_idx = 0; str_idx < _string.length(); str_idx++)
        if (_string.at(str_idx) != '|') tot_num++;
 
    cout << tot_num;
 
    return 0; 
}

