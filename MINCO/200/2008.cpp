#include <cstdio>

int div(int val,int dep){
	if(val==1) {
		printf("%d ",val);
		return 0;
	}
	else {
		div(val/2,dep+1);
		printf("%d ",val);
	}
	return 0;
}

int main() {
	
	int a;
	scanf("%d",&a);

	div(a,0);


	return 0;
}
