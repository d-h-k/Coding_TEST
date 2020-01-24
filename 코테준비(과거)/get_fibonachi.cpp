#include <cstdio>
#include <cstring>
int fibonacci(int n) ;

int main(void) {
	for(int i=1 ; i<=10 ; i++) {
		printf("form ~n fibo's num is :%d\n",fibonacci(i));
	}
	return 0;
}

int fibonacci(int n) {
	if(n==0) {
		return 0;
	}
	else if(n==1) {
		return 1;
	}
	else {
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
