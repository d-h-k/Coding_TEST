#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int n;
char a[20];
vector<string> ans;
bool check[10];
bool ok(string num) {
    for (int i=0; i<n; i++) {
  
