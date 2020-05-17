
#include <iostream>
#include <cstdio>
using namespace std;
int dnc[16][2];//dnc[n][0] = days, dnc[n][1] = cost;
int maxi=0;
int sum=0;
//bool chk[16];
const int DEBUG = 0;
int N;



void get_max(int day, int pay) {
	if(DEBUG) {
		printf("day:%d , pay:%d\n",day, pay);
	}
	if(N == day) {
		sum=0;
		
		if(maxi<pay) {
			maxi=pay;
		}
		else {
		}
		return;
	}
	else if( N <= day) {
		//over day, drop!
		return;
	}
	
	else {
		
		//do this job
		get_max(day+dnc[day][0],pay+dnc[day][1]);
		
		//do not this job
		get_max(day+1,pay);
		
		
	}

	
	return;
}


int main(int argc, char** argv)
{
	int days=0;
	
	//1.insert data
	scanf("%d",&days);
	N = days;
	for(int i=0 ; i<days ; i++) {
		scanf("%d %d",&dnc[i][0],&dnc[i][1]);
		//chk[i] = false;
	}
	
	
	
	//1.insert data vaild
	if(DEBUG) {	
	puts("inserted data");
		for(int i=0 ; i<days ; i++) {
			printf("%d %d \n",dnc[i][0],dnc[i][1]);
		}
		puts("");
	}
	
	get_max(0,0);
	
	printf("%d\n",maxi);

	
	return 0;//
}


