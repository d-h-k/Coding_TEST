// 리모콘 문제  , 1107번 
//https://www.acmicpc.net/problem/1107
#include <cstdio>
#include <iostream>
using namespace std;
bool broken[10];

int posible(int c) {
	if(c==0 ) {
		if(broken[0]) {
			return 0;
		}
		else {
			return 1;
		}
	}
	int len= 0;
	while(c>0) {
		if(broken[c%10]) {
			return 0;
		}
		len +=1;
		c /= 10;
	}

	return len;
}


int main(void) {
	int n;
	cin >> n;
	int m;
	cin >> m;
	for(int i=0 ; i<m ; i++) {
		int x;
		cin >> x;
		broken[x] = true;
	}
	
	int ans = n-100;
	
	if(ans<0) {
		ans = -ans;
	}
	for(int i=0 ; i<=100000; i++) {
		int c = i;
		int len = posible(c);
		if(len>0) {
			int press = c-n;
			if(press<0) {
				press = -press;
			}
			if(ans > len + press) {
				ans = len + press;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}
