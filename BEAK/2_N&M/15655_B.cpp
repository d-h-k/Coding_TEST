
#include<iostream>
#include<algorithm>

using namespace std;
int a[10] = {0};
int num[10] = {0};

void go(int index, int start, int n, int m);

int main(int argc, char** argv)
{
	int M,N;

	//freopen(".\testdata\14500_B.txt", "r", stdin);
	scanf("%d %d",&N,&M);
	for(int i=0 ; i<N ; i++) {
		scanf("%d",&num[i+1]);
	}
	sort(num+1,num+N+1);
	
	go(0,1,N,M);
	
	
	return 0;//
}


void go(int index ,int start, int n, int m) {
	if(index == m) {
		for(int i=0 ; i<m ; i++) {
			printf("%d ",a[i]);
		}
		puts("");
		return;
	}
	else {
		for(int i=start; i<=n ; i++) {
			
			a[index] = num[i];
			go(index+1,start+1,n,m);
			
		}
	}
}
