#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }
    vector<int> b(n);
    for (int i=0; i<n/2; i++) {
        b[i] = 1;
    }
    sort(b.begin(), b.end());
    int ans = 2147483647;
    do {
        vector<int> first, second;
     		for()
     	}


	//print()
	return 0;
}
