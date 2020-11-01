//sap6.cpp
#include <iostream>

using namespace std;

int data[] = {
    0,5,3,7,2,
    4,0,1,0,0,
    0,9,0};
//char data[] = "_53724_1____9_";
//14

void dfs_bitree(int now, int sum) {
    cout << "sum : "<<sum<<endl;
    if(now >=13 || data[now] == '_') {
        
        return;
    }
    else {
        if(now*2 >20 ) {
            dfs_bitree(now*2,sum+(int)(data[now*2]-'0') );
            dfs_bitree(now*2+1,sum+(int)(data[now*2+1]-'0'));    
        }
    }


    
}

int main( ){    

    dfs_bitree(1,(int)(data[0]-'0'));

    return 0;
}