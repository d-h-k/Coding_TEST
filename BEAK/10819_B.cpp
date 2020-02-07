#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
using namespace std;

int diff_cal();
//vector<int> v;
int v[10];
int len_v;
const int DEBUG = 1;

int main(int argc, char** argv)
{
	int num,max=0;
	FILE * fp;
	
	fp = freopen("./testdata/10819_B.txt","r",stdin);
	if(DEBUG && (fp==0)) {
		puts("NO FILE");
		exit(1);		
	}
	scanf("%d", &num);
	//
	len_v=num;
	for(int i=0 ; i<=num ; i++) {
			int temp;
			scanf("%d",&temp);
			v[i] = temp;
			//v.push_back(temp);
	}
	
	if(DEBUG) {
		for(int i=0 ; i<num ; i++) {
			printf("%d ",v[i]);
		}
		puts("");
	}
	
	do{
		int temp = diff_cal();
		if(temp > max) {
			max = temp;
		}
	}while(next_permutation(&v[0],&v[len_v+2]));
	
	
	printf("%d\n",max);
	return 0;//
}


int diff_cal() {
	int ans=0,len=0;
	int mod;
	len=len_v;
	for(int i=0 ; i<=len ; i=i+2) {
		mod = v[i]-v[i+1];
		ans+= abs(mod);
		if(DEBUG) {
			//printf("%d, %d, ",v[i],v[i+1]);
			//printf("i:%d, ans:%d mod:%d\n",i,ans,mod);
		}
	}
	//puts("");
	//printf("\n===ans:%d\n",ans);
	return ans;
}
















/*

	int num;
	scanf("%d",&num);
	
	for(int i=0 ; i<num ; i++) {
		v.push_back(i+1);
	}
	
	do {
		for(int i=0 ; i<num ; i++) {
			printf("%d ",v[i]);
		}
		puts("");
	}while(next_permutation(v.begin(),v.end()));
	


*/
