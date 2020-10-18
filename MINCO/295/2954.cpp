#include <iostream>
//이거 2번임 씨발
using namespace std;


int evd[7] = {-1,0,0,1,2,4,4};
int tsp[7] = {8,3,5,6,8,9,10};

int run(int pre) {
    cout << pre<<"번index("<<tsp[pre]<<"시)"<<endl;
        
    if(evd[pre] == -1) {

    }
    else {
        run(evd[pre]);
        cout << pre<<"번index("<<tsp[pre]<<"시)"<<endl;
        
    }

    return 0;
}

int main() {
    int n;
    cin >> n;
    
    
    run(n);
    return 0;
}