#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;
vector <string> ans;

int main(void) { 
	int a,b;
	
	cin >> a >> b;	  
	if(a==b)
	{
		printf("==\n");
	}
	else if(a>b)
	{
		printf(">\n");
	}
	else if(a<b)
	{
		printf("<\n");
	}
	else
	{
		printf("error");
	}
	
		
	  
  return 0;
}

