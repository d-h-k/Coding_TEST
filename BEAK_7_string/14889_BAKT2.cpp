/*//===========

https://www.acmicpc.net/source/share/9a635193536e4ad3bcb96930ded78405

=================================*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int s[20][20];
int n;
int go(int index, vector<int> &first, vector<int> &second) {
    if (index == n) {
        if (first.size() != n/2) return -1;
        if (second.size() != n/2) return -1;
        int t1 = 0;
        int t2 = 0;
        for (int i=0; i<n/2; i++) {
            for (int j=0; j<n/2; j++) {
                if (i == j) continue;
                t1 += s[first[i]][first[j]];
                t2 += s[second[i]][second[j]];
            }
        }
        int diff = t1-t2;
        if (diff < 0) diff = -diff;
        return diff;
    }
   
