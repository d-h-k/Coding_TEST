/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<algorithm>
using namespace std;
int tall[9+1];
int visted[9+1];
int answer[7+2]={0};

const unsigned int DEBUG = 0;

int main(int argc, char** argv)
{
	FILE * fp;
	int test_case;
	int T, sum=0,twit;
	int t1,t2,idx=1;

	cout << "hello wordl!!" << endl;
	return 1;

	fp=freopen("./testdata/2309_B.txt", "r", stdin);
	if(fp==0) {
		puts("No File Existed!!");
		exit(1);
	}
	else {
		if(DEBUG) {
			
			printf("DEBUG : fp=%d",fp);
		}
	}
	//cin>>T;
	//for(test_case = 1; test_case <= T; ++test_case)
	//{

	/////////////////////////////////////////////////////////////////////////////////////////////
	/**/
	/////////////////////////////////////////////////////////////////////////////////////////////
	
	
	for(int i=1 ; i<=9 ; i++) {
		scanf("%d",&tall[i]);
		sum += tall[i];
		//printf("tall:%d\n",tall[i]);
	}
	
	twit = sum - 100;
	
	for(int i=1 ; i<=8 ; i++) {
		for(int j=i+1 ; j<=9 ; j++) {
			if(twit == (tall[i]+tall[j]) ) {
				t1=i;
				t2=j;
				if(DEBUG) {
					printf("i:%d j:%d is matching!!\n",i,j);
				}
			}
		}
	}
	
	for(int i=1 ; i<=9 ; i++) {
		if( (i==t1) || (i==t2) ) {
			
		}
		else {
			answer[idx] = tall[i];
			idx++;
		}
	}
	
	sort(&answer[1],&answer[8]);
	
	for(int i=1 ; i<=7 ; i++ ) {
		printf("%d\n",answer[i]);
	}

	if(DEBUG) {
		puts("DUBUG");
		for(int i=1 ; i<=9 ; i++) {
			printf("tall[%d]:%d,  ",i,tall[i]);	
		}
		printf("\nsum:%d,  twit:%d",sum,twit);
		
	}

	//}
	return 0;//
}

//int dfs(void)
