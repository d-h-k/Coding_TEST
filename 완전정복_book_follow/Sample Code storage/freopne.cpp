#include <cstdio>
#include <iostream>
#define  MAX_LEN  1000

using namespace std;


int main(int argc, char** argv) {
	FILE *stream, *stream1, *quot;
	char str[MAX_LEN], *result, *temp;
	int  i=0, T;
	int test_case;
	
	/*
	   �Ʒ��� freopen �Լ��� input.txt �� read only �������� �� ��,
	   ������ ǥ�� �Է�(Ű����) ��� input.txt ���Ϸκ��� �о���ڴٴ� �ǹ��� �ڵ��Դϴ�.
	   //�������� �ۼ��� �ڵ带 �׽�Ʈ �� ��, ���Ǹ� ���ؼ� input.txt�� �Է��� ������ ��,
	   freopen �Լ��� �̿��ϸ� ���� cin �� ������ �� ǥ�� �Է� ��� ���Ϸκ��� �Է��� �޾ƿ� �� �ֽ��ϴ�.
	   ���� �׽�Ʈ�� ������ ������ �Ʒ� �ּ��� ����� �� �Լ��� ����ϼŵ� �����ϴ�.
	   freopen �Լ��� ����ϱ� ���ؼ��� #include <cstdio>, Ȥ�� #include <stdio.h> �� �ʿ��մϴ�.
	   ��, ä���� ���� �ڵ带 �����Ͻ� ������ �ݵ�� freopen �Լ��� ����ų� �ּ� ó�� �ϼž� �մϴ�.
	*/
	
	//freopen(input.txt&quot;, &quot;r&quot;, stdin);
	quot = freopen("input.txt", "r", stdin);
	//cin>>T;
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	
	//fgets(str, 999, quot);
	//gets(str);
	//printf("%s",str);
	
	for(i=0 ; i<100 ; i++) {
		temp = fgets(str, 999, quot);
		
		if(temp == NULL ) {
			break;
		}
		printf("%s",str);
	}
	
	//cout<<stdin<<endl;
	//for(test_case = 1; test_case <= T; ++test_case)
	//{

 	/*
   	stream = fopen("test.txt","r");
   	if ((result = fgets(line,MAX_LEN,stream)) != NULL)
   	printf("The string is %s\n", result);
 	*/
   	/* Change all spaces in the line to '*'. */
   	/*
   	for (i=0; i<=sizeof(line); i++)
     	if (line[i] == ' ')
        	line[i] = '*';
 
   	stream1 = stream;
   	stream2 = freopen("", "w+", stream1);
   	fputs( line, stream2 );
   	fclose( stream2);
   	*/
}
