#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;

vector<int> ans2;
vector<int> cnt2;
vector<int> num2;
int ans[100]={0,};
int num[100]={0,}; 
int cnt[100]={0,};

const int DEBUG = 0;


void nm11_go(int index , int n, int m) {

    if(DEBUG) {
		printf("index:%d ,n:%d ,m:%d\n",index,n,m);
	}
    
	if(index == m) {//깊이 
        //puts("protnnt");
		for(int i=0 ; i<m ; i++) {
            printf("%d",num[ans[i]]);//printf("%d",num[a[i]]); 차이?? 
            if(i != m-1) {
                printf(" ");
            }
        }
        puts("");
        return;
    }
   
    for(int i=0 ; i<n ; i++ ) {
		cnt[i] = true;
		ans[index] = i;
		nm11_go(index+1,n,m);
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
        scanf("%d",&temp[i]);
        cnt[i]=0;
    }

    sort(num,num+N);
    int k=0;
    for(int i=0 ; i<N ; i++) {
    	if(i>0 && temp[i] == temp[i-1]) continue;
    	num[k++] = temp[i];
	}
	
    if(DEBUG) 
	{
		puts("after sort");

	    for(int i=0 ; i<N ; i++) {
			printf("%d ",num[i]);
	    }
	    puts("");
	    
	    printf("before recvcall, N:%d, M:%d\n",N,M);
	}
	nm11_go(0,N,M);
    return 0;//
}






/*
void dfs(int depth,int index,int n, int m) {
    if (depth == m)
    {
        for (int i = 0; i < m; i++) {
			//cout << ans[i] << ' ';
			printf("%d ",num[i]);
		}
        printf("\n");
        return;
    }
    int before = -1;
    //시작 횟수 == n
    for (int i = 0; i < n; i++)
    {
        if (!chk[i] && (i==0 || before != num[i]) )
        {
        	before = num[i];
        	num[depth] = num[i];
            chk[i] = 1;
            ans[num[i]] = 1;
            dfs(depth + 1,0,n,m);//오름차순으로 뽑기 위해
            chk[i] = 0;//다시 꺼주는 이유는 그 전에 뽑았던 애를 다음 노드로 넘어갔을 때 또 뽑고 싶기 때문이다.
        }
    }
    
}



void nm9_go(int index ,int start, int n, int m) {

    if(DEBUG) printf("index:%d ,start:%d ,n:%d ,m:%d\n"
	,index,start,n,m);
    
	if(index == m) {//깊이 
        		
		for(int i=0 ; i<m ; i++) {
            printf("%d",num[ans[i]]);//printf("%d",num[a[i]]); 차이?? 
            if(i != m-1) {
                printf(" ");
            }
        }
        puts("");
        return;
    }
    
    for(int i=0 ; i<n ; i++ ) {
    	if(chk[i]) continue;
		chk[i] = true;
		ans[index] = i;
		nm9_go(index+1, i,n,m);
		chk[i] = false;
	}
	

}

*/

/*

void v2(int index , int n, int m) {
	if(index == m) {
		vector<int> temp;
		for(int i=0 ; i<m ; i++) {
			temp.push_back(num2[a[i]]);
		}
		
		d.push_back(temp);
		return;
	}
    for(int i=start ; i<n ; i++) {
    	cnt2[i] = true;
    	ans2[index] = i;
    	go(index+1, 0, n, m);
    	cnt2[i] = false;
	}
}*/


