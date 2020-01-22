#include <iostream>

#define DEBUG 1
#define DEBUGx 0

using namespace std;
int HashTable[7000];
int Row, Col;
char Arr[50][100];

int solve();
int parse(int row, int col);

int main(int argc, char ** argv) {
	freopen("input.txt", "r", stdin);
	
    for(int i=0 ; i<7000 ; ++i) {
        HashTable[i] = -1;
    }

    HashTable[3211] = 0;
    HashTable[2221] = 1;
    HashTable[2122] = 2;
    HashTable[1411] = 3;
    HashTable[1132] = 4;
    HashTable[1231] = 5;
    HashTable[1114] = 6;
    HashTable[1312] = 7;
    HashTable[1213] = 8;
    HashTable[3112] = 9;
    
    int tcCnt;
    cin >> tcCnt;
    if(DEBUGx) {
    	printf("tcCnt : %d\n",tcCnt); 
	}
    for(int t=1; t<=1/*tcCnt*/ ; ++t) {
        cin >> Row >> Col;
        
		if(DEBUGx) {
    		printf("Row:%d, Col:%d\n",Row,Col); 
		}
		
        for(int i = 0; i<Row ; ++i) {
            for(int j= 0 ; j<Col ; ++j) {
                cin>>Arr[i][j];
            }    
        }
        
        if(DEBUG) {
        	for(int i = 0; i<Row ; ++i) {
            	for(int j= 0 ; j<Col ; ++j) {
            	    cout<< Arr[i][j];
            	}
				puts(" ");    
        	}	
		}
        
        cout<< "#" << t << ' ' << solve() << endl;
    }

    return 0;

}


int parse(int row, int col) {
    // 0,1 to check number
    int key = 0;
    int cnt = 1;
    for(int i=0 ; i<7 ; ++i) {
        if(col+i < Col-1 && Arr[row][col+1] == Arr[row][col+1]) {
            ++cnt;
        }
        else {
            key *=10;
            key +=cnt;
            cnt = 1;
        }

    }

    return HashTable[key];
}


int solve() {
    int code[8], sum = 0;

    for(int i=0 ; i<Row ; ++i) {// Run Loop as much as Row
        for(int j=Col-1 ; j>=55 ; --j) {//Inverted order Col search
            if(Arr[i][j] == '1') {
            	
                bool flag = true;
                for(int k=0 ; k<8 ; ++k) {//!!!!!!!!!!!!!!!
                    code[k] = parse(i,j-55+(k*7) );//code dispution  
                    if(code[k] < 0) {
                        flag = false; break;
                    }//!!!!!!!!!!!!!!!!!!
                    else {
                    	puts("code[k] > 0");
					}
                }
                if(flag) break;
            }
        }
    }
    if(((code[0]+code[2]+code[4]+code[6])*3  + 
    (code[1]+code[3]+code[5]+code[7]))%10 == 0 ) {
        for(int i=0 ; i<8 ; i++) {
            sum+= code[i];
        }
    }
    return sum;
}
