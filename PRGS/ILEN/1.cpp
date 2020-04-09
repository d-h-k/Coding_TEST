#include <string>
#include <vector>
#include <iostream>
 
using namespace std;
char galho[8] = {'(',')','{','}', '[', ']', '<' ,'>'};
const int DEBUG = 1;
 
int solution(string inputString) {
    int answer = -1;
    int num = 0;
    int mark[4];
    //init
    for(int i=0 ; i<4 ; i++) {
        mark[i] = 0;
    }
    
    //
    //빼고 모두 제거
    string f_str;
    int len = inputString.size();
    bool isfind = false;
    for(int i=0 ; i<len ; i++) {
        isfind = false;
        for(int j=0 ; j<8 ; j++) {
            if(inputString[i] == galho[j]) {
                isfind = true;
                f_str += inputString[i];
                break;
            }    
        }
        
    }
    
    if(DEBUG) {cout << f_str << endl;}
    if(f_str.size() == 0) {
        answer = 0;
    }
    else {//'(',')','{','}', '[', ']', '<' ,'>'
        int f_len = f_str.size();
        for(int i=0 ; i<f_len ; i++) {
            if ( f_str[i] == '(' ) {//0
                mark[0]++;
                num++;
            }
            else if ( f_str[i] == ')' ) {//0
                mark[0]--;
            }
            else if ( f_str[i] == '{' ) {//1
                mark[1]++;
                num++;
            }
            else if ( f_str[i] == '}' ) {//1
                mark[1]--;
            }
            else if ( f_str[i] == '[' ) {//2
                mark[2]++;
                num++;
            }
            else if ( f_str[i] == ']' ) {//2
                mark[2]--;
            }
            else if ( f_str[i] == '<' ) {//3
                mark[3]++;
                num++;
            }
            else if ( f_str[i] == '>' ) {//3
                mark[3]--;
            }
            else {
                puts("NONO!!!");
            }
            
            if(mark[0]<0 || mark[1]<0 || mark[2]<0 || mark[3]<0 ) {
                return (-1);
                
                break;
            }
            
        }
    }
    
    //
    return num;
}


