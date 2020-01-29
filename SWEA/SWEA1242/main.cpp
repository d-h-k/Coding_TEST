#include<iostream>

using namespace std;

int solve();

char HexaToBin[16][5] = { "0000","0001","0010","0011","0100","0101","0110",
"0111","1000","1001","1010","1011","1100","1101","1110","1111", };

int HashTbl[7000],Row,Col;
char Arr[2000][2000];
const int DEBUG = 1;

int main(int argc, char** argv)
{
	int T,N,test_case;
	freopen("sample_input.txt", "r", stdin);
	cin>>T;
	/* */
	char a;
	for(test_case = 1; test_case <=T; ++test_case)
	{
		for(int i=0 ; i<7000 ; ++i) {
			HashTbl[i]=-1;
		}
		HashTbl[3211]=0; HashTbl[2221]=1; HashTbl[2122]=2;
		HashTbl[1411]=3; HashTbl[1132]=4; HashTbl[1231]=5;
		HashTbl[1114]=6; HashTbl[1312]=7; HashTbl[1213]=8;
		HashTbl[3112]=9;
		
		//puts("=====================================");
		/////////////////////////////////////////////////////////////////////////////////////////////
		/* */
		//printf("Y:%d, X:%d, dir:%d, cnt:%d, num:%d\n",Y,X,dir,cnt,num);	
		///////////////////////////////////////////////////////////////////////////////////////////
		cin >> Row >> Col;
		
		for(int i=0; i<Row ; i++) {
			for(int j=0 ; j<Col ; j++) {
				cin>>a;
				if(a<'A') {
					a -= '0';
				}
				else {
					a = a - 'A' + 10;
				}
				for(int k=0 ; k<4 ; k++) {
					Arr[i][j*4+k] = HexaToBin[a][k];
				}
			}
		}
		Col *=4;
		cout<<"#"<<test_case<<' '<<solve()<<endl;
		
	}  
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

int calcScale(int row, int col) {
	int cnt = 0;
	for(int i=col ; i>0 ; --i) {
		if(Arr[row][i] != Arr[row][i-1]) ++cnt;
		if(cnt==4) return (col -i +1) /7; 
	}
	return 1;
}
 
int parse(int row,int col, int scale) {
	int key=0, cnt=1;
	for(int i=0 ; i<7*scale ;  ++i) {
		if(col+i < Col-1 && Arr[row][col+i] == Arr[row][col+i+1]) {
			++cnt;	
		}
		else {
			cnt/= scale;
			key=key*10+cnt;
			cnt=1;
		}
	}
	return HashTbl[key];
} 


int solve() {
	int code[8], sum=0;
	for(int i=0 ; i<Row ; i++) {
		for(int j=Col-1 ; j>=55; --j) {
			if(Arr[i][j] == '1') {
				int scale = calcScale(i,j), startCol = j-(56*scale) +1;
				bool flag = true;
				for(int k=0 ; k<8 ; ++k) {
					code[k] = parse(i, startCol+k*7*scale,scale);
					if(code[k] < 0) {	
						flag = false;
						break;
					}
				}
				if(flag) {
					for(int a=i+1 ; a<Row ; ++a) {
						for(int b=startCol; b<=j ; ++b)
							if(Arr[i][b] == Arr[a][b]) {
								Arr[a][b]=0;
							}
							else {
								a=Row;
								break;
							}
					if(((code[0]+code[2]+code[4]+code[6])*3 + 
					(code[1]+code[3]+code[5]+code[7]))%10==0) {
						for(int i=0 ; i<8 ; i++) {
							sum +=code[i];
						}
						j=startCol-1;
					}
					
					}
				}
				
			}
		}
		return sum;
	}
}
