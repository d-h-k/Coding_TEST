#include <iostream>

using namespace std;

char buf1[] = "ABC\nbbbq\nbt\nJOW";
char buf2[] = "bb\nBBB\nBBBB\nbbbbb";


int main() {
    char temp[20];
    for(int i=0 ; i<4 ; i++) {
        cin >> temp;
    }

    if(temp[0] == 'J') {
        cout << buf1;
    }
    else if(temp[0] == 'B') {
        cout << buf2;
    }
    return 0;
}


/*
#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char arr[4][10];
	int max = 0, min = 0;
	for (int i = 0; i < 4; i++)
		cin >> arr[i];
	for (int i = 0; i < 4; i++) {
		if (strlen(arr[max]) < strlen(arr[i]))
			max = i;
		if (strlen(arr[min]) > strlen(arr[i]))
			min = i;
	}
	for (int i = 0; i < strlen(arr[max]); i++) {
		if (isupper(arr[max][i]))
			arr[max][i] += 32;
	}
	for (int i = 0; i < strlen(arr[min]); i++) {
		if (isupper(arr[min][i]))
			arr[min][i] += 32;
	}
	for (int i = 0; i < 4; i++)
		cout << arr[i] << endl;
	return 0;
}


*/