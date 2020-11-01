#include <iostream>

using namespace std;

char bitree[] = "_ADFZCGQH_______";
//1,3,7,15,31
//1,1+2,1+2+4,+

void dfs(int now) {

}

int get_nodenum(char node) {
    for(int i=0 ; i<15 ; i++) {
        if (bitree[i] == node) {
            return i;
        }
    }
    return 0;
}

int main() {
    char a, b;
    cin >> a  >> b;
    //노드번호를 찾아내서 2n+1인지 확인
    if(a<b) {
        //a>b 고정
        char temp=a;
        a=b;
        b=temp;
    }

    int bnod = get_nodenum(a);
    int snod = get_nodenum(b);

    if((snod*2) == bnod || (snod*2+1) == bnod) {
        puts("부모자식관계");
    }
    else {
        puts("아님");
    }

    return 0;
}