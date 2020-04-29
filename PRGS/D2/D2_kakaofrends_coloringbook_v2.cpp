#include <vector>
#include <cstring>
#include <queue>
#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;


int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };
int N, M, DEBUG=1;
int maxarea = 0;
vector<vector<int> > pic;
vector<vector<int> > visited;

void bfs(int pos_y, int pos_x, int color,int num_of_area) {
    queue<pair<int,int> > q;
    
    q.push(make_pair(pos_y,pos_x));
    int area_size=0;
    
    while(!q.empty()) {
        
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        
        
        visited[y][x] = num_of_area;
        if(pic[pos_y][pos_x] == color) {//영역이 같음
            area_size++;    
            //cout<<", area_size:"<<area_size<<endl;
        }
        
        
    		if(DEBUG) { cout<<"x:"<<x<<", y:"<<y<<endl;}
        
        for(int k=0 ; k<4 ; k++) {
            int nx = x+dx[k];
            int ny = y+dy[k];
            if(0<=nx && nx<=N && 0<=ny && ny<=M && visited[ny][nx]==0) {
                q.push(make_pair(ny,nx));    
            }
        }
    }
    
    if(DEBUG) { cout<<", area_size:"<<area_size<<endl;}
    
    if(maxarea<area_size) {
        maxarea = area_size;
    }
    return;
}


// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int> > picture) {
   
    vector<int> answer(2);
    int anum=0;
    
    M=m,N=n;
    pic = picture;
    visited.assign(M, vector <int>(N, 0));
    
    if(DEBUG) {//i = m = y축 ,,,, //j = n = x축
        puts("Before processing");
        for(int i=0 ; i<m ; i++) {
            for(int j=0 ; j<n ; j++) {
                cout<<picture[i][j]<< " ";
            }
            cout<<"\n";
        }    
    }
    
    //processing
    for(int i=0 ; i<m ; i++) {
        for(int j=0 ; j<n ; j++) {//y=i,  x=j
            if(visited[i][j]==0 && pic[i][j]!=0) {
                anum++;
								bfs(i,j,pic[i][j],anum);
            }
        }
        
    }    
    
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    
    answer[0] = number_of_area = anum;
    answer[1] = max_size_of_one_area = maxarea;
    return answer;
}


int main(int argc, char** argv)
{
	vector<vector<int> > tc1 = { {1, 1, 1, 0},{1, 2, 2, 0},{1, 0, 0, 1},{0, 0, 0, 1},{0, 0, 0, 3},{0, 0, 0, 3} };
	
	vector<int> answer = solution(6,4,tc1);
	printf("answer : %d,%d \n", answer[0], answer[1]);

}
