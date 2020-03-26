/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<algorithm>

using namespace std;
int a[10] = {0};
int num[10] = {0};
int c[10] = {0};

void go(int index , int n, int m);

int main(int argc, char** argv)
{
	int M,N;

	//freopen(".\testdata\14500_B.txt", "r", stdin);
	scanf("%d %d",&N,&M);
	for(int i=0 ; i<N ; i++) {
		scanf("%d",&num[i+1]);
	}
	sort(num+1,num+N+1);
	
	/*
	puts("");
	for(int i=0 ; i<N ; i++) {
		printf("%d ",num[i+1]);
	}
	puts("");
	*/
	//1~N, in choice <M>, (M<N)
	go(0,N,M);
	
	
	return 0;//
}


void go(int index , int n, int m) {//index ?? mean 
	if(index == m) {
		for(int i=0 ; i<m ; i++) {
			printf("%d ",a[i]);
		}
		puts("");
		return;
	}
	else {
		for(int i=1; i<=n ; i++) {
			if(c[i]) {
				continue;
			}
			c[i] = true;//c is i, a index why???
			a[index] = num[i];
			go(index+1,n,m);
			c[i] = false;
		}//how to forbied JUNG-BOK ???
	}
}
