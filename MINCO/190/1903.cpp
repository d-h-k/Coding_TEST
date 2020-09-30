#include <cstdio>
#include <cstring>

using namespace std;


struct a1903
{   
    char buger1[20] = {'\0',};
    char buger2[20] = {'\0',};
    /* data */
}typedef MC;

int _strlen(char * s1) {
    unsigned int len=0;

    while(s1[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    MC bob;
    MC tom;

    scanf(" %s",bob.buger1);
    scanf(" %s",bob.buger2);
    scanf(" %s",tom.buger1);
    scanf(" %s",tom.buger2);
    

    printf("bob.burger1=%d\n",_strlen(bob.buger1));
    printf("bob.burger2=%d\n",_strlen(bob.buger2));
    printf("tom.burger1=%d\n",_strlen(tom.buger1));
    printf("tom.burger2=%d\n",_strlen(tom.buger2));
    
    return 0;
}