#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

//making insert data
int main() {
	srand(time(NULL));
	freopen("random_input.txt", "w", stdout);
	int T = rand() % 10 + 1;
	printf("%d\n", T);
	
	// make Test case numberof T
	for(int test_case = 0; test_case < T; test_case++) {
		int N = rand() % 100 + 1;
		printf("%d\n",N);
		for( int i=0 ; i<N ; i++) {
			printf("%d ", rand() % (101));
		}
		printf("\n");
	}
	return 0;
}
