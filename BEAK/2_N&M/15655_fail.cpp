#include<iostream>
#include<algorithm>

using namespace std;

//vector<int> a = {0,};
//vector<int> num= {0,};
int a[10];
int num[10];//���� �� �Է¹� 
int c[10];

const int DEBUG = 0;


void dfs(int depth, int index) {
	if(depth == m) {
		for(int i=0 ; i<m ; i++) {
			printf("ANSE")
		}
	}
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
    if(index > m) {//���� 
        for(int i=0 ; i<m ; i++) {
            printf("%d",num[a[i]]);//printf("%d",num[a[i]]); ����?? 
            if(i != m-1) {
                printf(" ");
            }
        }
        puts("");
        return;
    }
    else {
        for(int i=start; i<n ; i++) {
            if(c[i]) continue;
            c[i] = true;
            a[index] = i;
            //a[index] = num[i];
            go(index+1,start+1,n,m);
            c[i]= false;
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
				    
	     
		   puts(""); if(DEB printf("%d",num[i]);
	    }
	}
	

    go(0,0,N,M);

    return 0;//
}
