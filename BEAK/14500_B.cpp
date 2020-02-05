/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;
int map[501][501];
const int DEBUG = 1;
int main(int argc, char** argv)
{
	int M,N;
	FILE *fp;
	
	if(DEBUG) {
		fp = freopen("./testdata/14500_B.txt", "r", stdin);
		if(fp==0) {
			puts("No File Exitsted!");
			exit(1);
		}
	}
	scanf("%d %d",&M,&N);
	printf("%d %d",M,N);

	for(int i=1 ; i<=M ; i++) {
		for(int j=1; j<=N ; j++) {
			scanf("%d ",&map[i][j]);
		}
	}
	printf("M:%d, N:%d \n",M,N);
	//if(DEBUG) {
		for(int i=1 ; i<=M ; i++) {
			for(int j=1; j<=N ; j++) {
				printf("%d ",map[i][j]);
			}
			puts("");
		}
	//}
	/////////////////////////////////////////////////////////////////////////////////////////////
	/*
	m-n-모양별-회전별 : 빅오가 n^4 제곱인데 이게 최선입니까??
	*/
	/////////////////////////////////////////////////////////////////////////////////////////////


	
	return 0;//
}
