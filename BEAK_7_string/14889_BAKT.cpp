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
       
