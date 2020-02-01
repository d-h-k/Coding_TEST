#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case,answer=0;
	int T=10,DEBUG=1,tc=0;
	/*	*/
	freopen("input.txt", "r", stdin);

	for(test_case = 1; test_case <= T; ++test_case)
	{	
		answer=0;
		scanf("%d",&tc);
		//scanf("%s",c_map);
		//scanf("%s",c_pat);
		/////////////////////////////////////////////////////////////////////////////////////////////
		string pat;// = c_pat;
		string map;// =/ c_map;
		cin>>pat>>pat;
		//cin>>map;
		//c_map = 
		//c_pat = pat.c_str();
		int len_map = map.size();
		int len_pat = pat.size();
		for(int i=0 ; i<len_map ; i++) {
			//
			for(int j=0 ; j<len_pat ; j++) {
				if(map[i] == pat[j]) {
					//puts("!!");		
					
					if(j==len_pat) {
						answer++;	
					}	
				}
				else {
					break;
				}
			}
 		}
		//cin>>endl;
		
		printf("#%d %d\n",test_case,answer);
		if(DEBUG) {
			printf("tc:%d\nmap:%s\npat:%s\n\n\n",tc,map.c_str(),map.c_str());
			
		}
	

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

