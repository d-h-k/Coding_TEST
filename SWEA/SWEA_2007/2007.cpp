//BF �������� �ذ�
// if ���̰� 1�̶��, 2���---> 30�̶� �� 
/////////////////////////////////////////////////////////////////////////////////////////////
#define DEBUG 0

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	freopen("input.txt", "r", stdin);
	cin>>T;
	/*

	*/
	if(DEBUG) {
		//T=1;
	}
	for(test_case = 1; test_case <= T; ++test_case)
	{

		string mystr;
		cin>> mystr;
		
		bool is_find = true;
		for(int i=1 ; i<=30 ; i++) {//i=�ݺ����� 
			string sub = mystr.substr(0,i);
			
			is_find = true;
			
			for(int j=i ; j<30 ; j=j+i) {
				string next = mystr.substr( j, i );
				if(DEBUG) {
					puts("");
					cout<< "sub:"<<sub <<"    "<<"next:"<<next;
					puts("");
				}
				if( 0 !=  sub.compare(next)) {
					if(next.length() == i) {
						if(DEBUG) {puts("worng!!");}
						//no
						is_find= false;
						break;		
					}
					
				}
			}
			
			
				
			
			
			if(is_find == true) {
				printf("#%d %d\n",test_case, i);
				break;
			}
		}
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}



/*
		string ins;
		int ans = 0;
		int temp = 0;
		
		cin>>ins;// �������ڿ� �Է¹��� 
		
		for(int i=1; i<=30 ; i++) {//����Ž�� ���� 1�̶��~30  
			bool is_find = false;
			
			char match = ins[i-1];
			for(int j=i ; j<=30 ; j=j+i) {
				if(DEBUG) {
					//printf("sd");
				}
				is_find = true;
				if(ins[j] != match) {
				
					is_find = false;
					break;// Ʋ�� �̰� �Ƴ�! 
					
				}
				else {
					// ���� 
					
				}
				
				
			}
			if(is_find) {
				printf("#%d %d\n",test_case, i);
				break;
			}
			
			
		}
		



*/
