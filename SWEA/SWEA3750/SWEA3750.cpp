#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	long long test_case;
	long long T=0,DEBUG=1;
	/*	*/
	//freopen("sample_input.txt", "r", stdin);
	scanf("%lld", &T);
	for(test_case = 1; test_case <= T; ++test_case)
	{	
		long long num=0,answer=0,buf=0;
		scanf("%lld", &num);
		
		
		/////////////////////////////////////////////////////////////////////////////////////////////
		
		
		//printf("M:%d N:%d tc:%d\n",M,N,tc);
		//answer=num;
		for(int i=0 ; num>=10 ; i++) {
			answer += num%10;
			num=num/10;
			//printf("num:%d,answer:%d\n",num,answer);
		}
		answer += num%10;
		
		
		while(answer>=10) {
			
			buf=answer;
			answer=0;
			
			for(int i=0 ; buf>=10 ; i++) {
				answer += buf%10;
				buf=buf/10;
				//printf("buf:%d,answer:%d\n",buf,answer);
			}
			answer += buf%10;
		}
		printf("#%lld %lld\n",test_case,answer);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

