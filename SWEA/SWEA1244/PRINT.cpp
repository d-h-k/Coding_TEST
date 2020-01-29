#include <cstdio>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
int n, result;
string num;
void dfs(int cur, int cnt) {
	if(cnt==n) {
    	printf("IN-DFS : pre-result:%d , Current-num:%d , ",result,stoi(num));
    	//cout<<"return DFS : pre-result:"<<result<<endl;
		result=max(result, stoi(num));
        printf("max : %d , cur:%d , cnt:%d\n",result,cur,cnt);
		return;
    }
    for(int i=cur; i<num.size(); i++) {
        for(int j=i+1; j<num.size(); j++) {
            if(num[i] <= num[j]) {
                swap(num[i], num[j]);
                printf("called DFS : dfs(%d,%d) ,swapped num[%d]--num[%d] , num:%s\n",i,cnt+1,i,j,num.c_str());
				dfs(i, cnt + 1);
				printf("returned DFS : dfs(%d,%d) , num:%s\n",i,cnt+1,num.c_str());
                swap(num[i], num[j]);
            }
        }
    }
}
int main() {
    //ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int tc;
    freopen("input.txt","r",stdin);
    cin>>tc;
    for(int i=1; i<=5 /*tc*/; i++) {
        cin>>num>>n;
        result=0;
        cout<<"testcase:"<<i<<" num:"<<num<<" , n:"<<n<<"\n======================="<<endl;
        dfs(0,0);
        cout<<"#"<<i<<" "<<result<<"\n\n\n\n";
    }
    return 0;
}

