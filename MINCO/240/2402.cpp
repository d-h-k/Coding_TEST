#include <iostream>
#include <algorithm>

using namespace std;

int age[5] = {0};
int *pdata[5];

int main() {
    for(int i=0 ; i<5 ; i++) {
        cin >> age[i];

        pdata[i] = &age[i];
    }
    

    int maxi = max(*pdata[0],*pdata[4]);
    int mini = min(*pdata[0],*pdata[4]);
        
    for(int i=0; i<5 ; i++) {
        maxi = max(maxi,*pdata[i]);
        mini = min(mini,*pdata[i]);
    
    }
    
    
    
    cout << "MAX:"<<maxi<<endl<<"MIN:"<<mini<<endl;
    return 0;
}