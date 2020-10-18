#include <iostream>
using namespace std;

int main() {
    cout << "B A H I"<<endl;

    return 0;
}

/*

#include<iostream>
using namespace std;
int main() {
	char hero[4] = { 'B', 'I', 'A', 'H' };
	int head = 0, tail = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			while (1) {
				tail++;
				tail = tail % 4;
				if (hero[tail] != 0)
					break;
			}
		}
		cout << hero[tail] << ' ';
		hero[tail++] = 0;
	}
	return 0;
}

*/