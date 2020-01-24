#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main() {
	printf("hello world!!\t");
	cout<<"hi..?"<<endl;
	srand(time(NULL));
	int i=0, j=0;//Loop iter
	int data = rand();
	int start = 1;// random num's min 
	int end = 100;// random num's max
	int N =0;
	
	puts("my code random num : ");
	for(j=0; j<10 ; j++) {
		for(i=0; i<10 ; i++) {
			data = rand();
			N = ((data+start)%end) + start;
			printf("%d\t",N);
		}
		puts("");
	}
	puts("book's code");
	for(j=0 ; j<10 ; j++ ) {
		for(i=0 ; i<10 ; i++) {
			data = rand();
			N = (data % (end - start + 1)) + start;
			printf("%d\t",N);
		}
		puts("");
	}
}
