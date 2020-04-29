#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
using namespace std;

//int diff_cal();
vector<int> v;
vector<int> diff;
//int v[10];
int len_v;
const int DEBUG = 0;

int main(int argc, char** argv)
{
	int num,ans=0;
	scanf("%d", &num);
	
	for(int i=0 ; i<num ; i++) {
		int temp;
		scanf("%d",&temp);
		//v[i] = temp;
		v.push_back(temp);
	}
	
	sort(&v[0], &v[0]+num);	
	
	if(DEBUG) {
		for(int i=0 ; i<num ; i++) {
			printf("%d ",v[i]);
		}
		puts("");
	}
	
	
	ans=0;
	do{
		int temp=0, sum=0;
	
		for(int i=0 ; i<num-1 ; i++) {
			
			temp = (v[i]-v[i+1]);
			sum += abs(temp);
		}
		
		if(ans<sum) {
			ans=sum;
		}
		
		
	}while(next_permutation(&v[0],&v[0]+num));
	
	
	
	printf("%d\n",ans);
	return 0;//
}

