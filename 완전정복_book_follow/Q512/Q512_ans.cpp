#include <cstdio>
#include <iostream>
#include <cstdlib>
#define debug 1

//why global?
long long A, B;
unsigned int T=0;

int main(int argc, char ** argv) {
	
	
	FILE * quot;
		
	quot = freopen("Q512_input.txt", "r", stdin);
	if( quot == 0 ) {
		puts("File no exist");
		exit(1);
	}
	
	scanf("%d",&T);
	
	for(int test_case = 1; test_case<=T ; test_case++)	 {
		scanf("%lld %lld", &A, &B);
		for (int i = 1; i<=22 ; i++) {
			A = A*2;
			B = B*3;
			if(A<B) {
				printf("#%d %d\n",test_case,i);
				break;
				}
			}
		}
	return 0;
	}
