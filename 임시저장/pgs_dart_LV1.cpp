#include <string>
#include <cstdio>
#include <cmath>

const int DEBUG = 1;
using namespace std;

int numcal(int a, char b) {
	
	if(b == 'S') {
	    return a;
	} 
	else if (b == 'D') {
		return (int)pow(a, 2);
	}
	else if (b == 'T') {
		return (int)pow(a, 3);
	}
	else {
		printf("numcal error a:%d, b:%c", a, b);
		return 0;
	}
}

int solution(string dartResult) {
	int answer = 0;
	int arch = 1;
	int farch = 1;

	/*
	문제풀이 전략
	1.점수 혹은 별 구분
	2.회차 점수일시 연산
	3.* 과 #은 규칙에 맞게 연산
	4.정답리턴
	*/
	int len = dartResult.size();
	for (int i = 0; i < len; i++) {
		char temp = dartResult[i];
		
		/*
		
		*/
		if (temp == '*') {
			if (DEBUG) {
				printf("case* : before:%d, farch:%d, arch:%d\n", answer, farch, arch);
			}
			answer = answer+ farch +arch;
			
		}
		else if (temp == '#') {
			answer = answer + ((arch) * -2);
			farch = arch * -2;
		}
		else {
			farch = arch;
			//0s,10T 등을 처리
			if (temp == '1') {
				i++;
				temp = dartResult[i];
				if (temp == '0') {
					i++;
					temp = dartResult[i];
					arch = numcal(10, temp);
					answer = answer + arch;
				}
				else {
					answer = answer + 1;
					arch = 1;
				}
			}
			else {/*if (temp == '2') {*/ 
				int xnum = (int)(temp - '0');
				i++;
				temp = dartResult[i];
				arch = numcal(xnum, temp);
				answer = answer + arch;
			}
			/*
			else if (temp == '3') {
				i++;
				temp = dartResult[i];
				arch = numcal(3, temp);
				answer = answer + arch;
			}
			*/
		}
		if (DEBUG) {
			printf("temp:%c, answer:%d, arch:%d i:%d\n", temp, answer, arch,i);
		}
	}


	return answer;
}



int main(int argc, char ** argv) {
	string temp = "1D#2S*3S";
	int ret = solution(temp);
	printf("result : %d", ret);
	getchar();
	return 0;
}
/*	"1S2D*3T"
기댓값 〉	37
실행 결과 〉	실행한 결괏값 0이(가) 기댓값 37와(과) 다릅니다.
테스트 2
입력값 〉	"1D2S#10S"
기댓값 〉	9
실행 결과 〉	실행한 결괏값 0이(가) 기댓값 9와(과) 다릅니다.
테스트 3
입력값 〉	"1D2S0T"
기댓값 〉	3
실행 결과 〉	실행한 결괏값 0이(가) 기댓값 3와(과) 다릅니다.
테스트 4
입력값 〉	"1S*2T*3S"
기댓값 〉	23
실행 결과 〉	실행한 결괏값 0이(가) 기댓값 23와(과) 다릅니다.
테스트 5
입력값 〉	"1D#2S*3S"
기댓값 〉	5
실행 결과 〉	실행한 결괏값 0이(가) 기댓값 5와(과) 다릅니다.
테스트 6
입력값 〉	"1T2D3D#"
기댓값 〉	-4
실행 결과 〉	실행한 결괏값 0이(가) 기댓값 -4와(과) 다릅니다.
테스트 7
입력값 〉	"1D2S3T*"
기댓값 〉	59\


*/