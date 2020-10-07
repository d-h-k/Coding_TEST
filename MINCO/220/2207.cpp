#include <iostream>
#include <cstring>

using namespace std;
char ans[4];
char path[7];
int num=0;
/*void tree(int dep) {

    if(dep == 3 ) {
        for(int i=0 ; i<3; i++) {
            if(path[i] != ans[i]) {

            }
        }
    }

}*/

// AAA -> DDD까지

int main() {

    int slen;
    fgets(ans,4,stdin);
    slen = strlen(ans);
    
    for(int i=0 ; i<4 ; i++) {
        path[0] = (char)i+'A';
        for(int j=0 ; j<4; j++) {
            
            path[1] = (char)j+'A';
            for(int k=0; k<4 ; k++) {
                path[2] = (char)k+'A';

                if(strcmp(path,ans) == 0) {
                    cout << num+1<< "번째" << endl;
                }
                else {
                    num++;
                }

            }
        
        }
        
    }
    

   //while(next_permutation())

    return 0;
}