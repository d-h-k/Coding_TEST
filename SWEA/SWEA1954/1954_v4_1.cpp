#include <stdio.h>

int matrix[101][101];
int num=1;
int delta=1;
int limit=0;
int i=0,j=-1;
int N=0;
int p,q;
int T=0;
int test_case=1;

void snale_matrix(){
	num=1;
	delta=1;
	i=0,j=-1;
	
    
	while(1){
 
        //���η� �̵��ϸ鼭 �ϳ��� �Ҵ�
        for(p=0; p<limit; p++){
            j=j+delta;
            matrix[i][j]=num;
            num++;
        }
 
        //Ƚ�� ���̰�
        limit--;
 
        if(limit<0) break;
 
        //���η� �̵��ϸ鼭 �ϳ��� �Ҵ�
        for(p=0; p<limit; p++){
            i=i+delta;
            matrix[i][j]=num;
            num++;
        }
 
        //�̵������� ������ �ٲ�
        delta=-delta;
    }
 
    
    printf("#%d\n",test_case);
    for(p=0; p<N; p++){
        for(q=0; q<N; q++){
            printf("%d,",matrix[p][q]);
        }
        printf("\n");
    }
 
}
 
int main(void){
	
	scanf("%d",&T);
	for(test_case=1 ; test_case<T ; test_case++) {
		scanf("%d",&N);
		limit=N;
		snale_matrix();	
	}
    
    return 0;
}

