/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
#include <cstdio>
#include <iostream>

using namespace std;

const int DEBUG = 1;

int get_info();

int xlen, ylen;

int temp;
int map[102][51];
int code[8+1];
int main(int argc, char** argv)
{
	int test_case;
	int T;
	/*
	*/
	freopen("input.txt", "r", stdin);
	scanf("%d",&T);
	/*
	*/
	for(test_case = 1; test_case <=1; ++test_case)
	{       
        
        scanf("%d",&ylen);
        scanf("%d",&xlen);
		//scanf("%d",&temp);//carage return 
        for(int i=1 ; i<=ylen ; i++) {
            for(int j=1 ; j<=xlen ; j++) {
                scanf("%1d",&temp);
                map[j][i] = temp; 
            }
            //scanf("%c",&temp);// carage return char
        }

        if(DEBUG) {
        	printf("T:%d , xlen:%d , ylen:%d\n",T,xlen,ylen);
            for(int i=1 ; i<=ylen ; i++) {
                for(int j=1 ; j<=xlen ; j++) {
                    printf("%d",map[j][i]);
                }
                puts(" ");
            }    
        }
        
    	get_info();    


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}  

int get_info() {
    //map[] arry to info data
    //for(int i=0 ; i<7 ; i++)
	 
}
