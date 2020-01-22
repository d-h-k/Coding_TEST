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
	����Ǯ�� ����
	1.���� Ȥ�� �� ����
	2.ȸ�� �����Ͻ� ����
	3.* �� #�� ��Ģ�� �°� ����
	4.���丮��
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
			//0s,10T ���� ó��
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
��� ��	37
���� ��� ��	������ �ᱣ�� 0��(��) ��� 37��(��) �ٸ��ϴ�.
�׽�Ʈ 2
�Է°� ��	"1D2S#10S"
��� ��	9
���� ��� ��	������ �ᱣ�� 0��(��) ��� 9��(��) �ٸ��ϴ�.
�׽�Ʈ 3
�Է°� ��	"1D2S0T"
��� ��	3
���� ��� ��	������ �ᱣ�� 0��(��) ��� 3��(��) �ٸ��ϴ�.
�׽�Ʈ 4
�Է°� ��	"1S*2T*3S"
��� ��	23
���� ��� ��	������ �ᱣ�� 0��(��) ��� 23��(��) �ٸ��ϴ�.
�׽�Ʈ 5
�Է°� ��	"1D#2S*3S"
��� ��	5
���� ��� ��	������ �ᱣ�� 0��(��) ��� 5��(��) �ٸ��ϴ�.
�׽�Ʈ 6
�Է°� ��	"1T2D3D#"
��� ��	-4
���� ��� ��	������ �ᱣ�� 0��(��) ��� -4��(��) �ٸ��ϴ�.
�׽�Ʈ 7
�Է°� ��	"1D2S3T*"
��� ��	59\


*/