/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;
int a[10] = {0};
void go(int index ,int start, int n, int m) {
	if(index == m) {
		//printf
		//printf()
		for(int i=0 ; i<index ; i++) {
			printf("%d ",a[i]);
		}
		puts("");
		return;
	}
	else {
		for(int i=start; i<=n ; i++) {
			
			a[index] = i;
			go(index+1,i,n,m);
		}
	}
}
int main(int argc, char** argv)
{
	int M,N;

	//freopen(".\testdata\14500_B.txt", "r", stdin);
	scanf("%d %d",&M,&N);

	//1~N, in choice <M>, (M<N)
	go(0,1,M,N);
	
	
	return 0;//
}
