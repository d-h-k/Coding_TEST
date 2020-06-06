#include <iostream>
#include <vector>

#define MAX 1000000

using namespace std;
const int DEBUG = 1;
//
//vector<bool> check(MAX+1);
//vector<int> prime_vec;
bool check[MAX+3];
int prime_vec[MAX+3];
int pn;

int main(int argc, char** argv)
{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
	
	//get prime - by eratos
	check[0] = check[1] = true;//0,1 is prime exception 
	
	for(int i=2 ; i<=MAX ; i++) {
		if(check[i] == false) {
			prime_vec[pn] = i;
			pn++;
			
			for(int j = i*2  ; j<=MAX ; j += i) {
				check[j] = true;
			}
		}
	}
	
	int N;
	
	while(1) {
		//cin>>N;
		scanf("%d",&N);
		if(N==0) {
			exit(1);
		}
		
		/*
		else if(N<=6) {
			cout << "Goldbach's conjecture is wrong.\n";
			continue;
			
		}else {
		}
		*/
		
		//N = prime_vec[i] + b //이 되는 소수 b를 찾음. 즉, b = N - prime_vec[i] 가 소수인지 아닌지 판단하면 됨.
        bool is_find = false;

        for (int i = 0; prime_vec[i] < N; i++)
        {
            int a = prime_vec[i];
            int b = N-prime_vec[i];
			
            if (check[b] == false)
            {
                cout << N << " = " << a << " + " << b << "\n";
                is_find = true;
                break;
            }
        }

        if (!is_find) {
        	cout << "Goldbach's conjecture is wrong.\n";
		}
            
	}
	
	
	
	return 0;//
}

