#include<iostream>
#include<algorithm>

using namespace std;
vector<int> a = {0,};
vector<int> num= {0,};
const int DEBUG = 1;
bool comp (int a, int b) {
	return a<b;
}

void go(int index, int start, int n, int m);

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
		if(DEBUG) printf("%d  ",num[i]);
	}
	go(0,1,N,M);
	
	
	return 0;//
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
