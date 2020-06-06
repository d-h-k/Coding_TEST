/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include <algorithm>
using namespace std;
const int DEBUG = 1;
int main(int argc, char** argv)
{
	int len;
	int snum[13]={0};
	vector <bool> select;
	//bool select[13]={false};
	scanf("%d",&len);
	for(int i=0 ; i<len ; i++) {
		scanf("%d",&snum[i]);
	}
	for(int i=0 ; i<6 ; i++) {
		//select[i]=true;
		select.push_back(true);
	}
	for(int i=0; i<len-6 ; i++) {
		select.push_back(false);
	}
	
	
	do{
		for(int i=0 ; i<len ; i++) {
			if(select[i]) {
				printf("%d ",snum[i]);
			}	
		}
		
	}while(next_permutation(select.begin(),select.end()) );
	
	
	
	if(DEBUG) {
		printf("len:%d =>> ",len);
		for(int i=0 ; i<len ; i++) {
			printf("%d ",snum[i]);	
		}
	}
	
	
	

	

	return 0;//
}

