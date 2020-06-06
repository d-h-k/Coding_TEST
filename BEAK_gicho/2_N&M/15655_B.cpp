#include<iostream>
#include<algorithm>

using namespace std;

//vector<int> a = {0,};
//vector<int> num= {0,};
int a[10];
int num[10];
int c[10];


const int DEBUG = 0;

bool comp (int a, int b) {
	return a<b;
}


void go(int index ,int start, int n, int m) {
	if(DEBUG) printf("index:%d ,start:%d ,n:%d ,m:%d\n",index,start,n,m);
	if(index == n) {
		for(int i=0 ; i<m ; i++) {
			printf("%d ",a[i]);
		}
		puts("");
		return;
	}
	else {
		for(int i=start; i<n ; i++) {
			
			a[index] = num[i];
			go(index+1,start+1,n,m);
			
		}
	}
}



int main(int argc, char** argv)
{
	int M,N;

	//freopen(".\testdata\14500_B.txt", "r", stdin);
	scanf("%d %d",&N,&M);
	for(int i=0 ; i<N ; i++) {
		scanf("%d",&num[i]);
	}
	
	sort(num.begin(),num.begin()+N);
	for(int i=0 ; i<N ; i++) {
		if(1) printf("%d\n",num[i]);
	}
	go(0,1,N,M);
	
	
	return 0;//
}


