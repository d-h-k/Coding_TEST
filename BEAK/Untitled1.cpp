#include <iostream>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	vector<int> v;
	
	for(int i=0 ; i<7 ; i++) {
		v.push_back(i+1);
	}
	do{
		//print()
		
		for(int i=0 ; i<7 ; i++) {
			printf("%d",v[i]);
		}
		puts("");
		
	
	}while(next_permutation(v.begin(),v.end()));
	
	
	return 0;
}
