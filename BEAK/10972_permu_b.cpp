/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include <vector>
#include <algorithm>


using namespace std;
bool next_pmt();

int map[10000];

int main(int argc, char** argv)
{
	
	int num;
	scanf("%d",&num);
	
	for(int i=1 ; i<=num ; i++) {
		scanf("%d",&map[i]);
	}
	
	if(next_permutation(&map[1],&map[num+1])) {
		for(int i=1 ; i<=num ; i++) {
			printf("%d ",map[i]);	
		}
	}
	else {
		printf("%d",-1);
	}
	
	return 0;//
}

