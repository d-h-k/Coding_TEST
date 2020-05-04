/*

1
1,2
1,2,3
1,2,3,4
1,2,3,4,5,
1,2,3,4,5,6
1,2,3,4,5,6,7
1,2,3,4,5,6,7,8

i:다음행(한칸 내려감)
j:옆에 (좌우)
d[i][j] 배열에서
d[i][j] = a[i-1][j-1] + a[i-1][j]
d[i][first=1] = d[i-1][first=1]
d[i][last=j] = d[i-1][last=j]


*/

#include <string>
#include <vector>
#include <cstdio>
using namespace std;

typedef long long int ll;
ll a[501][501]; 
ll d[501][501];

const int DEBUG = 1;


int main(int argc, char ** argv) {
	int n;
	ll maxi_num;
	//intsert data
	scanf("%d",&n);
	for(int i=0 ; i<n ; i++) {
		for(int j=0 ; j<=i ; j++) {
			scanf("%lld",&a[i+1][j+1]);
		}
	}
	
	//DEBUG : veri data
	if(DEBUG) {
		puts("=== input data ===");
		for(int i=0 ; i<n ; i++) {
			for(int j=0 ; j<=i ; j++) {
				printf("%lld ",a[i+1][j+1]);
			}
			puts("");
		}
	}
	
	
	//get DP answer map
	d[1][1] = a[1][1];
	for(int i=2 ; i<=n ; i++) {
		
		d[i][1] = d[i-1][1]+a[i][1];
		
		for(int j=2 ; j<=i ; j++) {
			d[i][j] = max(d[i-1][j-1],d[i-1][j]) + a[i][j];
		}
		
		d[i][i] = d[i-1][i-1]+a[i][i];
	}
	
	
	//DEBUG
	if(DEBUG) {
		puts("=== DP ===");
		for(int i=0 ; i<n ; i++) {
			for(int j=0 ; j<=i ; j++) {
				printf("%lld ",d[i+1][j+1]);
			}
			puts("");
		}
	}
	
	for(int k=0 ; k<n ; k++) {
		maxi_num = max(d[n][k],maxi_num);
	}
	
	
	printf("%lld\n",maxi_num);

	return 0;
}
