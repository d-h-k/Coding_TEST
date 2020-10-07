//#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;


int main() {

    char id[200];
    char pw[200];
		bool is_valid = true;

    fgets(id,200,stdin);
    fgets(pw,200,stdin);
		int slenid,slenpw;
		slenid = strlen(id);
		id[slenid-1] = '\0';
		
		slenpw = strlen(pw);
		id[slenpw-1] = '\0';
		
		
    char admin_pw[] = "qlqlaqkq";
    char admin_id[] = "tkaruqtkf";

    //char * ppw, * pid;
		int pwidx=0,ididx=0;
    //a = strstr(id,admin_id);
    //b = strstr(pw,admin_pw);
		 
    while( (admin_pw[pwidx] != '\0') && (admin_id[pwidx] != '\0') ){
    	if( admin_pw[pwidx] != pw[pwidx] ) {
				is_valid = false;
				break;
			}else {
				//pass
			}
			
			if( admin_id[ididx] != id[ididx] ) {
				is_valid = false;
				break;
			}else {
				//pass
			}
			
						
    
  	}
  	
  	if(is_valid) {
  	  puts("LOGIN");
		}
		else {
      puts("INVALID");
		}

    return 0;
}
