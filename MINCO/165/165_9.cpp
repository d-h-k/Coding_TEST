#include <cstdio>

int main() {
	int a,b;
	char c;

	scanf("%d %d %c", &a, &b, &c);

	for(int i=0 ; i<a ; i++) {
		for(int j=0 ; j<b ; j++) {
			printf("%c",c);
		}
		puts("");
	}
	puts("");
	for(int i=0 ; i<a ; i++) {
		for(int j=0 ; j<b ; j++) {
			printf("%c",c);
		}
		puts("");
	}
	return 0;
}

