#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int map[16];
int maxi=0;
const int DEBUG = 0;
int N,temp,sum;


int main(int argc, char ** argv) {
	
	scanf("%d",&N);
	for(int i=0 ; i<N ; i++) {//y,i
		scanf("%d ",&map[i]);
	}
	
	sort(map,map+N);
	
	while( next_permutation (map,map+N) ) {
		sum=0;
		for(int i=0 ; i <N/2 ; i+2) {
			temp = map[i]-map[i+1];
			if(temp < 0 ) {
				temp = temp * -1;
			}
			sum += temp;
		}
		
		if(sum>maxi) {
			maxi=sum;
		}
	}
	
	return 0;	
}
