#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main (){

    char a[] = " #\n# #\n###\n# #\n# #";
    char b[] = "bB";
    char c[] = "CC";
    char d[] = "##\n# #\n# #\n# #\n##";
    char *arr[] = {a,b,c,d};
    
    int input;
    cin >> input;
    cout << arr[input]<<endl;


    return 0;
}