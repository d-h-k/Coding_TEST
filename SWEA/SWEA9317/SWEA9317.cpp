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
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for(test_case = 1; test_case <= T; ++test_case)
	{

		/////////////////////////////////////////////////////////////////////////////////////////////
		/*�� �κп� �������� �˰��� ������ ���ϴ�.*/
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
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}
