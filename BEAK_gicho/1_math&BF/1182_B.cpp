#include <iostream>

using namespace std;

int S=0,N=0,ans=0;

int map[20] = {0,};

void sum_subset(int dep, int sum) {
	if(dep==N) {
		if(sum==S) {
			ans += 1;
		}
		return;
	}
	else{
		/*
		for(int i=0 ; i<N ; i++) {
			if(chk[i]==false) {
				chk[i]=true;
				sum_subset(dep-1,sum+map[i]);
				chk[i]=false;	
			}
		}
		*/
		sum_subset(dep+1,sum+map[dep]);//use case
		sum_subset(dep+1,sum);//not use
		
	}
}

int main(int argc, char** argv)
{

	scanf("%d %d",&N, &S);
	for(int i=0 ; i<N ; i++) {
		scanf("%d",&map[i]);
	}
	
	sum_subset(0,0);
	if(S==0) {
		ans--;
	}
	
	printf("%d\n",ans);
	
	return 0;//
}
