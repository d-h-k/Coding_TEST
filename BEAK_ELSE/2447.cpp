#include <iostream>
#include <cstring>

using namespace std;

char map[2188][2188];
int n;

void _run(int num, int x, int y) {
	if(num == 1) {
		map[x][y] = '*';
		return;
	}
	else { 
	int div= num/3;
		for(int i=0 ; i<3 ; i++) {
			for(int j=0 ; j<3 ; j++) {
				if(i==1 && j==1) {
					continue;
				}
				//recur
				_run(div,x+(div*i), y+(div*j));
				
			}
		}
	}
	return;
}


int main() {
	memset(map,0,sizeof(map));
	cin >> n;
	
	_run(n,0,0);
	
	
	
	for(int i=0 ; i<n ; i++) {
		for(int j=0 ; j<n ; j++ ) {
			cout << map[i][j];
		}
		cout << endl;
	}
	return 0;
}
	
	
