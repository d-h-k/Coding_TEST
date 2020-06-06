//11720
#include <cstdio>
#include <iostream>
using namespace std;
int main() {
	int n,temp,ans=0;
  char map[101];
	cin >> n;
	/*
	scanf("%1d",&temp);
	ans += temp;
	*/
	scanf("%s",&map);
		
	for(int len =0 ; len<n ; len++) {
		ans += (int)map[len]-'0';
		
	}
	cout << ans << '\n';
	return 0;
	
	
}


