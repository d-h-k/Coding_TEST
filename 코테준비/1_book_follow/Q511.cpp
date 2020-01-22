#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
	FILE *quot;
	int min=0, max=0, arg=0, sum=0;
	int score[6];
	int i=0,T=0;
	int testcase=0;
		
	quot = freopen("Q511_input.txt", "r", stdin) ;
	if(quot == 0) {
		//puts("File no found...");
		exit(1);
	}
	//freopen(&quot;input.txt&quot; , &quot;r&quot; , stdin);
	//read num of testcase
	//puts("sd@@@");
	//cin>>T;
	scanf("%d",&T);
	//printf("T:%d, quot:%d\n",T,quot);
	for(testcase=0 ; testcase<T ; testcase++) {
		//sum=0;
		
		//read one row
		for(i=0 ; i<6 ; i++) {
			scanf("%d", &score[i]);
			//printf("score[%d] : %d\t",i,score[i]);
		}
				
		max=0;
		min=100;
		//pick min, max 
		for(i=0; i<6 ; i++) {
			
			if(min > score[i]) {
				min = score[i];
			}
			
			if(max < score[i]) {
				max = score[i];
			}
			
			//get sum
			sum = score[i]+sum;
		}
		
		//get avrage of others
		sum = sum - min - max;
		arg = sum/4;
		
		//test
		//printf("#%d, arg=%d, sum=%d\r\n",testcase+1,arg,sum);
		//printf("min:%d, max:%d\t",min,max);
		//return case and num
		printf("#%d arg=%d\n",testcase+1,arg);
		sum=0;
	}
		
	return 0;
}
