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
	   아래의 freopen 함수는 input.txt 를 read only 형식으로 연 후,
	   앞으로 표준 입력(키보드) 대신 input.txt 파일로부터 읽어오겠다는 의미의 코드입니다.
	   //여러분이 작성한 코드를 테스트 할 때, 편의를 위해서 input.txt에 입력을 저장한 후,
	   freopen 함수를 이용하면 이후 cin 을 수행할 때 표준 입력 대신 파일로부터 입력을 받아올 수 있습니다.
	   따라서 테스트를 수행할 때에는 아래 주석을 지우고 이 함수를 사용하셔도 좋습니다.
	   freopen 함수를 사용하기 위해서는 #include <cstdio>, 혹은 #include <stdio.h> 가 필요합니다.
	   단, 채점을 위해 코드를 제출하실 때에는 반드시 freopen 함수를 지우거나 주석 처리 하셔야 합니다.
	*/
	
	//freopen(input.txt&quot;, &quot;r&quot;, stdin);
	quot = freopen("input.txt", "r", stdin);
	//cin>>T;
	/*
	   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
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
