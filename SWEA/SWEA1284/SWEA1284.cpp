#include<iostream>

using namespace std;

int T,P,Q,R,S,W,A_chg,B_chg;


int getb();

int main(int argc, char** argv)
{
	int test_case;
	
	/*	*/
	freopen("input.txt", "r", stdin);
	scanf("%d",&T);
	/*	*/
	for(test_case = 1; test_case <= T; ++test_case)
	{

		/////////////////////////////////////////////////////////////////////////////////////////////
		/**/
		/////////////////////////////////////////////////////////////////////////////////////////////
		scanf("%d %d %d %d %d",&P,&Q,&R,&S,&W);	
		A_chg = W*P;
		B_chg = getb();
		//printf("A_chg:%d , B_chg:%d \n",A_chg,B_chg);
		if( A_chg > B_chg ) {
			printf("#%d %d\n",test_case,B_chg);	
		}
		else {
			
			printf("#%d %d\n",test_case,A_chg);
		}
		
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}


int getb() {
	int ans = 0,temp = 0;
	if(W<=R) {
		ans = Q;
	}
	else {
		temp = S*(W-R);
		ans = temp + Q;
	}
	
	return ans;	
	
}
