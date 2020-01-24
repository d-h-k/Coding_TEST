#include <cstdio>
#define  MAX_LEN  100
 
int main(void)
{
	FILE *stream, *stream1, *quot;
	char line[MAX_LEN], *result;
	int  i;
	i = freopen(&quot;input.txt&quot; , &quot;r&quot; , stdin);
	//read num of testcase
	printf("%d", i);
	scanf("%d",&T);
	return 0;
}
