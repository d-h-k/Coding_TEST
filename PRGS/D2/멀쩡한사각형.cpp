#include <cstdio>
#define DEBUG 1
using namespace std;

int get_gcd(int w, int h);

long long solution(int w,int h)
{
	long long answer = 1;
    long long subsq_white = 0;
    long long numofwhite = 0;
    int gcd;
    gcd = get_gcd(w,h);//!
    
    subsq_white = ((long long)(w/gcd) + (long long)(h/gcd)) - 1;
    numofwhite = subsq_white*(long long)gcd;   
	answer = ((long long)w*(long long)h) - numofwhite;
    if(DEBUG) {
        printf("gcd : %d, subsq_white:%d",gcd,subsq_white);
        
    }
    return answer;
}

int get_gcd(int w, int h) {
    if(h == 0) {
        return w;
    }
    else {
        return get_gcd(h,w%h);
    }
}
