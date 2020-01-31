#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T=10,DEBUG=1;
	/*	*/
	freopen("input.txt", "r", stdin);
	
	for(test_case = 1; test_case <= T; ++test_case)
	{	
		int tc=0,M=0,N=0,answer=0;
		scanf("%d", &tc);
		scanf("%d %d", &M, &N);
		answer =0;
		answer= M;
		
		/////////////////////////////////////////////////////////////////////////////////////////////
		
		
		//printf("M:%d N:%d tc:%d\n",M,N,tc);
		
		for(int i=0 ; i<N-1 ; i++) {
			answer= answer*M;
		}
		
		printf("#%d %d\n",test_case,answer);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

