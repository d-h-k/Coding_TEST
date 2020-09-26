#include <cstdio>

int main() {
	
	char arr[2][7] = {"A79TKQ","MINCOD"};
	char *ans[20] = {"E존재","N없음"};
	char a,b;
	bool isfind_a = false, isfind_b = false;
	scanf("%c %c",&a,&b);
	//printf("%c %c ",a,b);
	for(int i=0 ; i<2 ; i++) {
		for(int j=0 ; j<6 ; j++) {
			if(arr[i][j] == a) {
				isfind_a = true;
				//puts("!!!");
			}

			if(arr[i][j] == b) {
				isfind_b = true;
				//puts("!!!");
			}
		}
	}

	if(isfind_a) {
		printf("%c : %s\n",a, ans[0]);
	}
	else {
		printf("%c : %s\n",a, ans[1]);
	}

	
	
	if(isfind_b) {
		printf("%c : %s\n",b, ans[0]);
	}
	else {
		printf("%c : %s\n",b, ans[1]);
	}


	return 0;
}

