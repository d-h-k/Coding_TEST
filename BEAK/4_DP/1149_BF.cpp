#include <iostream>
#include <string>
#include <vector>

using namespace std;
int a[1001][4];// non-R-G-B
int answer=999999;
const int DEBUG  = 1;

void solution() {
  	//bf=2^n, 2^1000이 최악의 빅오인데 에바참치 GG 
}


int main(void) {
	int n;
	scanf("%d",&n);
	for(int i=0; i<n ; i++) {
		scanf("%d %d %d",&a[i][1],&a[i][2],&a[i][3]);
	}
	
	if(DEBUG) {
		printf("n:%d\n",n);
		for(int i=0; i<n ; i++) {
			printf("%d %d %d\n",a[i][1],a[i][2],a[i][3]);
		}
	}
	
	//solver
	solution();
	
	
	printf("%d\n",answer);
  return 0;
}

