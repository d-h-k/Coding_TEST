#include <iostream>

using namespace std;
int main() {
	
	int pibo[200] = {0,1,1};
	int n;
	cin >> n;
	for(int i=2 ; i<n ; i++) {
		pibo[i+1] = pibo[i] + pibo[i-1];
	}
	
	cout << pibo[n];
	return 0;
}
	
	
