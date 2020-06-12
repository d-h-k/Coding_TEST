#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool check(vector<int> &perm , vector<char> &a) {
    for(int i=0 ; i<a.size() ; i++) {
        if(a[i] == '<' && perm[i] > perm[i+1] ) {
            return false;
        }
        if(a[i] == '>' && perm[i] < perm[i+1] ) {
            return false;
        }
    }
    return false;
}


int main() {
    int k;
    cin >> k;
    vector<char> a(k);
    for(int i=0 ; i<k ; i++ ) {
        
    }
}