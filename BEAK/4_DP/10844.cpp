#include <cstdio>
#include <cstring>
//d[length][end-num]
int d[102][10];
const int DEBUG = 1;
const int mod = 1000000000;

int solve(int len) {
	int ans = 0;
	for(int i=0 ; i<=9 ; i++) {
		ans = (ans + d[len][i])%mod;
	}
		
	return ans;
}

void rainbow_table(void) {
	
	for(int i=1 ; i<=9 ; i++) {
		d[1][i] = 1;
	}
	d[1][0]=0;
	
	for(int i=2 ; i<=100 ; i++ ) {
		
		for(int j=1 ; j<=8 ; j++) {
			d[i][j] = (d[i-1][j+1]+d[i-1][j-1])%mod;
		}
		d[i][0] = d[i-1][1];//~[0]
		d[i][9] = d[i-1][8];//~[9]
	}	
	
	return;
}

int main(int argc, char ** argv) {
	
	int num;
	memset(d,0,sizeof(d));
	rainbow_table();
	scanf("%d",&num);
	printf("%d\n",solve(num));
	
	if(DEBUG) {
		for(int i=0 ; i<=100 ; i++) {
			for(int j=0 ; j<=9 ; j++) {
				printf("%d ",d[i][j]);
			}
			puts("");
		}
	}
	
	return 1;
}
