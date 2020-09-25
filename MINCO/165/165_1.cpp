#include <cstdio>

int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	for(int j=0 ; j<c ; j++) {

		for(int i=a ; i<=b ; i++) {
			printf("%d ",i);
		}
		puts("");
	}
	

	
	return 0;
}

