#include <iostream>

using namespace std;


struct NODE
{
    int age;
    NODE * pn1;
    NODE * pn2;
    
    /* data */
}typedef node;

node sim,wo1,wo2,m1,m2,m3;

int main() {
    
    sim.age = 20;
    sim.pn1 = &wo1;
    sim.pn2 = &wo2;
    
    
    wo1.age = 29;
    wo1.pn1 = &m1;
    wo1.pn2 = &m2;

    
    wo2.age = 30;
    wo2.pn1 = &wo1;
    wo2.pn2 = &m3;


    m1.age = 25;
    m1.pn1 = NULL;
    m1.pn2 = NULL;
    
    
    m2.age = 40;
    m2.pn1 = NULL;
    m2.pn2 = NULL;
    
    
    m3.age = 38;
    m3.pn1 = NULL;
    m3.pn2 = NULL;

    //cout << "hi"<<endl;

    return 0;
}