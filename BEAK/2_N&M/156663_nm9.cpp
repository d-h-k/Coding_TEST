#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

//vector<int> ans = {0,};
//vector<int> c = {0,};
//vector<int> num= {0,};
int ans[100];
int num[100]; 
int chk[100];

const int DEBUG = 0;

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
/*
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


void nm9_go(int index , int n, int m) {

    if(DEBUG) printf("index:%d ,n:%d ,m:%d\n"
	,index,n,m);
    
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
    	if(chk[i] > 0) {
    		chk[i] --;
			ans[index] = i;
			nm9_go(index+1,n,m);
			chk[i] ++;	
		}
		
	}
	

}


int main(int argc, char** argv)
{
    int M,N;
    scanf("%d %d",&N,&M);
    for(int i=0 ; i<N ; i++) {
        scanf("%d",&num[i]);
    }

    sort(num,num+N);
    if(DEBUG) 
	{
		puts("after sort");

	    for(int i=0 ; i<N ; i++) {
			printf("%d ",num[i]);
	    }
	    puts("");
	}
	

    //go(0,0,N,M);
	//dfs(0,0,N,M);
	nm9_go(0,N,M);
	
    return 0;//
}
