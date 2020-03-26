#include <iostream>
#include <vector>

using namespace std;
const int MAX = 1000000;
const int DEBUG = 1;
//
//vector<bool> check(MAX+1);
//vector<int> prime_vec;
bool check[MAX+1];
int prime[MAX+1];
int pn;

int main(int argc, char** argv)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	//cout.tie(NULL);
	
	//get prime - by eratos
	check[0] = check[1] = true;//0,1 is prime exception 
	
	for(int i=2 ; i<=MAX ; i++) {
		if(check[i] == false) {
			prime[pn] = i;
			pn++;
			
			for(int j = i+i  ; j<=MAX ; j += i) {
				check[j] = true;
			}
		}
	}
	
	int N;
	
	while(1) {
		//cin>>N;
		cin >> N;
		if(N==0) {
			break;
		}
		
		bool is_find = false;
        for (int i = 1 ; i < pn ; i++) {
            int a = prime[i];
            int b = N-prime[i];
			
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

