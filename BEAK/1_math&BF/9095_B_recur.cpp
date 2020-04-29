/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

void sol(int tar,int cur);
int ans=0;
int main(int argc, char** argv) {
	
	int N=0,goal;
	scanf("%d",&N);
	
	for(int i=0 ; i<N ; i++ ) {
		ans=0;
		scanf("%d",&goal);
		sol(goal,0);
		printf("%d\n",ans);	
	}
	
	return 0;//
}

void sol(int tar,int cur) {
	if(cur==tar) {
		ans++;
		return;	
	}
	else if(cur>tar) {
		return;
	}
	else if(cur<tar) {
		sol(tar,cur+1);
		sol(tar,cur+2);
		sol(tar,cur+3);
	}
	
}
