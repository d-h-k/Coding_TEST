#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
using namespace std;

//int diff_cal();
//vector<int> v;
vector<int> diff;
int v[10];
int len_v;
const int DEBUG = 0;

int main(int argc, char** argv)
{
	int num,maxinum=0;
	FILE * fp;
	
//	fp = freopen("./testdata/10819_B.txt","r",stdin);
//	if(DEBUG && (fp==0)) {
//		puts("NO FILE");
//		exit(1);		
//	}
	
	scanf("%d", &num);
	//
	//len_v=num;
	for(int i=0 ; i<num ; i++) {
		int temp;
		scanf("%d",&temp);
		v[i] = temp;
		//v.push_back(temp);
	}
	
	sort(&v[0], &v[0]+num);	
	
	if(DEBUG) {
		for(int i=0 ; i<num ; i++) {
			printf("%d ",v[i]);
		}
		puts("");
	}
	
	
	int temp=0, sum=0;
	maxinum=0;
	do{
		temp=0;sum=0;
		for(int i=0 ; i<num-1 ; i++) {
			
			temp = (v[i]-v[i+1]);	
			sum += abs(temp);	
			
		}
		maxinum=max(maxinum,sum);
	
	
	//printf("sun : %d, maxinum : %d \n",sum,maxinum);
	}while(next_permutation(&v[0],&v[0]+num));
	
	
	
	printf("%d\n",maxinum);
	return 0;//
}
