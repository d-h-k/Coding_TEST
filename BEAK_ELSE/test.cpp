#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;
vector <string> ans;

/*
	ans.push_back("\    /\\n");
	ans.push_back(" )  ( ')\n");
	ans.push_back("(  /  )\n");
	ans.push_back(" \\(__)|\n");
*/

int main(void) { 
	  
	ans.push_back("|\\_/|");
	ans.push_back("|q p|   /}");
	ans.push_back("( 0 )\"\"\"\\");
	ans.push_back("|\"^\"`    |");
	ans.push_back("||_/=\\\\__|");
	  
	for(int i=0 ; i<5 ; i++) {
    cout << ans[i]<< endl;
  }
  
  return 0;
}

