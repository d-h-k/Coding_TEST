#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;
vector<int> getprime(int start, int end);

int main() {
	vector<int> temp;
	int szov=0;
	
	temp = getprime(200,300);
	
	szov=temp.size();
	printf("sizeof vector : %d\n",szov);
	puts("prime :");
	for(int i = 0 ; i<szov ; i++) {
		printf("%d ",temp[i]);
	}
	
	
	return 0;
}


vector<int> getprime(int start, int end) {
	vector<int> ret;
	int count=0,i,j,k;
	
	
	for(i = start; i<=end ; i++) {
		count = 0;
		
		for(j = 2 ; j<i ; j++) {
			if(i%j == 0) {
				count++;
				break;
			}
		}
		//printf("num:%d, count:%d\n",i,count);
		if(count == 0){
			//puts("HELL");
			ret.push_back(i);
		}
	}
	
	return ret;
	
}
