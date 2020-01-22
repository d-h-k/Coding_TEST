#include <iostream>
#include <unistd.h>
//#include <windows>
#include <cstdio>
#include <vector>
#include <string>
#include <memory.h>

using namespace std;
vector<string> answer;

string str;
/*
 * n : 숫자의 갯수
 * temp : 고른 문자열
 * check : 고른 문자열을 담은 배열(이미 골랐으면 true / 아직 안골랐으면 false)
 * toPick : 골라야 할 숫자 갯수 
 */

void search(int n, string temp, bool check[], int toPick) {
	if(toPick == 0) {
		answer.push_back(temp);
		return;
	}  
	else {
		for(int i=0 ; i<n ; i++) {//갯수를  
			check[i] = true;
			temp.push_back(str[i]);
			search(n,temp,check,toPick-1);
			check[i]=false;
			temp.pop_back();
		}
	}

}



int main() {
	int is_deft = 1; 
	string temp;
	if(is_deft == 1) {
		//cin >> str;
		str = "1234";
		puts( " Defalut case : 1234 running..! ");
		sleep(2);	
	}
	else {
		cin >> str;
	}
	
	int n = str.size();
	bool *check = new bool[n];
	memset(check, false, sizeof(check));
	search(n, temp, check, n);


	for (int i = 0; i < answer.size(); i++) {
		cout<<answer[i]<<endl;
	}

	return 0;
}
