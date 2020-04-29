#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main(int argc, char** argv) {
	//freopen(".\testdata\14500_B.txt", "r", stdin);
	
	int cnt,num;
	scanf("%d",&cnt)  ;
	//string s;
	char s[120];
	register int data=0;
	
	for(int i=0 ; i<cnt ; i++) {
		scanf("%s",s);	
		scanf("%d",&num);
		//cin>>s>>num;
		if(!strcmp(s,"add")) {
			data = data | (1<<(num-1));
		}
		else if(!strcmp(s,"check")) {
			if( data & ~(1<<(num-1) )) {
				//printf("1\n");
				puts("1");
			}
			else {
				puts("0");
			}
		}
		else if(!strcmp(s,"remove")) {
			data &= ~(1<<(num-1));
		}
		else if(!strcmp(s,"toggle")) {
			data ^= (1<<(num-1));
		}
		else if(!strcmp(s,"all")) {
			//data = 0xffff;
			data = (1<<num)-1;
		}
		else if(!strcmp(s,"emty")) {
			data=0x0000;
		}
		else {
			cout<<"unknown sting:"<<s<<"is inserted"<<endl;
		}
		
	}
	/////////////////////////////////////////////////////////////////////////////////////////////
	/**/
	/////////////////////////////////////////////////////////////////////////////////////////////


	
	return 0;//
}
