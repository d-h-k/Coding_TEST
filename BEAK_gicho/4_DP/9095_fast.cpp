#include <iostream>
using namespace std;
unsigned int d[1000001]={0,};
int main(void)
{
	int n,T;
	
	d[0]=1;
    d[1]=1;
    d[2]=2;
    d[3]=4;
    d[4]=7;
    
    // 540ms ->> 532ms 8ms ++(3~5%)
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	
	cin >> T;
	for(int i=0 ; i<T ; i++) {
		cin >> n;
		n=1000001;
		for(int i=5 ; i<=n ; i++) {
			d[i] = (d[i-1] + d[i-2] + d[i-3])%1000000009;
		//
		printf("%d,",d[i]);	
		}
		printf("%d\n",d[n]);
	}
	
	return 0;	
}


