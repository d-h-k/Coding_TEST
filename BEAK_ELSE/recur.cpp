#include <iostream>

using namespace std;

char path[4] = {0,};

int run (int level) {
	if(level == 4) {
		cout<< path <<endl;
	}
	else {
		for(int i=1 ; i<=6 ; i++ ) {
			//
			path[level] = i+'0';
			
			//���ȣ�� 
			run(level+1);
			
			
			//���󺹱�
			 path[level] = 0;
		}
		
	

	}
	
	return 0;
}

int main(void) {
	run(0);
}
