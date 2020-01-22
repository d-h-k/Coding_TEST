#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T,N,temp=0,fb=0,ans=0;
	/*	*/
	freopen("sample_input.txt", "r", stdin);
	//cin>>T;
	scanf("%d",&T);
	//printf("T:%d",T);
	/*	*/
	for(test_case = 1; test_case <= T; ++test_case)
	{

		/////////////////////////////////////////////////////////////////////////////////////////////
		/**/
		temp=0,fb=0,ans=0;
		
		scanf("%d",&N);
		for(int i=0; i<N ; i++) {
			scanf("%d",&temp);
			if(fb < temp) {
				if(0) {
					printf("fb:%d, temp:%d\n",fb,temp);
				}
				fb=temp;
				ans++;
			}
			else {
				fb=temp;
			}
		}
		if(0) {
			printf("temp:%d,fb:%d,N:%d\n",temp,fb,N);
		}
		printf("#%d %d\n",test_case, ans);
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
