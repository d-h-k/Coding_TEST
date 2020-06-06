/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
//#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

vector<int> lotto;

void solve(vector <int> &a, int index, int cnt ) {
	
	if(cnt==6) {
		for(int num : lotto) {
			printf("%d ",num);
		}
		printf("\n");
		return;
	}
	
	int n=a.size();
	if(n==index) return;
	
	lotto.push_back(a[index]);
	solve(a,index+1,cnt+1);
	
	lotto.pop_back();
	solve(a,index+1,cnt);
	return;
}

int main(int argc, char** argv)
{
	while(1) {
		
		int len,temp;
		scanf("%d",&len);
		if(len==0) {
			break;
		}
		vector <int> a(len);
	
		for(int i=0 ; i<len ; i++) {
			scanf("%d",&temp);
			a[i] = (temp);
		}
		
		solve(a,0,0);
		puts("");
	}
	
	return 0;
}


