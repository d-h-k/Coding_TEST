#include <cstdio>

int gcd(int a, int b);
int main() {
	puts("Hewllo");
	
	printf("GCD 12&8 : %d\n",gcd(12,8));
	printf("GCD 16&32 : %d\n",gcd(16,32));
	printf("GCD 24&56 : %d\n",gcd(24,56));
	printf("GCD 12&88 : %d\n",gcd(12,88));

	return 0;	
}


int gcd(int a, int b)
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
