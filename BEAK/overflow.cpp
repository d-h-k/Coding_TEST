#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int S=0,fed=0;
	while(1) {

		if(fed>S) {
			printf("overflow!! : %d\n",fed);
			S=0;fed=0;	
		}
		else {
			fed=S;
			S++;
			//if((S%10000) == 0 ) {
			//	printf("S:%d\n",S);
			//} 
		}
		
	}
	return 0;//
}
