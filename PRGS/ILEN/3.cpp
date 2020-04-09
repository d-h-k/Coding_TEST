#include <string>
#include <vector>
#include <iostream>
#include <stack>
using namespace std;
string sec_rd;
string backup;//backup=sec_rd
const int DEBUG = 0;
int maxi=0, total_len = 0;
void dfs(int pos, int bosu, int len) {
    //pos : starting point of road ->> to repave the road
    //bosu : 
    //len : insert 1, total length of orad
    //
    char now_section = sec_rd[pos];
    int j=0,nowlen=0;
    
    //시작점 부터 보수
    for(int i=pos ; i<total_len ; i++) {
        if(sec_rd[i]=='0') {//손상된길, 보수해야함
            if(bosu<=0) {
                break;
            }
            else {
                bosu--;
                sec_rd[i]= '1';
            }
        }
    }
    
    //
    for(int i=pos ; i<total_len ; i++) {
        if(sec_rd[i]=='0') {
            nowlen = i-pos;
            break;
        }
    }
    
    if(DEBUG) {cout<<"now len : "<<nowlen<<endl;}
    
    if(nowlen>maxi) {
        maxi = nowlen;
    }
    
    sec_rd=backup;
}
 
int solution(string road, int n) {
    int answer = -1;
    int road_len = total_len = road.size();
    char section= '2';
    int destory=0;  
    sec_rd=road;
    vector<int> search_point;
    for(int i=0 ; i<road_len ; i++) {
        if(road[i] == '0') {
            destory++;
            if(road[i-1]== '1' && road[i]== '0' ) {
                section++;
                search_point.push_back(i);
            }
            
        }
        else{
            if(road[i-1]== '0' && road[i]== '1' ) {
                search_point.push_back(i);
            }
            sec_rd[i] = section; 
        }
    }
    
    if(DEBUG) {
        cout<< "destory:" << destory<< "\nsection : "<< sec_rd<<endl; 
        /*
        입력값 〉	"111011110011111011111100011111", 3
        기댓값 〉	18
        실행 결과 〉	실행한 결괏값 -1이(가) 기댓값 18와(과) 다릅니다.
        출력 〉	destory:7
        section : 222033330044444055555500066666
        */
    }
    
    if(destory<= n) {//Optimal ->> 재료가 충분한경우 그냥 다 보수공사가 가능함
        return road_len;
    }
    else {
        backup=sec_rd;
        int num_sp = search_point.size();
        for(int j=0 ; j<num_sp ; j++) {
            //if(DEBUG) { cout<<"start at:"<<search_point[j]<<"  n:"<<n <<endl;}
            dfs(search_point[j],n,1);
        }
    }
    answer=maxi;
    
    return answer;
}


