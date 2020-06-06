#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;

int ans[100]={0,};
int num[100]={0,}; 
int cnt[100]={0,};
vector<vector<int>> d;
const int DEBUG = 0;

void nm11_go(int index , int start, int n, int m) {

    if(DEBUG) {
		printf("index:%d ,n:%d ,m:%d\n",index,n,m);
	}
    
	if(index == m) {//±Ì¿Ã 
    	vector<int>temp;
		for(int i=0 ; i<m ; i++) {
            temp.push_back(num[a[i]]);
        }
        d.push_back(temp)
        return;
    }
   
    for(int i=start ; i<n ; i++ ) {
		cnt[i] = true;
		ans[index] = i;
		nm11_go(index+1,0,n,m);
		cnt[i] = false;
		
	}
}


int main(int argc, char** argv)
{
    int M,N;
    int temp[10];
    scanf("%d %d",&N,&M);
    for(int i=0 ; i<N ; i++) {
        scanf("%d",&num[i]);
        
    }

    sort(num,num+N);
    nm11_go(0,0,N,M);
    
    d.erase(unique(d.begin(),d.end()),d.end());
    for(auto &v : d) {
    	for(int i=0 ; i<m ; i++) {
    		cout<<v[i];
    		if(i != m-1) {
    			cout<< ' ';
			}
		}
	}
    return 0;//
}

