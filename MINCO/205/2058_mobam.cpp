#include <iostream>
using namespace std;


int main() {
    int v1[4];
    int v2[4];


    for(int i=0 ; i<4 ; i++) {
        cin>>v1[i];
    }
    for(int i=0 ; i<4 ; i++) {
        cin>>v2[i];
    }

    int a=0;
    int b=0;

    int result[8] = {0};
    int t=0;

    while(1) {

        if(a==4 && b==4 ) {
            break;
        }
        else {
            if ( a==4 ) {
                result[t] = v2[b];	
                t++;
			    b++;
            }
            
            else if (b == 4)
            {
                result[t] = v1[a];
                t++;
                a++;
            }
            else if (v1[a] <= v2[b])
            {
                result[t] = v1[a];
                t++;
                a++;
            }
            else
            {
                result[t] = v2[b];
                t++;
                b++;
            }
        }
	}

	for (int i = 0; i < 8; i++)
	{
		cout << result[i] << " ";
	}

	return 0;
}