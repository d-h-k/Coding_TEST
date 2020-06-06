/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;
int map[501][501];
const int DEBUG = 0;
int d_temp[4];

//int dx[] = {0,1,2,3,0,0,0,0};
//int dy[] = {0,0,0,0,0,1,2,3};
int block[19][3][2] = {//19가지 도형의 갯수//포인트가 4개임//XY좌표 쌍이므로 두개 (x,y)
    {{0,1}, {0,2}, {0,3}},//0
    {{1,0}, {2,0}, {3,0}},//
    {{1,0}, {1,1}, {1,2}},//2
    {{0,1}, {1,0}, {2,0}},//
    {{0,1}, {0,2}, {1,2}},//
    {{1,0}, {2,0}, {2,-1}},//5
    {{0,1}, {0,2}, {-1,2}},//
    {{1,0}, {2,0}, {2,1}},//7
    {{0,1}, {0,2}, {1,0}},//
    {{0,1}, {1,1}, {2,1}},//10
    {{0,1}, {1,0}, {1,1}},//
    {{0,1}, {-1,1}, {-1,2}},//12
    {{1,0}, {1,1}, {2,1}},//
    {{0,1}, {1,1}, {1,2}},//
    {{1,0}, {1,-1}, {2,-1}},//15
    {{0,1}, {0,2}, {-1,1}},//
    {{0,1}, {0,2}, {1,1}},//17
    {{1,0}, {2,0}, {1,1}},//
    {{1,0}, {2,0}, {1,-1}},//19
};

int main(int argc, char** argv)
{
	int M,N,ans=0,sum=0;
	
	//1.insert data
	scanf("%d %d",&N,&M);//세로=N=y좌표, 가로=M=x 좌표  
	for(int i=0 ; i<N ; i++) {
		for(int j=0; j<M ; j++) {
			scanf("%d",&map[i][j]);
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
	for(int i=0 ; i<N ; i++) {//y=좌표 세로, N 
		for(int j=0 ; j<M ; j++) {//x좌표, 가로 M  
			for(int k=0 ; k<19 ; k++) {//도형 
				if(DEBUG) {
					printf("y:%d, x:%d, type:%d \n",i,j,k);
				}
				bool ok = true;
				
				//0,0 data
				sum = map[i][j];
				
				//2.1. range check
				//if(i+dx[0])
				for(int l=0 ; l<3 ; l++) {
					int x = j+block[k][l][1];
					int y = i+block[k][l][0];
					if(0<=x && x<=M && 0<=y && y<=N) {
						sum += map[y][x];
						if(DEBUG) { 
						d_temp[l] = map[y][x];
						}
					}
					else {
						if(DEBUG) { puts("out of range"); }
						ok=false;
						break;
					}
				}
				
				//2.2. check maxximum 
				if( ok==true && (ans < sum) ) {
					if(DEBUG) {
						printf("ans:%d, sum:%d = %d + %d + %d + %d \n",ans,sum,map[i][j],d_temp[0],d_temp[1],d_temp[2]);
					}
					
					ans = sum;
				}
			}
		}
	}
	
	printf("%d\n",ans);
	return 0;
}
