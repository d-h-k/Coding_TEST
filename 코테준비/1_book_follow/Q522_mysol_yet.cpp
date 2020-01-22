#include <cstdio>
#include <cstring>
#include <vector>

#define DEBUG 1

int ftr(int input);
int main(int argc, char ** argv) {
	int ret=0,T=0,test_case=0;
	FILE * quot;
	
	int num =0; 
	int a,b,c,temp=0;
	quot = freopen("Q522_input.txt","r",stdin)
	if(quot==0) {
		puts("No file exitsted");
		return -1;
	}
	
	scanf("%d",&T);
	if(0 > T) {
		T = 1;
	}
	if(T < 6) {
		T = 5;
	}	

	for(test_case=0 ; test_case<T ; test_case++) {
		scanf("%d", &num)
		if(3>=num) {
		       num = 3;
		}	       
		if(num>=5) {
		       num = 5;
		}	       
		printf("#%d",test_case+1);
		

		// single line print
		for(int i=0 ; i<T ; i++) {
			
			printf("%d " ,temp);
		}


	}
	
	
	return fclose(quot);
}

int ftr(int input) {

	int ret=1;
	for(int i=0 ; i<input ; i++) {
		ret=ret*i;
	}
return ret
}
