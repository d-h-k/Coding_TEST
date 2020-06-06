#include<iostream>
#include<algorithm>

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
			printf("%d ",ans[i]);
		}
        printf("\n");
        return;
    }
    //시작 횟수 == n
    for (int i = index; i < n; i++)
    {
        if (!chk[i] && !ans[num[i]])
        {
            chk[i] = 1;
            ans[num[i]] = 1;
            ans[depth] = num[i];
            dfs(depth + 1,i + 1,n,m);//오름차순으로 뽑기 위해
            chk[i] = 0;//다시 꺼주는 이유는 그 전에 뽑았던 애를 다음 노드로 넘어갔을 때 또 뽑고 싶기 때문이다.
        }
    }
    for (int i = 0; i < n; i++)
        ans[num[i]] = 0;
}



void v2go(int index ,int selected, int n, int m) {

    if(DEBUG) printf("index:%d ,selected:%d ,n:%d ,m:%d\n",index,selected,n,m);
    if(selected == m) {//깊이 
        for(int i=0 ; i<m ; i++) {
            printf("%d",num[ans[i]]);//printf("%d",num[a[i]]); 차이?? 
            if(i != m-1) {
                printf(" ");
            }
        }
        puts("");
        return;
    }
    
    if(index >= n) {
    	return;
	}
	
	ans[selected] = index;
	v2go(index+1, selected+1, n, m);
	ans[selected] = 0;
	v2go(index+1, selected, n,m);
	
}


void go(int index ,int start, int n, int m) {
    /*
    N개의 자연수와 자연수 M이 주어졌을 때, 아래 조건을 
    만족하는 길이가 M인 수열을 모두 구하는 프로그램을 작성하시오. 
    N개의 자연수는 모두 다른 수이다.
 
      - N개의 자연수 중에서 M개를 고른 수열
      - 고른 수열은 오름차순이어야 한다.
    */
    if(DEBUG) printf("index:%d ,start:%d ,n:%d ,m:%d\n",index,start,n,m);
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
    else {
        for(int i=start; i<n ; i++) {
            if(chk[i]) continue;
            chk[i] = true;
            ans[index] = i;
            //a[index] = num[i];
            go(index+1,start+1,n,m);
            chk[i]= false;
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
	v2go(0,0,N,M);
	
    return 0;//
}
