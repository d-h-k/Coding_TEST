#include <cstdio>
#include <iostream>
#include <cstdlib>
#define debug 1
int main(int argc, char ** argv) {
	unsigned int T=0,i=0,w_sc=0,h_sc=0, days=0;
	FILE * quot;
	/*===================
	insert : 
	1. num of testcase
	2. cc jh's score, cc jw's score (btw space), 1~5000 
	===================*/
	/*===================
	#T days
	===================*/
	
	quot = freopen("Q512_input.txt", "r", stdin);
	if( quot == 0 ) {
		puts("File no exist");
		exit(1);
	}
	
	//insert num of TC
	scanf("%d",&T);
	
	//iter as TC Loop
	for(i=0 ; i<T ; i++) {
		//insertion h&w score
		scanf("%d",&h_sc);
		scanf("%d",&w_sc);
		if(debug) {
			printf("\nh_sc:%d, w_sc:%d\n\n",h_sc,w_sc);
		}
		
		for(days=0 ; days<50 ; days++) {
			if(h_sc<w_sc) {
				break;
			}
			else {
				w_sc = w_sc*3;
				//if(days%7==6) {
				h_sc = h_sc*2;
				//}//
			}
		}
		printf("#%d %d\n",i+1,days);		
		if(debug == 1) {
			printf("T:%d, days:%d, H:%d, W:%d\n",T,days,h_sc,w_sc);		
		
		}
	}
	
		
	
	if(debug == 1) {
		//puts("terminal");
		//printf("T:%d\t, days:%d\t, H:%d\t, W:%d\n",T+1,days,h_sc,w_sc);		
	}
	return 0;
}
