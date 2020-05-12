/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;
int map[501][501];
const int DEBUG = 1;
const int FILEIO = 1;//1:use, 0:Not use
//int dx[] = {0,1,2,3,0,0,0,0};
//int dy[] = {0,0,0,0,0,1,2,3};
int block[19][3][2] = {
    {{0,1}, {0,2}, {0,3}},
    {{1,0}, {2,0}, {3,0}},
    {{1,0}, {1,1}, {1,2}},
    {{0,1}, {1,0}, {2,0}},
    {{0,1}, {0,2}, {1,2}},
    {{1,0}, {2,0}, {2,-1}},
    {{0,1}, {0,2}, {-1,2}},
    {{1,0}, {2,0}, {2,1}},
    {{0,1}, {0,2}, {1,0}},
    {{0,1}, {1,1}, {2,1}},
    {{0,1}, {1,0}, {1,1}},
    {{0,1}, {-1,1}, {-1,2}},
    {{1,0}, {1,1}, {2,1}},
    {{0,1}, {1,1}, {1,2}},
    {{1,0}, {1,-1}, {2,-1}},
    {{0,1}, {0,2}, {-1,1}},
    {{0,1}, {0,2}, {1,1}},
    {{1,0}, {2,0}, {1,1}},
    {{1,0}, {2,0}, {1,-1}},
};

int main(int argc, char** argv)
{
	int M,N,ans=0,sum=0;
	FILE *fp;
	
	if(FILEIO) {
		fp = freopen("./testdata/14500_B.txt", "r", stdin);
		if(fp==0) {
			puts("No File Exitsted!");
			exit(1);
		}
	}
	else {
		
	}
	
	//1.insert data
	scanf("%d %d",&N,&M);
	for(int i=0 ; i<N ; i++) {
		for(int j=0; j<M ; j++) {
			scanf("%d ",&map[i][j]);
		}
	}
	
	
	
	//1.insert data vaild
	if(DEBUG) {	
		printf("Y=M:%d, X=N:%d \n",M,N);
		for(int i=0 ; i<N ; i++) {
			for(int j=0; j<M ; j++) {
				printf("%d ",map[i][j]);
			}
			puts("");
		}
		puts("");
	}
	
	//2. get sum 
	//start point  y:j:M , x:i:N
	for(int i=0 ; i<N ; i++) {
		for(int j=0 ; j<M ; j++) {
			for(int k=0 ; k<19 ; k++) {
				bool ok = true;
				
				//0,0 data
				sum = map[i][j];
				
				//2.1. range check
				//if(i+dx[0])
				for(int l=0 ; l<3 ; l++) {
					int x = i+block[k][l][0];
					int y = i+block[k][l][1];
					if(0<=x && x<=N && 0<=y && y<=M) {
						sum += map[x][y];
					}
					else {
						ok=false;
						break;
					}
				}
				if(DEBUG) {
					printf("ans:%d sum:%d\n",ans,sum);
				}
				//2.2. check maxximum 
				if(ans < sum && ok==true) {
					ans = sum;
				}
				
					
			}
		}
	}
	
	printf("%d\n",ans);

	
	return 0;//
}
