/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include <vector>
#include <algorithm>


using namespace std;
bool next_pmt();

int map[10000];
bool next_pmt(int *a,int n);

int main(int argc, char** argv)
{
	
	int num;
	scanf("%d",&num);
	
	for(int i=0 ; i<num ; i++) {
		scanf("%d",&map[i]);
	}
	
	if(next_pmt(map,num)) {
		for(int i=0 ; i<num ; i++) {
			printf("%d ",map[i]);	
		}
	}
	else {
		printf("%d",-1);
	}
	
	return 0;//
}

bool next_pmt(int *a,int n) {
	int i=n-1;
	while(i>0 && a[i-1] <= a[i]) {
		i -= 1;
	}
	if(i<=0) {
		return false;
	}
	int j=n-1;
	while(a[j] >= a[i-1]) {//
		j-=1;
	}
	swap(a[i-1],a[j]);
	j=n-1;
	while(i<j) {
		swap(a[i], a[j]);
		i+=1;
		j-=1;
	}
	int aa=3,bb=1;
	
	return true;
}
