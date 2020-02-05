#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> v;
int main(int argc, char** argv)
{
	int num;
	scanf("%d",&num);
	
	for(int i=0 ; i<num ; i++) {
		v.push_back(i+1);
	}
	
	do {
		for(int i=0 ; i<num ; i++) {
			printf("%d ",v[i]);
		}
		puts("");
	}while(next_permutation(v.begin(),v.end()));
	
	return 0;//
}
