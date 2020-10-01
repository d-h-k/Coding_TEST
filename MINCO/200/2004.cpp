#include <cstdio>
#include <cstring>

int abc(int val, int dep) {
	if(dep == 3) {
		printf("%d ",val);
		return val;
	}
	else {
		abc(val+2,dep+1);
		printf("%d ",val);
	} 
}

int main() {
	int a;
	scanf(" %d",&a);
	
	abc(a,0);

	return 0;
}
