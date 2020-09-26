#include <cstdio>

int main() {
	
	char arr[2][6] = {"A79TKQ","MINCOD"}
	char *ans[20] = {"존재","없음"};
	char a,b;
	bool isfind_a=false, isfind_b=false;
	scanf(" %c %c",&a,&b);

	for(int i=0 ; i<2 ; i++) {
		for(int j=0 ; j<6 ; j++) {
			
		}
	}

	if(isfind_a) {
		printf("%c : %s\n",a, ans[1]);
	}
	else {
		printf("%c : %s\n",a, ans[0]);
	}

	
	
	if(isfind_a) {
		printf("%c : %s\n",b, ans[1]);
	}
	else {
		printf("%c : %s\n",b, ans[0]);
	}


	return 0;
}

