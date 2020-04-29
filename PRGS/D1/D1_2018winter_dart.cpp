#include <string>

using namespace std;
int dart[4] = { 0, };
int d_idx = 0;

int solution(string dartResult) {
	int answer = 0;
	int size = dartResult.size();

	for (int i = 0; i < size; i++) {
		
		int num = dartResult[i] - '0';
		//printf("d_idx:%d\n",d_idx);

		if (dartResult[i] == 'S') {

		}
		else if (dartResult[i] == 'D') {
			dart[d_idx] = dart[d_idx] * dart[d_idx];
		}
		else if (dartResult[i] == 'T') {
			dart[d_idx] = dart[d_idx] * dart[d_idx] * dart[d_idx];
		}
		else if (dartResult[i] == '*') {
			puts("           * ");
			//printf("****!! dart[i]:%d -> ", dart[i]);
			dart[d_idx] = dart[d_idx] * 2;
			//printf("dart[i]:%d \n", dart[d_idx]);
			if (d_idx != 1) {
				dart[d_idx - 1] = dart[d_idx - 1] * 2;
			}
			else {}
		}
		else if (dartResult[i] == '#') {//sdfsdf
			puts("           # ");
			dart[d_idx] = dart[d_idx] * (-1);
		}
		else {
			puts("          01234567879");
			d_idx++;
			//printf("@@@@idx++!  ->>  i:%d d_idx:%d\n", i, d_idx);
			if (dartResult[i+1] == '0') {//case 10
				dart[d_idx] = 10;
				i = i + 1;
				puts("        case 10");
			}
			else {
				dart[d_idx] = (int)(dartResult[i] - '0');
			}
		}
		printf("i:%d, cur:%c, d_idx:%d, dart[%d]:%d\n", i, dartResult[i], d_idx, d_idx, dart[d_idx]);

	}

	for (int i = 1; i <= 3; i++) {
		answer += dart[i];
		printf("dart[%d]:%d\n", i, dart[i]);
	}


	return answer;

}

int main() {
	string tc = "1D2S0T";
	int ans = solution(tc);

	printf("ANSWER : %d Right:%d", ans,(int)3);

}