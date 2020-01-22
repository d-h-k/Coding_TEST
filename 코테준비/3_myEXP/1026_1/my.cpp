#include <cstdio>
using namespace std;
int get_gcdf(int a,int b);
int get_loss(int srsa, int srsb);
long long solution(int w,int h);

int main(void) {
	printf("%d ",solution(22,11));
}

//sol func
long long solution(int w,int h)
{
    int gcd=0;
    //int wa=0,ha=0;
    //int loss=0;
    //puts("hewllo");
	long long answer = 0;
	gcd = get_gcdf(w,h);
    //wa = w / gcd;
    //ha = h/ gcd; 
    //loss = get_loss(wa,ha);
    int temp=0;
    temp = w+h-gcd;
    //answer = (long long)loss*(long long)wa*(long long)ha;
    //answer = (long long)loss*(long long)gcd*(long long)gcd;
    //printf("%lld",answer);
    answer = (long long)temp;
    return answer;
}



//gcd
int get_gcdf(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int get_loss(int srsa, int srsb) //파라미터들은 서로소입니다(최대공약수가 1인 사이)
{   
    int ret = 0;
    ret = srsa+srsb-1;
    return ret;
}
