#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int sumv();
//vector<vector<int> > v(11, vector<int>(11,0));
int v[11][11];
const int DEBUG=1;
vector <int> path;
int main(int argc, char** argv)
{
	int num,temp=0,min=0;
	
	
	scanf("%d",&num);
	for(int i=0; i<num ; i++) {
		for(int j=0 ; j<num ; j++) {
			scanf("%d",&v[i][j]);
		}
	}
	for(int i=0 ; i<num ; i++) {
		path.push_back(i+1);
	}
	
	do {
		// 1. 순열대로 순회하는 가격 구하기
		// 2. 순회 때리기
		// 3. 순회가 끝나면 값 출력하기 
		temp=0,min=999999;
		temp=sumv();//path의 경로대로 순회하는 가격 리턴 
		
		if(min>temp) {
			min=temp;
		}
		
	}while( next_permutation(path.begin(),path.end()) );

	printf("%d",min);	
	
	return 0;//
}

int sumv() {
	int len = path.size();
	int sum=0,a,b;
	for(int i=0 ; i<len ; i++) {
		a=path[i];
		b=path[i+1];
		sum += v[a][b];
		if(DEBUG) {
			printf("v[a][b]:%d \t",v[a][b]);
		}
	}
	if(DEBUG) {
		printf("sum:%d\n",sum);
	}
	
	return sum;
}
