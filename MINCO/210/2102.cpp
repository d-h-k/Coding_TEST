//#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;


int main() {

    char id[200];
    char pw[200];


    fgets(id,200,stdin);
    fgets(pw,200,stdin);

    char admin_pw[] = "qlqlaqkq";
    char admin_id[] = "tkaruqtkf";

    char * a, * b;

    a = strstr(id,admin_id);
    b = strstr(pw,admin_pw);

    if(*a != '\0' && *b != '\0') {
        puts("LOGIN");
    }
    else {
        puts("INVALID");
    }


    return 0;
}