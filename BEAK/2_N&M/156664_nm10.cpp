#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

//vector<int> ans = {0,};
//vector<int> c = {0,};
//vector<int> num= {0,};
int ans[100]={0,};
int num[100]={0,}; 
int cnt[100]={0,};

const int DEBUG = 1;


void nm10_go(int index, int start , int n, int m) {

    if(DEBUG) {
		printf("index:%d ,n:%d ,m:%d\n",index,n,m);
	}
    
	if(index == m) {//���� 
        puts("protnnt");
		for(int i=0 ; i<m ; i++) {
            printf("%d",ans[i]);//printf("%d",num[a[i]]); ����?? 
            if(i != m-1) {
                printf(" ");
            }
        }
        puts("");
        return;
    }
   
    for(int i=start ; i<n ; i++ ) {
    	 puts("?!?!?");
    	if(cnt[i] > 0) {
    		cnt[i] --;
			ans[index] = i;
			nm10_go(index+1,i,n,m);
			cnt[i] ++;	
		}
		
	}
}


int main(int argc, char** argv)
{
    int M,N;
    scanf("%d %d",&N,&M);
    for(int i=0 ; i<N ; i++) {
        scanf("%d",&num[i]);
        cnt[i]=0;
    }

    sort(num,num+N);
    if(DEBUG) 
	{
		puts("after sort");

	    for(int i=0 ; i<N ; i++) {
			printf("%d ",num[i]);
	    }
	    puts("");
	    
	    printf("before recvcall, N:%d, M:%d\n",N,M);
	}

    //go(0,0,N,M);
	//dfs(0,0,N,M);
	
	nm10_go(0,0,N,M);
	
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
    //���� Ƚ�� == n
    for (int i = 0; i < n; i++)
    {
        if (!chk[i] && (i==0 || before != num[i]) )
        {
        	before = num[i];
        	num[depth] = num[i];
            chk[i] = 1;
            ans[num[i]] = 1;
            dfs(depth + 1,0,n,m);//������������ �̱� ����
            chk[i] = 0;//�ٽ� ���ִ� ������ �� ���� �̾Ҵ� �ָ� ���� ���� �Ѿ�� �� �� �̰� �ͱ� �����̴�.
        }
    }
    
}



void nm9_go(int index ,int start, int n, int m) {

    if(DEBUG) printf("index:%d ,start:%d ,n:%d ,m:%d\n"
	,index,start,n,m);
    
	if(index == m) {//���� 
        		
		for(int i=0 ; i<m ; i++) {
            printf("%d",num[ans[i]]);//printf("%d",num[a[i]]); ����?? 
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

