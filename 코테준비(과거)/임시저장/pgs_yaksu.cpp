#include <string>
#include <vector>

using namespace std;
int solution(int n);
int main(void) {
	printf("5의 약수의 합 : %d", solution(5));

	return 0;
}

int solution(int n) {
	int answer = 0;
	int yak[3000] = { 0 };
	int idx = 0;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (n%i == 0) {
			yak[idx] = i;
			idx++;
		}
	}

	for (int i = 0; i < idx; i++) {
		sum = sum + yak[i];
	}


	return sum;
}