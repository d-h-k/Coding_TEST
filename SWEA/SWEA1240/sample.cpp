//https://flower0.tistory.com/m/148?category=675435
#include <iostream>
#include <string.h> // malloc
#include <string> // cin>>str

using namespace std;

int N, M; // N개의 줄, M개의 배열
int arr_useful[9] = { 0, }; // 1~8개

int code[10] = {0b00001101,0b00011001,0b00010011,0b00111101,0b00100011,  // 0~4
			    0b00110001,0b00101111,0b00111011,0b00110111,0b00001011}; // 5~9

int main(void) {

	int tc;
	freopen("input.txt", "r", stdin);
	cin >> tc;
	for (int i = 1; i <= tc; i++) {

		// 결과값
		int sum = 0;
		int sum_10 = 0;

		// 입력받기
		cin >> N >> M;
		string str;
		int checkdone = 0;
		int lastptr = 0;
		for (int r = 0; r < N; r++) {// row
			cin >> str;

			if (checkdone == 2) {  // 이미 암호 검사 끝냈음
				continue;
			}
			else if (checkdone == 0) {
				for (int c = M - 1; c >= 0; c--) { // colomn
					if (str[c] == '1') {  // 1. 가장 끝자리 1의 위치를 저장하기
						lastptr = c;
						checkdone = 1;
						break;
					}
				}
			}

			// 2. lastptr에서부터 7개씩 확인
			if (checkdone == 1) {
				int num_idx = 8;
				for (int c = lastptr; c >= 0; c = c - 7) {
					int num = 0;
					for (int k = 0; k < 7; k++) {
						num = num | ((str[c - k] - 48) << k); // 7개 칸 숫자를 합쳐서 하나로 만들기
					}
					// 3. 7개 숫자와 0~9 암호코드 비교해서 무슨 숫자인지 arr_useful 에 저장
					for (int code_num = 0; code_num < 10; code_num++) {
						if (num == code[code_num]) {
							arr_useful[num_idx] = code_num;
							num_idx--;
							break;
						}
					}
					if (num_idx == 0) {
						break;
					}
				}
				// 4. 정상코드인지 확인
				
				for (int k = 1; k <= 8; k++) {

					sum += arr_useful[k];
					if (k % 2 != 0) { // 홀수번호
						sum_10 += arr_useful[k] * 3;
					}
					else {
						sum_10 += arr_useful[k];
					}
				}

				checkdone = 2;
			}
		}
		// 출력
		if (sum_10 % 10 == 0) { // 10의 배수
			cout << "#" << i << ' ' << sum << endl;
		}
		else {
			cout << "#" << i << " 0" << endl;
		}

		// 초기화
		memset(arr_useful, 0, sizeof(arr_useful));
	}

	return 0;
}
