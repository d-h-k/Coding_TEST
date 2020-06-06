/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

int a[10] = {0,};
bool c[10];

void go(int index ,int start, int n, int m) {
/*

자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램을 작성하시오.

1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열
고른 수열은 오름차순이어야 한다.

*/
	if(index == m) {
		//깊이가 m 이라면 : 출력한다 
		for(int i=0 ; i<m ; i++) {
			cout<< a[i];
			if(i != m-1) cout<< ' ';
		}
		cout<< '\n';
	}
	else {//깊이가 m까지 도달하지 못했다면 
		for(int i=start ; i<=n ; i++) {
			c[i] = true;
			a[index] = i;
			go(index+1,i+1,n,m);// 재귀호출 
			c[i] = false;
		}
	}
}



int main(int argc, char** argv)
{
	int M,N;
	scanf("%d %d",&M,&N);
	go(0,1,M,N);	
	return 0;//
}
