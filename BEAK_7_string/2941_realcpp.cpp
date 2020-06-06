//
#include <vector>
#include <iostream>
#include <string>

#define DEBUG 0

using namespace std;

vector <string> caa = 	{
							"c=",
							"c-",
							"dz=",
							"d-",
							"lj",
							"nj",
							"s=",
							"z="
							};
							
vector <int> caa_adj = {
							2,
							2,
							3,
							2,
							2,
							2,
							2,
							2,
							};
							

int main(int argc, char** argv)
{
	int M,N,T, ans=0, index=0;
	/////////////////////////////////////////////////////////////////////////////////////////////
	/* coding here!!*/
	//printf("info, len:%d,",len);
	string strbuf;
	
	cin>> strbuf;
	
	for(int i=0; i<	caa.size() ; i++) {
		index = strbug.find(vec[i]);
		for(int index != string::nops ; index = strbuf.find(vec[i])) {
			
			strbuf.replace(index, vec[i].length(), "@");
		}
	}
	
	cout<< strbuf.length();
		
	if(DEBUG) {
		//printf("info, len:%d,",len);
	}
	
	return 0;//
}
