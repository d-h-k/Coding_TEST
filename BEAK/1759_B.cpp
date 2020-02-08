#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void go(int n,vector<char> &alpha, string password, int i);
bool check(string &password);
vector<char> arr;

const int DEBUG=1;
const int AUTO=1;

int main(int argc, char** argv) {
	int L,C;
	char temp;
	FILE * fp;
	
	if(AUTO) {
		fp = freopen("./testdata/1759_B.txt", "r", stdin);
		if(DEBUG && fp==0) {
			puts("NO File existed");
			exit(1);
		}
	}
	
	scanf("%d %d",&L,&C);
	
	for(int i=0 ; i<C ; i++) {
		cin>>temp;
		arr.push_back(temp);
	}
	
	sort(arr.begin(),arr.end());
	go(L,arr,"",0);



	
	return 0;//
}

void go(int n,vector<char> &alpha, string password, int i) {
	if(password.length() == n) {
		if(check(password)) {
			cout<< password<< '\n';
		}
		return;
	}
	if(i>= alpha.size()) return;
	go(n,alpha, password+alpha[i],i+1);
	go(n,alpha, password,i+1);
}

bool check(string &password) {
	int ja=0;
	int mo=0;
	int len=password.size();
	char temp;
	for(int i=0 ; i<len ; i++) {
		temp=password[i];
		if(temp=='a' || temp=='i' || temp=='o' || temp=='u' || temp=='e') {
			mo++;
		}
		else {
			ja++;
		}
	}
	
	return ((ja>=2) && (mo>=1));	
}






