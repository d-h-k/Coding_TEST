#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <climits>

using namespace std;

int v[11][11];

const int DEBUG=1;

int main(int argc, char** argv)
{
	int num,sum=0;
	int m = INT_MAX;
	int A[11][11] = {0};
	int arr[10];//path? == arr/??
	
	scanf("%d",&num);
	for(int i=0; i<num ; i++) {
		for(int j=0 ; j<num ; j++) {
			scanf("%d",&A[i][j]);		
		}
	}
	for(int i=0 ; i<num ; i++) {
		//path.push_back(i+1);
		arr[i] = i+1;
	}
	
	do{
		
		
		// 1. 순열대로 순회하는 가격 구하기
		// 2. 순회 때리기
		// 3. 순회가 끝나면 값 출력하기 
		sum=0;
		bool flag = true;
		
		for(int i=0 ; i<num-1 ; i++ ) { 	
			if(A[arr[i]][arr[i+1]] == 0) {
				flag = false;
				break;
			}
			else {
				sum += A[arr[i]][arr[i+1]];
			}
		}
		
		if(flag && A[arr[num-1]][arr[0]] != 0) {
			sum += A[arr[num-1]][arr[0]];
			m = min(m,sum);
		}
	} while(next_permutation(arr,arr+num));
		
	printf("%d\n",m);
		
	return 0;//
}

/*
int sumv() {
	int len = path.size();
	int sum=0,a,b;
	for(int i=0 ; i<len ; i++) {
		a=path[i];
		b=path[i+1];
		sum += v[a][b];
	}
	
	return sum;
}*/
