#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(int n) {
    string answer = "";
    while(n!=0) {
        if(n%3 == 0 ) {
            answer.insert(0,"4");
            n= n/3 - 1;
        }
        
        else {
            answer.insert(0,to_string(n%3));
            n=n/3;
        }
    }
    return answer;
}
      

    /*
    int nn = n;
    
    for(int i=0 ; (i<10) //|| (nn<=0) ; i++) {
        if(nn%3==0) {
            answer+="4";
            //puts("4");
            if(nn==3) {
                break;
            }
        }   
        
//         printf( " �赿�� ���� ��� �Դϴ�. �����ϼ��� "); 
//         printf(" ������ ȭ���� �ϼ��� ���� ������Դϴ�. ");
//         puts( "  puts �� ������ printf�� ���������� ");
//         gets(" �������� ");
//         sscanf("%d, %d, %d");
//         sprintf("");
        
        else if(nn%3==1) {
            answer+="1";
            //puts("1");
        }
        else if(nn%3 == 2) {
            answer+="2";
            //puts("2");
        }
        else {
            puts("ERROR");
        }
        nn=nn/3;
        if(nn==0) {
            break;
        }
        
    }
    reverse(answer.begin(), answer.end());

        
    return answer;
}
*/
