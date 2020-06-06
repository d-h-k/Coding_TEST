#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long d[91][2];
const int DEBUG = 1;

void get_tabel(void) {
	d[0][0]=d[0][1]=0;
	d[1][0]=0;
	d[1][1]=1;
	
	for(int i=2 ; i<=90 ; i++) {
		d[i][0] = d[i-1][0] + d[i-1][1];
		d[i][1] = d[i-1][0];
	}
}


//just pibo nazi
int main(void) {
	int num=0;
  long long answer = 0;
  
	
	//printf("Hello world!");
	get_tabel();
	scanf("%d",&num);
	
	if(num>91) {return 0;}
	
	answer = d[num][0] + d[num][1];
	
  
  printf("%lld\n",answer);
  
  if(DEBUG) {
  	for(int i=0 ; i<=90 ; i++) {
  		printf("%d : %lld   %lld\n",i,d[i][0],d[i][1]);
  	}
	}
    return 0;
}

