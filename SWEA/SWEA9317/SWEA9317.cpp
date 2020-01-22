#include<iostream>

using namespace std;
const int DEBUG=1;
char s1[100001],s2[100001];

int main(int argc, char** argv)
{
	int test_case;
	int T,N,ans=0;
    
	/**/
	freopen("sample_input.txt", "r", stdin);
	scanf("%d",&T);
    
	/*
	   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
	*/
	for(test_case = 1; test_case <= T; ++test_case)
	{

		/////////////////////////////////////////////////////////////////////////////////////////////
		/*이 부분에 여러분의 알고리즘 구현이 들어갑니다.*/
        scanf("%d",&N);
        scanf("%s",&s1);
        scanf("%s",&s2);
        
		//getline( cin, s1 );
        //getline( cin, s2 );
        ans=0;
        for(int i=0 ; i<N ; i++) {
        	if(s1[i] == s2[i]) {
                ans++;
            }
        }
        if(DEBUG) {
        	printf("s1:%s , s2:%s\n",s1,s2);
			//cout<<"s1:"<<s1<<endl;
            //cout<<"s2:"<<s2<<endl;
        }
        printf("#%d %d\n",test_case,ans);
        //cout<<'#'<<test_case<<' '<<ans<<endl;
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
