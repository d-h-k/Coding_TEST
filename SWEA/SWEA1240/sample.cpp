//https://flower0.tistory.com/m/148?category=675435
#include <iostream>
#include <string.h> // malloc
#include <string> // cin>>str

using namespace std;

int N, M; // N���� ��, M���� �迭
int arr_useful[9] = { 0, }; // 1~8��

int code[10] = {0b00001101,0b00011001,0b00010011,0b00111101,0b00100011,  // 0~4
			    0b00110001,0b00101111,0b00111011,0b00110111,0b00001011}; // 5~9

int main(void) {

	int tc;
	freopen("input.txt", "r", stdin);
	cin >> tc;
	for (int i = 1; i <= tc; i++) {

		// �����
		int sum = 0;
		int sum_10 = 0;

		// �Է¹ޱ�
		cin >> N >> M;
		string str;
		int checkdone = 0;
		int lastptr = 0;
		for (int r = 0; r < N; r++) {// row
			cin >> str;

			if (checkdone == 2) {  // �̹� ��ȣ �˻� ������
				continue;
			}
			else if (checkdone == 0) {
				for (int c = M - 1; c >= 0; c--) { // colomn
					if (str[c] == '1') {  // 1. ���� ���ڸ� 1�� ��ġ�� �����ϱ�
						lastptr = c;
						checkdone = 1;
						break;
					}
				}
			}

			// 2. lastptr�������� 7���� Ȯ��
			if (checkdone == 1) {
				int num_idx = 8;
				for (int c = lastptr; c >= 0; c = c - 7) {
					int num = 0;
					for (int k = 0; k < 7; k++) {
						num = num | ((str[c - k] - 48) << k); // 7�� ĭ ���ڸ� ���ļ� �ϳ��� �����
					}
					// 3. 7�� ���ڿ� 0~9 ��ȣ�ڵ� ���ؼ� ���� �������� arr_useful �� ����
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
				// 4. �����ڵ����� Ȯ��
				
				for (int k = 1; k <= 8; k++) {

					sum += arr_useful[k];
					if (k % 2 != 0) { // Ȧ����ȣ
						sum_10 += arr_useful[k] * 3;
					}
					else {
						sum_10 += arr_useful[k];
					}
				}

				checkdone = 2;
			}
		}
		// ���
		if (sum_10 % 10 == 0) { // 10�� ���
			cout << "#" << i << ' ' << sum << endl;
		}
		else {
			cout << "#" << i << " 0" << endl;
		}

		// �ʱ�ȭ
		memset(arr_useful, 0, sizeof(arr_useful));
	}

	return 0;
}
