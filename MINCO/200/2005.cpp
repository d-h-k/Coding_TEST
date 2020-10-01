#include <cstdio>
#include <cstring>

char arr[5];


int recur(int dep){
	
	if(dep == 5){
		puts("");
		return 0;
	}
	else{
		printf("%c",arr[dep]);
		recur(dep+1);
		printf("%c",arr[dep]);
	}
	
	return 0;
}



int main() {


	for(int i=0 ; i<5 ; i++) { 
		scanf(" %c",&arr[i]);
	}
	recur(0);
	return 0;
}

