#include <iostream>

using namespace std;

int arr[3][2][2] = {
    2,4,1,5,
    2,3,3,6,
    7,3,1,5
};

int main() {    
    int a;
    cin >> a;
    int maxi=0 , idx,idy;
    int mini=1400000000, ni_idx,ni_idy;
    for(int i=0 ; i<2 ; i++ ) {
        for(int j=0 ; j<2 ; j++ ) {

            if(maxi <arr[a][i][j] ) {
                maxi = arr[a][i][j];
                //idx = j;
                //idy = i;

            }

            
            if(mini > arr[a][i][j] ) {
                mini = arr[a][i][j];
                //ni_idx = j;
                //ni_idy = i;

            }

        }
    }

    cout << "MAX=" << maxi<<endl;
    cout << "MIN=" << mini<<endl;

    return 0;
}