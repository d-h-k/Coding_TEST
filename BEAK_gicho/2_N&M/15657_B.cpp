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
    //���� Ƚ�� == n
    for (int i = index; i < n; i++)
    {
        if (!chk[i] && !ans[num[i]])
        {
            chk[i] = 1;
            ans[num[i]] = 1;
            ans[depth] = num[i];
            dfs(depth + 1,i + 1,n,m);//������������ �̱� ����
            chk[i] = 0;//�ٽ� ���ִ� ������ �� ���� �̾Ҵ� �ָ� ���� ���� �Ѿ�� �� �� �̰� �ͱ� �����̴�.
        }
    }
    for (int i = 0; i < n; i++)
        ans[num[i]] = 0;
}



void v2go(int index ,int selected, int n, int m) {

    if(DEBUG) printf("index:%d ,selected:%d ,n:%d ,m:%d\n",index,selected,n,m);
    if(selected == m) {//���� 
        for(int i=0 ; i<m ; i++) {
            printf("%d",num[ans[i]]);//printf("%d",num[a[i]]); ����?? 
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
    N���� �ڿ����� �ڿ��� M�� �־����� ��, �Ʒ� ������ 
    �����ϴ� ���̰� M�� ������ ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 
    N���� �ڿ����� ��� �ٸ� ���̴�.
 
      - N���� �ڿ��� �߿��� M���� �� ����
      - �� ������ ���������̾�� �Ѵ�.
    */
    if(DEBUG) printf("index:%d ,start:%d ,n:%d ,m:%d\n",index,start,n,m);
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
