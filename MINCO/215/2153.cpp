#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char buf[2000];
    char ans[2000];
    char fil[2];
    int loc[1000];
		//int 
    

    fgets(buf,2000,stdin);
    cin >> fil[0] >> fil[1];
		strcpy(ans,buf);

    int slen = strlen(buf);
    for(int i=0 ; i<slen-1 ; i++) {
        if (buf[i] == fil[0]) {
            //cout << fil[0];
            if( (i-1) >= 0 ) {
            	ans[i-1] = '#';
						}else {}
						
						if( (i+1) < slen ) {
							ans[i+1] = '#';
						}else {}
						
        } 
        else if(buf[i] == fil[1]) {
            //cout << fil[1];
            if( (i-1) >= 0 ) {
            	ans[i-1] = '#';
						}else {}
						
						if( (i+1) < slen ) {
							ans[i+1] = '#';
						}else {}
				
        }
        else {
            //cout << "#";
        }
    }
    
    for(int i=0 ; i<slen-1 ; i++) {
			printf("%c",ans[i]);
		}

    return 0;
}
