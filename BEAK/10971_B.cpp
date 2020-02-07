#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int sumv();
//vector<vector<int> > v(11, vector<int>(11,0));
int v[11][11];
const int DEBUG=1;
vector <int> path;
int main(int argc, char** argv)
{
	int num,temp=0,min=0;
	
	FILE * fp;
	
	fp = freopen("./testdata/10971_B.txt","r",stdin);
	if(DEBUG && (fp==0)) {
		puts("NO FILE");
		exit(1);		
	}
	
	scanf("%d",&num);
	for(int i=0; i<num ; i++) {
		for(int j=0 ; j<num ; j++) {
			scanf("%d",&v[i][j]);		
		}
	}
	for(int i=0 ; i<num ; i++) {
		path.push_back(i+1);
	}
	
	do {
	// 1. ������� ��ȸ�ϴ� ���� ���ϱ�
	// 2. ��ȸ ������
	// 3. ��ȸ�� ������ �� ����ϱ� 
		temp=0,min=999;
		temp=sumv();//path�� ��δ�� ��ȸ�ϴ� ���� ���� 
		
		if(min>temp) {
			min=temp;
		}
		
	}while( next_permutation(path.begin(),path.end()) );

	printf("%d",min);	
	
	return 0;//
}

int sumv() {
	int len = path.size();
	int sum=0,a,b;
	for(int i=0 ; i<len ; i++) {
		a=path[i];
		b=path[i+1];
		sum += v[a][b];
	}
	
	return sum;
}
