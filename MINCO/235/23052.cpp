#include <iostream>
using namespace std;

int xdat[10] = { 0 };
int ydat[10] = { 0 };

int main() {

    //세명의 좌표 위치 입력받기
    int a, b;
    for (int i = 0; i < 3; i++) {
        cin >> a >> b;
        //cout << "DEBG"<< xdat[0] << endl;
        ydat[a]++;
        xdat[b]++;
    }

    for (int i = 0; i < 10; i++) {
        if ( (xdat[i]>1) || (ydat[i]>1) ){
            puts("위험");
            return 0;
        }
    }
    puts("안전");


    //각 사람마다 같은 y좌표와 x좌표에 뭔가 있는지 확인
    //dat 배열에 저장


    //결과 출력



    return 0;
}