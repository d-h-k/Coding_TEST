#include <cstdio>
#include <cstring>

int recq(int start, int end,int dep) {
	if(dep >= end){
		printf("%d ",dep);
		return 0;
	}
	else {
		printf("%d ",dep);
		recq(start,end,dep+1);
		printf("%d ",dep);
	}

}




int main() {


	int a,b;
	scanf(" %d %d",&a,&b);

	recq(a,b,a);

	return 0;
}
