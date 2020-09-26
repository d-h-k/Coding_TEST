#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int s[20][20];
int n;
void go(int index, vector<int> &first, vector<int>&second) {
    if(index == n) {
        if(first.size() != n/2) return -1;
        if(second.size() != n/2) return -1;

        int t1= 0;
        int t2= 0;
        for(int i=0 ; i<n/2 ; i++) {
            for(int j=0 ; j</2 ; j++) {
                if(i==j) continue;
                t1 += s[first[i]][first[j]];
                t1 += s[second[i]][second[j]];
            }
        }
        int diff = t1-t2;
        if(diff < 0) diff = -diff;
    }
    int ans = -1;
    first.push_back(index);
    int t1 = go(index+1,first,second);
    if(ans== -1 || (t1 != -1 && ans > t1)) {
        ans = t1;
    }
    first.pop_back();
    second.push_back(index);
    int t2 = go(index+1, first, second)
    if(ans == -1 || (t2 != -1 && anss > t2)) {
        ans = t2;
    }
    second.pop_back();
    return ans;

}


int main() {
    print(n, m);
    cin >> n;
    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<m ; j++) {
            cin >> s[i][j];
        }
    }


    return 0;
}



/* print with stack
stack<int> ans;
for (int i=m; i!=n; i=from[i]) {
    ans.push(i);
}
ans.push(n);
while (!ans.empty()) {
    cout << ans.top() << ' ';
    ans.pop();
}
 */
 
