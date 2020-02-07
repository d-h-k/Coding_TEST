#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int sumv();
//vector<vector<int> > v(11, vector<int>(11,0));
int a[20][20];
const int DEBUG=1;

int main(int argc, char** argv)
{
	int num,temp=0,min=0;
	
	FILE * fp;
	
	fp = freopen("./testdata/10971_B.txt","r",stdin);
	if(DEBUG && (fp==0)) {
		puts("NO FILE");
		exit(1);		
	}
	
	scanf("%d",&num);
	for(int i=0; i<num ; i++) {
		for(int j=0 ; j<num ; j++) {
			scanf("%d",&a[i][j]);		
		}
	}
	
	vector<int> d(num);
	for(int i=0 ; i<num ; i++) {
		d.push_back(i);
	}
	
	min=INT_MAX;
	
	do {
		bool ok = true;
		int sum = 0;
		for( int i=0 ; i<num-1 ; i++) {
			if(a[d[i]][d[i+1]] == 0) ok=false;
			else sum +=a[d[i]][d[i+1]];
		}
		if(ok && a[d[num-1]][d[0]] != 0) {
			sum += a[d[num-1]][d[0]];
			if(min >sum) min=sum;
		}
	}while( next_permutation(d.begin()+1,d.end()) );

	printf("%d",min);	
	
	return 0;//
}

