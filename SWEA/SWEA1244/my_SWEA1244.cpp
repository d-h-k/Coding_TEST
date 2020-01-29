#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	int T,test_case,ali,temp,ans,comp;
	int num,chance,len,idx;
	
	char max = '0';
	
	freopen("input.txt", "r", stdin);
	
	scanf("%d",&T);
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		
		
		scanf("%d %d",&num,&chance);
		
		string map = to_string(num);
		comp=atoi(map.c_str());
		len = map.size();
		ali=0;max=0;
		for(;chance>=1 ; chance--) {
			//puts("RUN!");
			for(int i=ali ; i<len ; i++) {
				if(max <= map[i]) {
					max = map[i];
					idx=i;
				}	
			}
			temp = map[ali];
			map[ali] = map[idx];
			map[idx] = temp;
			ali++;
			ans = atoi(map.c_str());//(map);
			
			
		}
		ans = atoi(map.c_str());//(map);
		
		printf("#%d %d\n",test_case,ans);
		
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
